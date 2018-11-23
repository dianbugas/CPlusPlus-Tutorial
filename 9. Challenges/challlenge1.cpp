#include <iostream>

using namespace std;

int main()
{
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
class test{
    public:
    void foo(){        
    }
};

test* myPtr = new test();
myPtr -> foo();

// No 4
// No 5
// No 6
// No 7
// No 8

}