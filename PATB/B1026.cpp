/*************************************************************************
    > File Name: B1026.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/15 22:25:27
 ************************************************************************/
#include<iomanip>
#include<iostream>
using namespace std;
int main(){
	int t1,t2;
	cin>>t1>>t2;
	t1=t2-t1;
	int hour=t1/360000;
	int mini=t1%360000/6000;
	int s=((t1%6000)+50)/100;    //ËÄÉáÎåÈë
	cout<<setw(2)<<setfill('0')<<hour<<":";
	cout<<setw(2)<<setfill('0')<<mini<<":";
	cout<<setw(2)<<setfill('0')<<s;
	return 0;



}
