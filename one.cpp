#include<iostream>
using namespace std;
int main(){
    int a =10;
    int *p = &a;

    char c = 'b';
    char *d = &c;

    float e = 3.45;
    float *x = &e;

    double v = 3.4567;
    double *z = &v;

    bool isTrue =false;
    bool *h = &isTrue;

    long k = 56788;
    long *n = &k;
    
    short u=2;
    short *w = &u;

    long long q = 1234567;
    long long *s = &q;

    unsigned int ua = 23;
    unsigned int *pp = &ua;

    cout<<"Integer "<<a<<" address "<<p<<endl;
    
    cout<<"Character "<<c<<" address "<<d<<endl;
    
    cout<<"Float "<<e<<" address "<<x<<endl;
    
    cout<<"boolean "<<isTrue<<" address "<<h<<endl;

    cout<<"long "<<k<<" address "<<n<<endl;

    cout<<"short "<<u<<" address "<<w<<endl;

    cout<<"long long"<<q<<" address "<<s<<endl;

    cout<<"unsigned int "<<ua<<" address "<<pp<<endl;

}
