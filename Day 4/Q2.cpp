#include <bits/stdc++.h>
using namespace std;

class Complex{
public:
    int real;
    int imag;

    void display(){
        cout<<a<<"+"<<b<<"i";
    }
    int sum(int a,int b){
        return a+b;
    }
    int diff(int a,int b){
        return a-b;
    }

};

int main(){
    Complex c1;
    Complex c2;
    c1.real = 4;
    c1.imag = 2;
    c2.real = 3;
    c2.imag = 5;
    c1.display(c1.real,c1.imag)<<endl;
    c2.display(c2.real,c2.imag)<<endl;
    cout<< c1.sum(c1.real,c2.real)<<"+"<<c1.sum(c1.imag,c2.imag)<<"i"<<endl;
    cout<< c1.diff(c1.real,c2.real)<<c1.diff(c1.imag,c2.imag)<<"i"<<endl;
    
}
