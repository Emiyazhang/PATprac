/*************************************************************************
    > File Name: B1066.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/13 6:02:38
 ************************************************************************/

#include <iomanip>
#include<iostream>
#include <cstdio>
using namespace std;
int main(){
	unsigned int m,n;
	unsigned int low,high;
	unsigned int sety;
	scanf("%d %d %d %d %d",&m,&n,&low,&high,&sety);
	unsigned int siz=m*n;
	unsigned int *p=new unsigned int[siz];
	unsigned int i=0;
	while(i<siz)
	{
		unsigned int temp;
		cin>>temp;
		if(temp>=low&&temp<=high)
			temp=sety;
		p[i]=temp;
		i++;
	}
	i=0;
	for(;i<m*n;i++){
		cout<<setfill('0')<<setw(3)<<p[i];
		if((i+1)%n!=0&&i<(m*n-1))
			cout<<" ";
		else if(i==(m*n-1));
		else
			cout<<endl;

	}
	return 0;
}
