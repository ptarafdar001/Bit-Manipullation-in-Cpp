// bit manipulation
#include<iostream>

using namespace std;

int getBit(int n, int pos){
	return ((n & (1<<pos))!=0);
}

int setBit(int n, int pos){
	return (n|(1<<pos));
}

int clrBit(int n, int pos){
	int mask = ~(1<<pos);
	return (n & mask);
}

int updateBit(int n, int pos, int value){
	int mask = ~(1<<pos);
	n = n & mask;
	return (n | (value<<pos));
}

int main(){
	//getBit
	cout<<getBit(5, 2)<<endl;
	
	//setBit
	cout<<setBit(5, 3)<<endl;
	
	//clearBit
	cout<<clrBit(5, 2)<<endl;
	
	//updateBit
	cout<<updateBit(5, 1, 1)<<endl;
	return 0;
} 
