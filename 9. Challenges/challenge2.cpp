using namespace std;

// No 1
int main()
{
    int f = 1, i = 2;
    while(++i < 5){
        f *= i;
    }
    cout << f;
}

// No 2
#include <iostream>
#include <fstream>

int main(){
    ofstream fileObj("myfile.txt");
    if(fileObj.is_open()){
        fileObj << "I work with files";
        fileObj.close();
    }else{
        cout << "Error" << endl;
    }
}

// No 3
class A{
};

class MyClass1 : public A{
    public:
    int newMember;
};

// No 4
template <class T>
class MyClass2{
    public:
    MyClass2(){        
    }
    MyClass2(T arg){
        cout << arg;
    }
};

// No 5
template <class T, class U>
T greate(T a, U b){
    if(a > b){
        return a; }        
    return b;
}