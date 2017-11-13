/*************************************************************************
    > File Name: B1064.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/13 8:01:48
 ************************************************************************/

#include<iostream>
using namespace std;
int base[37]={0};
int main(){
	int num;
	cin>>num;
	int i=0;
	while(i<num){
		int temp;
		cin>>temp;
		temp=(temp/1000)+(temp%1000/100)+(temp%100/10)+(temp%10);
		base[temp]=1;
		i++;
	}
	i=0;
	int coun=0;
	while(i<37){
		if(base[i]==1)
			coun++;
		i++;
	}
	cout<<coun<<endl;
	i=0;
	while(i<37){
		if(base[i]==1){
			coun--;
			cout<<i;
			if(coun>0)
			cout<<" ";
		}
		i++;
	}
	return 0;


}
