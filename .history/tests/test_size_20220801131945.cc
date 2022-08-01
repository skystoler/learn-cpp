#include<iostream>

int main(int argc,char** agrv){
	int p;
	char q;
	int* pp=&p;
	std::cout<<"size of int: "<<sizeof(p)<<std::endl;
	std::cout<<"size of char: "<<sizeof(q)<<std::endl;
	std::cout<<"size of int pointer: "<<sizeof(pp)<<std::endl;

	struct A{
		int i;
		char j;
	};

	A a;
	A* ap=&a;
	std::cout<<"size of struct: "<<sizeof(a)<<std::endl;
	std::cout<<"size of struct pointer: "<<sizeof(ap)<<std::endl;

	int arr[8];
	int *arrp=arr;
	std::cout<<"size of int array: "<<sizeof(arr)<<std::endl;
	std::cout<<"size of int array pointer: "<<sizeof(arrp)<<std::endl;

	char c[]="this is a pig";
	char* cp=c;
	std::cout<<"size of this is a pig"<<sizeof("this is a pig")<<std::endl;
	std::cout<<"size of char array: "<<sizeof(c)<<std::endl;
	std::cout<<"size of char array pointer: "<<sizeof(cp)<<std::endl;

	return 0;
}
