#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    int largest;

    if(a>b){
        if(a>c) largest=a;
        else largest=c;
    }
    else{
        if(b>c) largest=b;
        else largest=c;
    }
    cout<<"The largest number is: "<<largest;
}



