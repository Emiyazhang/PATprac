/*************************************************************************
    > File Name: 1055.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/16 0:42:33
 ************************************************************************/
#include<cstdio>
#include<iostream>#include<algorithm>
using namespace std;
struct peop{
	peop():high(0){
		int i=0;
		while(i<9)
			name[i++]=0;
	}
	~peop(){}
	char name[9];
	int  high;
};
bool cmp(const peop&a,const peop&b){
	int ti=0;
	if(a.high!=b.high)
		return a.high<b.high;
	else{
		while(a.name[ti]==b.name[ti])
				ti++;
		return a.name[ti]>b.name[ti];
	}
}
peop pp[10000];
int main(){
	int n,k;
	cin>>n>>k;
	int kp=n/k;  //每排人数
	int lp=kp+n%k;//最后一排人数
	int *p=new int[lp];  //排队规则数组
	int i=0;
	while(i<n){
		cin>>pp[i].name>>pp[i].high;
		i++;
	}
	sort(pp,pp+i,cmp);
	int mid=lp/2;
	p[mid]=lp-1;
	i=mid-1;
	int temp=lp-2;
	while(i>=0){         //排队规则:...lp-4 lp-2 [lp-1] lp-3..
		p[i]=temp;
		temp=temp-2;
		i--;
	}	i=mid+1;
	temp=lp-3;
	while(i<lp){         //排队规则:...lp-4 lp-2 [lp-1] lp-3..
		p[i]=temp;
		temp=temp-2;
		i++;
	}
	i=k;   //打印最后一排；
	int j=0;
	while(j<lp){
		int pos=p[j];
		printf("%s",pp[pos+(k-1)*kp].name);
		if(j!=lp-1)
			printf(" ");
		j++;
	}	if(k>1&&kp>=1)
		printf("\n");
	mid=kp/2;
	p[mid]=kp-1;
	i=mid-1;
	temp=kp-2;
	while(i>=0){         //排队规则:...kp-4 kp-2 [kp-1] kp-3..
		p[i]=temp;
		temp=temp-2;
		i--;
	}	i=mid+1;
	temp=kp-3;
	while(i<kp){         //排队规则:...kp-4 kp-2 [kp-1] kp-3..
		p[i]=temp;
		temp=temp-2;
		i++;
	}
	i=k-2;
	while(i>=0){
		j=0;
		while(j<kp){
			int pos=p[j];
			printf("%s",pp[pos+i*kp].name);
			if(j!=kp-1)
				printf(" ");
			j++;
		}
		i--;
		if(i!=-1&&kp>=1)   //防止2 3这种人不够情况
			printf("\n");
	}
     return 0;
}
