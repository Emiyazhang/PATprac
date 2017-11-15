/*************************************************************************
    > File Name: B1021.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/16 3:17:13
 ************************************************************************/
#include<string>
#include<iostream>
using namespace std;
int ans[10]={0};
int main(){
	char temp;
	while(cin>>temp){
		int i=temp-'0';
		ans[i]++;
	}
	int cou=0,j=0;
	for(;j<10;j++){
		if(ans[j]!=0)
			cou++;
	}
	j=0;
	while(cou>0&&j<10){
		if(ans[j]!=0){
			cou--;
			cout<<j<<":"<<ans[j];
			if(cou!=0)
				cout<<endl;
		}
		j++;
	}
	return 0;
}
