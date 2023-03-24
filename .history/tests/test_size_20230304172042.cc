#include<iostream>

/*
	64位系统,变量占据的空间大小
	各种指针都为8字节=64位，32位机器为4字节=32位，因为指针是地址，需要覆盖整个寻址空间
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

	struct X{
		int a;
		short b;
		int c;
		char d;
	};

	struct Y{
		int a;
		short b;
		char c;
		int d;
	};

	A a;
	X x;
	Y y;
	A* ap=&a;
	std::cout<<"size of struct A: "<<sizeof(a)<<std::endl;
	//4*2=8
	std::cout<<"size of struct X: "<<sizeof(x)<<std::endl;
	//16
	std::cout<<"size of struct Y: "<<sizeof(y)<<std::endl;
	//12
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
	//14
	std::cout<<"size of char array pointer: "<<sizeof(cp)<<std::endl;
	//8


	short int s;
	long int l;
	long long int ll;
	int8_t at;
	int16_t bt;
	int32_t ct;
	int64_t dt;
	uint8_t uat;
	uint16_t ubt;
	uint32_t uct;
	uint64_t udt;
	std::cout<<"size of short int: "<<sizeof(s)<<std::endl;
	//2
	std::cout<<"size of long int: "<<sizeof(l)<<std::endl;
	//8
	std::cout<<"size of long long int: "<<sizeof(ll)<<std::endl;
	//8
	std::cout<<"size of int8_t: "<<sizeof(at)<<std::endl;
	//1
	std::cout<<"size of int16_t: "<<sizeof(bt)<<std::endl;
	//2
	std::cout<<"size of int32_t: "<<sizeof(ct)<<std::endl;
	//4
	std::cout<<"size of int64_t: "<<sizeof(dt)<<std::endl;
	//9
	std::cout<<"size of uint8_t: "<<sizeof(uat)<<std::endl;
	//1
	std::cout<<"size of uint16_t: "<<sizeof(ubt)<<std::endl;
	//2
	std::cout<<"size of uint32_t: "<<sizeof(uct)<<std::endl;
	//4
	std::cout<<"size of uint64_t: "<<sizeof(udt)<<std::endl;
	//8

	size_t ss;
	std::cout<<"size of size_t: "<<sizeof(ss)<<std::endl;
	//

	return 0;
}
