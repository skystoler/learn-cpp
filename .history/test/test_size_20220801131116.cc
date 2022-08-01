#include<iostream>

int main(int argc,char** agrv){
	int a;
	char b;

	int* ap=&a;

	cout<<"size of int: "<<sizeof(a)<<endl;
	cout<<"size of char: "<<sizeof(b)<<endl;
	cout<<"size of int pointer: "<<sizeof(ap)<<endl;

	int arr[8];
	int *arrp=&arr;
	cout<<"size of int array: "<<sizeof(arr)<<endl;
	cout<<"size of int array pointer: "<<sizeof(ap)<<endl;

	char c[]="this is a pig";
	char* cp=&c;
	cout<<"size of this is a pig"<<sizeof("this is a pig")<<endl;
	cout<<"size of char array: "<<sizeof(c)<<endl;
	cout<<"size of char array pointer: "<<sizeof(cp)<<endl;

	return 0;
}
