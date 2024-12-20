#include<iostream>
using namespace std;
int main(){
    int  n;
    cout<<"Enter your marks";
    cin >> n;
    if(n>=90){
        cout<<'A'<<endl;
    }
    else if(n>=80 && n<=89){
        cout<<'B'<<endl;
    }
    else if(n>=70){
        cout<<'C'<<endl;
    }
    else if(n>=60){
        cout<<'D'<<endl;
    }
    else{
        cout<<'F'<<endl;
    }
}
