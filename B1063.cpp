/*************************************************************************
    > File Name: B1063.cpp
    > Author: ji_zhang
    > Mail:   
    > Created Time: 2017/11/13 8:17:17
 ************************************************************************/
#include<cstdio>
#include <cmath>
#include<iostream>
using namespace std;
int main(){
	int num;
	double old_ans=0;
	cin>>num;
	int i=0;
	while(i<num){
		int a,b;
		cin>>a>>b;
		double ans=sqrt(a*a+b*b);
		if(ans>old_ans)
			old_ans=ans;
		i++;
	}
	printf("%.2f",old_ans);
	return 0;

}
