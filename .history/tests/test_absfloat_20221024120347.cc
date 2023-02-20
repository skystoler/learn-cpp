#include <math.h>
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    cout<<"abs: "<<abs(0.5-0.8)<<endl;
    cout<<"fabs: "<<fabs(0.5-0.8)<<endl;
    vector<float> vec={0.0002,0.0003,0.0002,0.0001};
    fstream fout;
    fout.open("./data.txt",ios::app);
    for(auto v:vec) fout<<v<<" ";
    return 0;
}