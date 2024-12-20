#include<iostream>
using namespace std;

void withdraw(int amount ,int &tenCnt , int &fiftyCnt ,int &hundredCnt ,int &twohundCnt ){
    if(hundredCnt==0 && tenCnt==0 && fiftyCnt==0){
        cout<<"Amount cannot be transacted "<<endl;
        return ;
    }
    int hund=0;
    int twhund=0;
        int ten=0;
        int fif=0;
        int g=0;
    while(amount!=0){
        g=0;
        while(amount-200>=0 && amount!=0 && twohundCnt!=0){
            amount=amount-200;
            twohundCnt=twohundCnt-1;
            twhund=twhund+1;
            g=1;
        }
        while(amount-100>=0 && amount!=0 && hundredCnt!=0){
            amount=amount-100;
            hundredCnt=hundredCnt-1;
            hund=hund+1;
            g=1;
        }
        while(amount-50>=0 && amount!=0 && fiftyCnt!=0){
            amount=amount-50;
            fiftyCnt=fiftyCnt-1;
            fif=fif+1;
            g=1;
        }
        while(amount-10>=0 && amount!=0 && tenCnt!=0){
            amount=amount-10;
            tenCnt=tenCnt-1;
            ten=ten+1;
            g=1;
        }
        
        if(amount!=0 && g!=1){
            cout<<"Amount cannot be transacted"<<endl;
            hundredCnt=hundredCnt+hund;
            tenCnt=tenCnt+ten;
            fiftyCnt=fiftyCnt+fif;
            twohundCnt=twohundCnt+twhund;
            return ;
        }
    }
    if(amount==0){
        int s=0;
        s=twohundCnt*200+hundredCnt*100 + fiftyCnt*50 + tenCnt*10;
        cout<<"Amount can be transacted "<<endl;
        cout<<"No of two hundred notes used"<<twhund<<endl;
        cout<<"No of hundred notes used "<<hund<<endl;
        cout<<"No of fifty notes used "<<fif<<endl;
        cout<<"No of ten notes used "<<ten<<endl;
        cout<<"Remaining balance "<<s<<endl;
        cout<<"No of two hundred notes left"<<twohundCnt<<endl;
        cout<<"No of hundred notes left "<<hundredCnt<<endl;
        cout<<"No of fifty notes left "<<fiftyCnt<<endl;
        cout<<"No of ten notes left "<<tenCnt<<endl;
        return ;
    }

}
int main(){
    //cout<<"Enter total amount"<<endl;
    int tenCnt=10;
    int hundCnt=10;
    int fiftyCnt=10;
    int twohundCnt=10;
    int testCase;
    cin>>testCase;
    while(testCase>0){
        cout<<"Enter withdrawl amount "<<endl;
    int amount;
    cin>>amount;
    if(amount=='q'){
        break;
    }
    withdraw(amount,tenCnt,fiftyCnt,hundCnt,twohundCnt);
    cout<<endl;
    cout<<endl;
    testCase=testCase-1;

    }
    //withdraw(a,t,f,h);

}
