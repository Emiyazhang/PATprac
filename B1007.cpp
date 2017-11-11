/*************************************************************************
    > File Name: B1007.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/12 1:54:15
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	char temp[50000]={0};//3 5 7 9
	int i=0,j=0,k=0;
    temp[0]='t';
	while(i<50000)
	{

		if(temp[i]!='f')
			temp[i]='t'; //未被筛掉必是素数
        k=i*(2*i+6)+3;//确定筛查起始位置
		if(i<200&&k<50000){    //筛查位置<50000也不能超出intfanwei
            while(k<50000){
                temp[k]='f';//筛掉
                k+=(2*i+3); //k奇数倍增
            }
		}
		while(temp[++i]=='f');//找到下一个素数
	}
	j=1;
	int num;
	cin>>num;
	num=(num-3)/2;
    int coun=0;
	while(j<=num){
		if(temp[j]=='t')
			if(temp[j-1]=='t')
                coun++;
		j++;
	}
    cout<<coun;
	return 0;


}
