#include<iostream>
using namespace std;
int main(){
    string name = "nitin", name1;
    cout<< "Given string is : "<< name<<endl;
    for(int i=name.length()-1;i>=0;i--){
        cout<< name[i]<<endl;
        name1=name1+name[i];
    }
    cout<<name1<<endl;
    if(name==name1){
        cout<< "palindrome";
    }
    else
        cout<< "Not a palindrome";
return 0;
}
