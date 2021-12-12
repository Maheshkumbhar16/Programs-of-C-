#include <iostream>
using namespace std;

int main(){
    int arr_num[5]={77,22,17,100,256};
//print given array
    int i;
    for (i=0;i<5;i++){
        cout<<arr_num[i]<<" ";
    }
    cout<<endl;
//program for ascending order
    int x,y,temp;
    for (x=0;x<5;x++){
        for(y=x+1;y<5;y++){
            if(arr_num[x]>arr_num[y]){
                temp=arr_num[x];
                arr_num[x]=arr_num[y];
                arr_num[y]=temp;
             }
            }
        }
    for (x=0;x<5;x++){
        cout<<arr_num[x]<<" ";
    }
return 0;
}
