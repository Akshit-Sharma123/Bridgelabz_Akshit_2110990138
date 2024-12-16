#include<iostream>
using namespace std;
int increementByOne(int a){
    //a = a + 1;
    return ++a;
}
int main(){
    int a = 10;
    //cout<<a;
    int g=increementByOne(a);
    cout<<a; 
}
