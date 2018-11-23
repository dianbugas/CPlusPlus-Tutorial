#include <iostream>

using namespace std;

// No 1
// char str = "hello";

// No 2
class MyClass{
    public:
    MyClass(){
        mem = 12;}
    ~MyClass(){
    }

    private:
    int mem;
};

// No 3
int main()
{ 
    class test{
        public:
        void foo(){        
        }
    };

    test* myPtr = new test();
    myPtr -> foo();
}

// No 4
template <class ARG>
ARG doubler(ARG value)
{
    return value * 2;
}

// No 5
template <class T>
T foo(T a, T b, T c)
{
    if(c > a){
        return b;
    }

    return b + c;
}

// No 6
void foo(int arg){
    try{
        if(arg > 999) throw - 100; }
    catch(int x){        
    cout << "error!" << endl; }
}

// No 7
class MyClass{
    public:
    void foo(){}
};

// No 8
int main()
{
    try{
        int a; int b;
        cin >> a >> b;
        if(b == 0)
            throw 0;
        cout << a / b << endl;    
    }catch (int err){
        cout << "error" << endl;
    }
}