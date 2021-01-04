// chack if a given no. is power of 2
#include<iostream>
using namespace std;

bool isPowerof2(int n){
	return (n && !(n & n-1));
}

int main(){
	cout<<isPowerof2(8)<<endl;
	return 0;
}
