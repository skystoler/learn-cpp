#include <iostream>
#include <memory>

class Singleton{
public:
    static Singleton* GetInstance(){
        static Singleton instance;
        return &instance;
    }
private:
    Singleton(){};
    ~Singleton(){};
    Singleton(const Singleton&);
    Singleton operator=(const Singleton&);
};