#include<iostream> 
using namespace std; 
class ClassA 
{ 
public: 
    void aClass() 
    { 
        cout<<"I am sai\n"; 
    } 
}; 
class ClassB: public ClassA 
{ 
public: 
    void bClass() 
    { 
        cout<<"I am sunil\n"; 
    } 
}; 
class ClassC: public ClassA 
{ 
public: 
    void cClass()
    { 
        cout<<"I am abhi\n"; 
    } 
}; 
class ClassD: public ClassC,public ClassB 
{ 
public: 
    void dClass() 
    { 
       cout<<"I am sd\n"; 
    } 
}; 
int main() 
{ 
ClassD obj1; 
    obj1.bClass(); 
    obj1.cClass(); 
    obj1.dClass(); 
    return 0; 
}
