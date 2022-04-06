#include<stdio.h>
#include<iostream>

using namespace std;

template<class t>
class Arithematic{
    private:
    t a;
    t b;

    public:
    Arithematic(t a , t b);
    t add();
    t sub();
};

template<class t>
Arithematic<t>::Arithematic(t a, t b){
    this->a =a;
    this-> b =b;
}

template<class t>
t  Arithematic<t>::add(){
    t c;
    c=a+b;
    return c;
}

template<class t>
t  Arithematic <t>:: sub(){
    t c;
    c = a-b;
    return c;
}

int main(){
    Arithematic<float> ar(10.99,5.55);
    Arithematic<char> ar1('A','Z');

    cout<<"Add "<<ar.add()<<endl;
    cout<<"Substract "<<ar.sub()<<endl;

    cout<<"Add "<<ar1.add()<<endl;
    cout<<"Substract "<<ar1.sub()<<endl;
    cout<<"Add "<<(int)ar1.add()<<endl;
    cout<<"Substract "<<(int)ar1.sub()<<endl;

    return 0;
}