#include <iostream>
#include <vector>

using namespace std;

int insert(){
    if(l<r){
        int i=l;
        int j=r;
        int mark=nums[i];
        while(l<r){
            while(l<r && nums[j]>mark ){
                --j;
            }
            if(l<r){
                nums[i++]=nums[j];
            }
            while(l<r && nums[i]<mark){
                ++i;
            }
            if(l<r){
                nums[j--]=nums[i];
            }
        }
    }
}

int main(){
    const int size=100;
    int a[size];
}