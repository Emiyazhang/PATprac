/*************************************************************************
    > File Name: B1060.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/15 10:28:59
 ************************************************************************/
#include<cstdio>
#include<iostream>#include<algorithm>
using namespace std;
int spor[100000]={0};
bool cmp(const int&a,const int&b){
	return a>b;
}
int main(){
	int n;
	cin>>n;
	int i=0;
	while(i<n){
		scanf("%d",&spor[i]);
		i++;
	}
	sort(spor,spor+n,cmp);
	int k=n;    //k为最大可能的E
	while(k>0){                 //验证是否有E个大于E的数
		if(spor[k-1]>k){
			printf("%d",k);
			return 0;
		}
		else
			k--;
	}
	printf("0");
	return 0;
}
