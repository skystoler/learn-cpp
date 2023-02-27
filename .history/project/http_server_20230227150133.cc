#include <iostream>
#include <stdlib.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <pthread.h>

#define SMALL_BUFF 100

using namespace std;

void* request_handler(void* argv){
    int client_sock=*((int*)argv);
    char req_line[SMALL_BUFF];
    char method[10];
    char ct[15];
    char file_name[30];

    FILE* client_read=fdopen(client_sock,"r");
    FILE* client_write=fdopen(dup(client_sock),"w");

    //char *fgets(char *str, int n, FILE *stream)
    fgets(req_line,SMALL_BUFF,client_read);

    if(strstr(req_line,"HTTP/")==NULL){
        //send_error(client_write);
        fclose(client_read);
        fclose(client_write);
        return;
    }

    //char *strtok(char *str, const char *delim) 返回被分解的第一个子字符串
    strcpy(method,strtok(req_line," /"));
    strcpy(file_name,strtok(NULL," /"));
    strcpy(ct,content_type(file_name));
    if(strcmp(method,"GET")!=0){
        fclose(client_read);
        fclose(client_write);
        return;
    }
    fclose(client);
    send_data(client_write,ct,file_name);
}

int main(int argc,char* argv[]){
    int serv_sock,client_sock;

    serv_sock=socket(PF_INET,SOCK_STREAM,0);

    struct sock_addr_in serv_addr,client_addr;
    memset(&serv_addr,0,sizeof(serv_addr));
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_addr.s_addr=INADDR_ANY;
    serv_addr.sin_port=htons(atoi(argv[1]));
    bind(serv_sock,(struct sock_addr*)&serv_addr,sizeof(serv_addr));

    listen(serv_sock,20);

    pthread_t t_id;

    while(1){
        client_sock=accept(serv_sock,(struct sock_addr*)&client_addr,&sizeof(client_addr));

        pthread_create(&t_id,NULL,request_handler,&client_sock);

        pthread_detach(t_id);
    }
    close(serv_sock);
    return 0;
}