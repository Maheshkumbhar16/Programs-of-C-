#include<iostream>
using namespace std;
int main(){
    string food = "Vadapav";
    string &meal = food; // "&" is use for save memory address of food
    cout<<"food : "<<food<<endl;
    cout<<"meal : "<<meal<<endl;
    cout<<"&food : "<<&food<<endl;
    cout<<"&meal : "<<&meal;
return 0;
}
