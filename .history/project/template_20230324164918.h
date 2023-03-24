#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>

using namespace std;

template<class F,class T>
class LexicalCast{
public:
    T operator()(const F& v){
        return boost::lexical_cast<T>(v);
    }
};
   
template<class T>
class LexicalCast<string,vector<T>>{
public:
    vector<T> operator()(const string& v){
        TAML::Node node=YAML::Load(v);
        typename vector<T> vec;
        string str;
        for(int i=0;i<node.size();++i){
            str.push_back(node[i]);
            vec.push_back(LexicalCast<string,T>()(str));
        }
    }
}
