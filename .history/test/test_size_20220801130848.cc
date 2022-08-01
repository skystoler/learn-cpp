#include<iostream>

int main(int argc,char** agrv){
	int a;
	char b;

	int* ap=&a;

	cout<<"size of int: "<<sizeof(a)<<endl;
	cout<<"size of char: "<<sizeof(b)<<endl;
	cout<<"size of int pointer: "<<sizeof(ap)<<endl;
	
	char c[]="this is a pig";

	char* cp=&c;
	cout<<"size of char array: "<<sizeof(c)<<endl;
	cout<<"size of char array pointer: "<<sizeof(cp)<<endl;

	return 0;
}
