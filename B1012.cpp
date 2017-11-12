/*************************************************************************
    > File Name: B1012.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/13 5:10:30
 ************************************************************************/
#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int i;
	cin>>i;
	int j=0;
	int num=0;
	int a1=-1,a2=0,lef1flag=0,a3=0,a4=0,a4_n=0,a5=0;
	while(j<i){
		cin>>num;
		if(num%10==0){
			if(a1==-1)
				a1=0;
			a1+=num;
		}
		if(num%5==1){
			lef1flag++;
			if(lef1flag%2==1){
				a2+=num;
			}else
				a2-=num;
		}
		if(num%5==2){
			a3++;
		}
		if(num%5==3){
			a4+=num;
			a4_n++;
		}
		if(num%5==4){
			if(a5<num)
				a5=num;
		}
		j++;
	}
	float fa4=1.0*a4/a4_n;
	if(a1==-1)
		printf("N ");
	else
		printf("%d ",a1);
	if(lef1flag==0)
		printf("N ");
	else
		printf("%d ",a2);
	if(a3==0)
		printf("N ");
	else
		printf("%d ",a3);
	if(a4_n==0)
		printf("N ");
	else
		printf("%.1f ",fa4);
	if(a5==0)
		printf("N");
	else
		printf("%d",a5);
	return 0;

}
