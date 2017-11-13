/*************************************************************************
    > File Name: B1062.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/13 8:25:14
 ************************************************************************/

#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	return b==0?a:gcd(b,a%b);
}  //求公约数
int main(){
	int m1,n1,m2,n2;
	char a;
	cin>>m1;
	cin>>a;
	cin>>n1;

	cin>>m2;
	cin>>a;
	cin>>n2;
	int n3;
	cin>>n3;
	if(m1*n2>m2*n1){
		int temp=m1;
		m1=m2;
		m2=temp;
		temp=n1;
		n1=n2;
		n2=temp;
	}//交换为左小右大
	int ans=0,flag=0;
	while(m1*n3>=n1*ans) ans++;
	while(m1*n3<n1*ans&&n2*ans<m2*n3){
		if(gcd(ans,n3)==1){
			if(flag==0)
				flag=1;
			else
				cout<<" ";
			cout<<ans<<"/"<<n3;
		}
		ans++;
	}
	return 0;

}
