#include<iostream>
using namespace std;

int fact_num(int i){
	if (i <= 1)
        return 1;
  	else
        return i*fact_num(i-1);
}

int main(){
  	int N;
  	cin >> N;
  	cout << fact_num(N) << "\n";
  	return 0;
}
