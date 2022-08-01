#include<iostream>

/*
	64位系统,变量占据的空间大小
	各种指针都为8字节，32位机器为4字节
	结构体需要地址对齐
	字符串size末尾+1
*/
int main(int argc,char** agrv){
	int p;
	char q;
	int* pp=&p;
	std::cout<<"size of int: "<<sizeof(p)<<std::endl;
	//4
	std::cout<<"size of char: "<<sizeof(q)<<std::endl;
	//1
	std::cout<<"size of int pointer: "<<sizeof(pp)<<std::endl;
	//8

	struct A{
		int i;
		char j;
	};

	A a;
	A* ap=&a;
	std::cout<<"size of struct: "<<sizeof(a)<<std::endl;
	//4*2=8
	std::cout<<"size of struct pointer: "<<sizeof(ap)<<std::endl;
	//8

	int arr[8];
	int *arrp=arr;
	std::cout<<"size of int array: "<<sizeof(arr)<<std::endl;
	//4*8=32
	std::cout<<"size of int array pointer: "<<sizeof(arrp)<<std::endl;
	//8

	char c[]="this is a pig";
	char* cp=c;
	std::cout<<"size of this is a pig: "<<sizeof("this is a pig")<<std::endl;
	//14
	std::cout<<"size of char array: "<<sizeof(c)<<std::endl;
	std::cout<<"size of char array pointer: "<<sizeof(cp)<<std::endl;

	return 0;
}
