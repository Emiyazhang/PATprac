/*************************************************************************
    > File Name: B1032.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/16 3:00:50
 ************************************************************************/
#include<cstdio>
#include<iostream>
using namespace std;
int ans[100000]={0};
int main(){
	int n;
	cin>>n;
	int i=0,p=0;
	while(i<n){
		int t1,t2;
		scanf("%d",&t1);
		scanf("%d",&t2);
		ans[t1-1]+=t2;
		if(ans[p]<ans[t1-1])
			p=t1-1;
		i++;
	}
	cout<<(p+1)<<" "<<ans[p];
	return 0;

}
