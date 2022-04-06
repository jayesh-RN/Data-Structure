#include<iostream>
using  namespace std;


#include<array>


int main(){

    array< int,4 > a={1,2,3,4};
    int size = a.size();

    cout<<"Element at 2nnd Index "<<a.at(2)<<endl;
    cout<<"Empty or not"<<a.empty()<<endl;

    cout<<"First elemennt"<<a.front()<<endl;
    cout<<"Last element "<<a.back()<<endl; 

    for(int i=0; i<size;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}