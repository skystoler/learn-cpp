#include <vector>

using namespace std;

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