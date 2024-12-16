#include<iostream> 

using namespace std;

// int increementByOne(int &y){
//        return ++y;
// }

int increementByOne(int *x){
    return ++*x;
}

int main(){
    int  a = 10;
    //int *r = &a;
    int  *r = new int(a);
    cout<<a<<endl;

    int g=increementByOne(r);

    // cout<<r<<endl;

    // cout<<&a;
    cout << *r;
}
