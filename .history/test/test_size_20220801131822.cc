#include<iostream>

int main(int argc,char** agrv){
	int p;
	char q;
	int* pp=&p;
	std::cout<<"size of int: "<<sizeof(p)<<endl;
	cout<<"size of char: "<<sizeof(q)<<endl;
	cout<<"size of int pointer: "<<sizeof(pp)<<endl;

	struct A{
		int i;
		char j;
	};

	A a;
	A* ap=&a;
	cout<<"size of struct: "<<sizeof(a)<<endl;
	cout<<"size of struct pointer: "<<sizeof(ap)<<endl;

	int arr[8];
	int *arrp=&arr;
	cout<<"size of int array: "<<sizeof(arr)<<endl;
	cout<<"size of int array pointer: "<<sizeof(arrp)<<endl;

	char c[]="this is a pig";
	char* cp=&c;
	cout<<"size of this is a pig"<<sizeof("this is a pig")<<endl;
	cout<<"size of char array: "<<sizeof(c)<<endl;
	cout<<"size of char array pointer: "<<sizeof(cp)<<endl;

	return 0;
}
