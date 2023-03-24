#include <iostream>

using namespace std;

template<class F,class T>
Class LexicalCast{
public:
    T operator()(const F& v){
        return boost::lexical_cast<T>(v);
    }
};
   
