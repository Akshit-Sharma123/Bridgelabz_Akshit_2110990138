//print hello n times
#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cout<<"hello"<<endl;
    // }

    //printing no from 1 to 100
    // for(int i=1;i<=100;i++){
    //     cout<<i<<" ";
    // }
    //print table of n
    // int n;
    // cin>>n;
    // for(int i=1;i<=10;i++){
    //     cout<<n*i<<endl;
    // }
    //display this ap 1,3,5 upto n terms
    // int n;
    // cin>>n;
    // int t=1;
    // for(int i=1;t<=n;i=i+2){
    //     t++;
    //     cout<<i<<" ";
    // }

    //display this gp -1,2,4,8,16,32-- upto n terms
    // int n;
    // cin>>n;
    // int a=1;
    // for(int i=1;i<=n;i++){
    //        cout<<a<<" ";
    //        a=a*2;
    // }

    //to find highest factor of a no n (other than n itself)
    // int n;
    // cin>>n;
    // int ans=1;
    // for(int i=1;i<n;i++){
    //     if(n%i==0){
    //        ans=i;
    //     }
    // }
    // cout<<ans;

    //to check if a no is composite or not
    // int n;
    // cin>>n;
    // for(int i=2;i<n;i++){
    //     if(n%i==0){
    //         cout<<"It is composite no"<<endl;
    //         break;
    //     }
    // }

    //to count digits of a given no
    // int n;
    // cin>>n;
    // int cnt=0;
    // while(n!=0){
    //     cnt++;
    //     n=n/10;
    // }
    // cout<<"cnt of digits is "<<cnt;

    //to print the sum of digits of a given no
    // int n;
    // cin>>n;
    // int s=0;
    // while(n!=0){
    //     s=s+n%10;
    //     n=n/10;
    // }
    // cout<<"The sum of no is "<<s<<endl;

    //to print the product of digits of a given no
    // int n;
    // cin>>n;
    // int p=1;
    // while(n!=0){
    //     p=p*(n%10);
    //     n=n/10;
    // }
    // cout<<"The product of two no is "<<p<<endl;

    //to print reverse of a given no
    // int n;
    // cin>>n;
    // string r="";
    // while(n!=0){
    //     r=r+ to_string(n%10);
    //     n=n/10;
    // }
    // cout<<stoi(r)<<endl;

    //to print sum of a given no and its reverse
    // int n;
    // cin>>n;
    // int f=n;
    // string r="";
    // while(n!=0){
    //    r=r+to_string(n%10);
    //    n=n/10;
    // }
    // int g=stoi(r);
    // cout<<"sum of no and its reverse is "<<f+g;

    //factorial of a given no
    // int n;
    // cin>>n;
    // int x=1;
    // for(int i=n;i>=1;i--){
    //     x=x*i;
    // }
    // cout<<"factorial of given no n is "<<x<<endl;

    //to print all ascii values  and their equivalent characters of 26 alphabets using a while loop
    // for(int i=65;i<=90;i++){
    //     cout<<i<<" "<<(char)i<<endl;
    // }

    //m*n ka star rectangle

    // int m,n;
    // cin>>m>>n;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //print solid square pattern
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    //print the given pattern
    //1234
    //1234
    //1234
    //1234
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=1;j<=n;j++){
    //       cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    //print the given pattern
    //1111
    //2222
    //3333
    //4444
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<i+1<<" ";
    //     }
    //     cout<<endl;
    // }


    //print the given pattern
    //ABCD
    //ABCD
    //ABCD
    //ABCD
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int g=65;
    //     for(int j=0;j<n;j++){
    //         cout<<(char)g<<" ";
    //         g=g+1;
    //     }
    //     cout<<endl;
    // }



    //print the pattern
    //AAAA
    //BBBB
    //CCCC
    //DDDD (n=4)

    // int n;
    // cin>>n;
    // int g=65;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<(char)g<<" ";
    //     }
    //     cout<<endl;
    //     g=g+1;
    // }

    //print the pattern
    //abc
    //abc
    //abc (n=3);
    //int n;
    // cin>>n;
    // //int x=97;
    // for(int i=0;i<n;i++){
    //     int x=97;
    //     for(int j=0;j<n;j++){
    //        cout<<(char)x<<" ";
    //        x=x+1;
    //     }
    //     cout<<endl;
    // }


    //*
    //**
    //***
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    //1
    //12
    //123
    //1234  (n=4)
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<j+1<<" ";
    //     }
    //     cout<<endl;
    // }

    //A
    //AB
    //ABC
    //ABCD (n=4)
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int g=65;
    //     for(int j=0;j<i+1;j++){
    //       cout<<(char)g<<" ";
    //       g=g+1;

    //     }
    //     cout<<endl;
    // }

    //1
    //22
    //333
    //4444  (n=4)
