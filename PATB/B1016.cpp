/*************************************************************************
    > File Name: B1016.cpp
    > Author: ji_zhang
    > Mail:   
    > Created Time: 2017/11/14 11:13:24
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	string a,b;
	char da,db;
	cin>>a>>da>>b>>db;
	int i=a.size();
	int j=0;
	int na=da-'0';
	long long int ansa=0;
	while(j<i){
		if(da==a[j])//ÕÒµ½Êý
		{
			ansa=ansa*10+na;
		}
		j++;
	}
	j=0;
	i=b.size();
	int nb=db-'0';
	long long int ansb=0;
	while(j<i){
		if(db==b[j])
			ansb=ansb*10+nb;
		j++;
	}
	ansa=ansa+ansb;
	cout<<ansa;
	return 0;

}
