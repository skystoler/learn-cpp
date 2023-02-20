#include <math.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    cout<<"abs: "<<abs(0.5-0.8)<<endl;
    cout<<"fabs: "<<fabs(0.5-0.8)<<endl;
    vector<float> vec={0.0002,0.0003,0.0002,0.0001};
    fstream fout;
    fout.open("./output/data.txt",ios::app);

    for(auto v:vec) fout<<fixed<<setprecision(2)<<v<<" ";
    fout<<endl;
    for(auto v:vec) fout<<v<<" ";
    fout<<endl;
    for(auto v:vec) fout<<setprecision(5)<<v<<" ";
    fout<<endl;
    for(auto v:vec) fout<<fixed<<setprecision(8)<<v<<" ";
    fout<<endl;
    return 0;
}
