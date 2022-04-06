#include<stdio.h>
#include<iostream>

using namespace std;

class Rectangle{
private:
    int length;
    int breadth;

    public:
    Rectangle(){
        length = 0 ;
        breadth = 0;
    }

    Rectangle(int l , int b){
        length = l ; 
        breadth = b;
    } 

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length *breadth); 
    }
  
    int setlength(int l){
        length = l;
    }

    int getbreadth(int b){
        breadth = b ;
    }

    int getlength(){
        return length;
    }

    int getbreadth(){
        return breadth ;
    }

    ~Rectangle(){
        cout<<"detructor";
    }

};

int main()
{
    Rectangle r(12,2);

    cout<<"Area"<<r.area()<<endl;
    cout<<"oerimeter"<<r.perimeter()<<endl;

    return 0 ;

}