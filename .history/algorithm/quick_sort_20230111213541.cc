#include <vector>
#include <iostream>

using namespace std;

void merge_sort(int l,int r,vector<int>& input){
    if(l<r){
        int i=l,j=r;
        int mark=input[i];
        while(i<j){
            while(i<j && input[j]>=mark){
                --j;
            }
            if(i<j){
                input[i]=input[j];
                ++i;
            }
            while(i<j && input[i]<mark){
                ++i;
            }
            if(i<j){
                input[j]=input[i];
                --j;
            }  
        }
        input[i]=mark;
        merge_sort(l,i-1,input);
        merge_sort(i+1,r,input);
    }
}

void quick_sort(vector<int>& input){
    int n=input.size();
    merge_sort(0,n-1,input);
}

void quick_sort2(int l,int r,vector<int>& input){
    if(l<r){
        int i=l,j=r;
        int mid=l+r>>1;
        while(i<j){
            while(input[i]<input[mid]) ++i;
            while(input[j]>input[mid]) --j;
            if(i<j) swap(input[i],input[j]);
        }
        quick_sort2(l,mid-1,input);
        quick_sort2(mid+1,r,input);
    }
}
int main(){
    vector<int> input={4,5,7,9,6,8,1};
    //quick_sort(input);
    quick_sort2(0,input.size()-1,input);
    for(auto &i:input){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}