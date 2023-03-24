#include <iostream>

using namespace std;

template<typename F,typename T>
T CommonCast(F str){
    return  Lexical_cast<T>(str);
}
   
