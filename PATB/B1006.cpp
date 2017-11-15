/*************************************************************************
    > File Name: B1006.cpp
    > Author: ji_zhang
    > Mail:   
    > Created Time: 2017/11/12 1:34:30
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	unsigned int i;
	cin>>i;
	unsigned hun=i/100;
	unsigned tens=i%100/10;
	unsigned ind=i%10;
	while(hun--)
		cout<<"B";
	while(tens--)
		cout<<"S";
	int k=1;
	while(ind--)
		cout<<k++;
	return 0;

}
