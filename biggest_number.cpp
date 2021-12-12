#include<iostream>
using namespace std;

int main(){
    float num1, num2, num3;
    cout<< "Enter three numbers here : ";
    cin>> num1>>num2>>num3;
    cout<< "Numbers are : "<<endl<<num1<<endl<<num2<<endl<<num3<<endl;
    if (num1>num2 && num1>num3){
        cout<< "Largest number is "<<num1;
    }
    else if(num2>num1 && num2>num3){
        cout<< "Largest number is "<<num2;
    }
    else
        cout<< "Largest number is "<<num3;
return 0;
}
