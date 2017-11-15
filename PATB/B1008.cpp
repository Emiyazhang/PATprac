/*************************************************************************
    > File Name: B1008.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/12 4:11:37
 ************************************************************************/

#include<iostream>
using namespace std;
void rever(int pl,int pr,int t[]){
	int tem;
	while(pl<pr){
		tem=t[pl];
		t[pl++]=t[pr];
		t[pr--]=tem;
	}

}
int main(){
	int siz,pos;
	cin>>siz>>pos;	pos=pos%siz;
	int *p=new int[siz];
	int i=0;
	while(i<siz){
		cin>>p[i];
		i++;
	}
	rever(0,siz-pos-1,p);
	rever(siz-pos,siz-1,p);
	rever(0,siz-1,p);
	i=0;
	while(i<siz-1){
		cout<<p[i]<<" ";
		i++;
	}
	cout<<p[i];
	delete[] p;
	return 0;

}
