/*************************************************************************
    > File Name: B1042.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/16 5:44:53
 ************************************************************************/
#include<cstdio>
#include<iostream>
using namespace std;
int ans[26]={0};
int main(){
	char temp;
	int p=0;
	while((temp=getchar())!='\n'){
		int t=0;
		if(temp>='A'&&temp<='Z'){
			t=temp-'A';
			ans[t]++;
		}else if(temp>='a'&&temp<='z'){
			t=temp-'a';
			ans[t]++;
		}
	}
	int i=0;
	while(i<26){
		if(ans[p]<ans[i])
			p=i;
		i++;
	}
	char ac=(char)p+'a';
	cout<<ac<<" "<<ans[p];
	return 0;

}
