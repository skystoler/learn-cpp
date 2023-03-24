#include <iostream>
#include <typeinfo>
 
// 模板类 MyAny，用于类型擦除
template<typename T>
class MyAny {
public:
    MyAny(const T& value) : m_value(value) {}

    // 虚函数，返回数据类型的 type_info 对象
    virtual const std::type_info& getType() const {
        return typeid(m_value);
    }

    // 获取存储的数据，返回一个类型为 void* 的指针
    virtual void* getData() const {
        return reinterpret_cast<void*>(const_cast<T*>(&m_value));
    }
 
private:
    T m_value;
};

// 函数模板，用于打印 MyAny 类型的对象
template<typename T>
void print(const MyAny<T>& a) {
    std::cout << "type: " << a.getType().name() << ", value: " << *(T*)(a.getData()) << std::endl;
}

template <typename T>
class CmpAny{
public:
    CmpAny(const T& value):m_value(value){

    }

    void print(){
        std::cout<<" "<m_value;
    }
private:
    T m_value;
};

int main() {
    MyAny<int> a(10);
    MyAny<double> b(3.14);
    MyAny<int> c(3.14);
    print(a);
    print(b);
    print(c);

    CmpAny<int> d(10);
    d.print();

    CmpAny<double> e(3.14);
    e.print();
    return 0;
}
