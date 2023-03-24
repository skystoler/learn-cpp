#include <stdio.h>

//21436587109
void output1(){
    const int N = 10;
    const int M = 2;
    int *a = new int[N];
    for (int i = 0; i < N; ++i)
        a[i] = (0 == i % 2) ? (i + 2) : (i + 0);
    int(*b)[N / M] = (int(*)[N / M]) a;
    for (int i = 0; i < M; ++i)
        for (int j = 0; j < N / M; ++j)
            printf("%d", b[i][j]);
}

//
void output2(){
    char *p[] = {"TENCENT", "CAMPUS", "RECRUITING"};
    char **pp[] = {p + 2, p + 1, p};
    char ***ppp = pp;
    printf("%s ", **++ppp);
    printf("%s", *++*++ppp);
}

int main(){
    //output1();
    outpput2();
    return 0;
}