/*************************************************************************
    > File Name: B1017.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/15 2:04:01
 ************************************************************************/

#include<iostream>
using namespace std;
string bn,ans;
int main(){
	int k;
	cin>>bn>>k;
	int yt=0;
	int siz=bn.size();
	int i=0;
	while(i<siz){     //模仿手算除法过程
		int temp=bn[i]-'0'+yt*10;
		char ct=(char)(temp/k+'0');
		if(ct=='0'&&i==0&&siz>1);   //商不为0的情况下首位零
		else
			ans.push_back(ct);
		yt=temp%k;
		i++;
	}
	cout<<ans<<" ";
	cout<<yt;
	return 0;
}
