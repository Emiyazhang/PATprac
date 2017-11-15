/*************************************************************************
    > File Name: B1022.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/16 3:44:22
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
vector<int> ans;
int main(){
	int a,b,d;
	cin>>a>>b>>d;
	a=a+b;
	while(a!=0){
		b=a%d;
		ans.push_back(b);
		a=a/d;
	}
	int siz=ans.size()-1;
	if(siz==-1)
		cout<<"0";
	while(siz>=0){
		cout<<ans[siz--];
	}
	return 0;

}
