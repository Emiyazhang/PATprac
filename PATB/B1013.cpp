/*************************************************************************
    > File Name: B1013.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/12 4:54:15
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	char temp[100000]={0};//3 5 7 9
	int i=0,j=0,k=0;
    temp[0]='t';
	while(i<100000)
	{

		if(temp[i]!='f')
			temp[i]='t'; //未被筛掉必是素数
        k=i*(2*i+6)+3;//确定筛查起始位置
		if(i<300&&k<100000){    //筛查位置<100000也不能超出intfanwei
            while(k<100000){
                temp[k]='f';//筛掉
                k+=(2*i+3); //k奇数倍增
            }
		}
		while(temp[++i]=='f');//找到下一个素数
	}
    int m,n;
	cin>>m>>n;
	int coun=0,cp=0,pri=0;
	if(m==1){
        pri++;
        cout<<"2";
        if(n==1)
            return 0;
        else
            cout<<" ";
	}
    m--;
    n=n-2;
	while(coun<=n){
        if(temp[cp]=='t')
        {
            coun++;
            if(coun>=m){
                pri++;
                cout<<(2*cp+3);
                if(pri%10==0){
                    cout<<endl;
                }else
                    cout<<(coun<=n?" ":"");
            }

        }
        cp++;
    }
	return 0;


}
