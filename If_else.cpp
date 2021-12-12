#include <iostream>
using namespace std;

int main(){
    int daynum;
    cout << "Enter the number of day between (1-7) : ";
    cin >> daynum;
    cout << "Enter number of day is : " <<daynum << endl;

    if (daynum==1){
    cout << "Day is Monday";
    }
    else if(daynum==2){
    cout << "Day is Tuesday";
    }
    else if (daynum==3){
    cout << "Day is Wednesday";
    }
    else if (daynum==4){
    cout << "Day is Thursday";
    }
    else if (daynum==5){
    cout << "Day is Friday";
    }
    else if (daynum==6){
    cout << "Day is Saturday";
    }
    else if (daynum==7){
    cout << "Day is Sunday";
    }
    else{
    cout << "You enter wrong value";
    }
return 0;
}
