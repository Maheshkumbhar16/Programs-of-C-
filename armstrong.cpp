#include<iostream>
using namespace std;
int main(){
    int num=153,sum2=0,sum1=0,sum3=0, temp;
    temp=num;
    cout<< "Enter number is :"<<num<<endl;
    while(num>0){//while loop use used upto given condition is true
        sum1=num%10;
        //cout<<sum1<<endl;
        num=num/10;
        //cout<<num<<endl;
        sum2=sum1*sum1*sum1;
        //cout<<sum2<<endl;
        sum3=sum3+sum2;
        //cout<<sum3<<endl;
    }
    if(temp==sum3){
        cout<< "It is armstrong number";
    }
    else
        cout<< "It is not armstrong number";
return 0;
}
