#include <iostream>
using namespace std;

int main(){
    int daynum;
    cout << "Enter the number of day : ";
    cin >> daynum;
    cout << "Number of day is : " <<daynum <<endl;

    //variable = (condition) ? expressionTrue : expressionFalse;
    string result = (daynum == 1) ? "Day is Monday" : "Day is not Monday";
return 0;
}
