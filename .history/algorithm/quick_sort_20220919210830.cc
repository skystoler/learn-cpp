#include <vector>

using namespace std;

void merge_sort(int l,int r,vector<int>& input){
    if(l<r){
        int i=l,j=r;
        int mark=input[i];
        while(i<j){
            while(i<j && input[i]<mark){
                ++i;
            }
            if(i<j){
                input[j]=input[i];
                --j;
            }
            while(i<j && input[j]>=mark){
                --j;
            }
            if(i<j){
                input[i]=input[j];
                ++i;
            }
        }
        input[j]=mark;
        merge(l,i-1,input);
        merge(i+1,r,input);
    }
}

void quick_sort(vector<int>& input){
    int n=input.size();
    merge_sort(0,n-1,input);
}

int main(){
    vector<int> input={4,5,7,9,6,8,1};
    quick_sort(input);
    for(auto &i:input){
        cout<<i<<" ";
        cout<<endl;
    }
}