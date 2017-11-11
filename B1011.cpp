/*************************************************************************
    > File Name: B1011.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/12 0:26:30
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	int f_k=8*sizeof(int)-1;
	int flag=0;
	int a,b,c;
	int i;
	int j=1;
	cin>>i;
	while(j<=i){
		cin>>a>>b>>c;
		flag=(a>>f_k)+(b>>f_k);//看a,b是否同号
								//0++，-2--,-1+-/-+
		a=a+b;
		if(a>0){
			if(flag==-2)
				cout<<"Case #"<<j<<": false"<<endl; //负数相加溢出
			else
				cout<<"Case #"<<j<<((a>c)?": true":": false")<<endl;//非溢出状况
		}else{
			if(a<0&&flag==0)
				cout<<"Case #"<<j<<": true"<<endl; //正数相加溢出
			else
				cout<<"Case #"<<j<<((a>c)?": true":": false")<<endl;//非溢出情况
		}
		j++;//处理下一组
	}
}


