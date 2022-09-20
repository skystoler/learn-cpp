#include <iostream>
#include <vector>

using namespace std;

const int a[100];

int find(int x){
    if(x==a[x]) return x;
    else return find(a[x]);
}

int main(){

}