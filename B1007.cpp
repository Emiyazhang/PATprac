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
			temp[i]='t'; //δ��ɸ����������
        k=i*(2*i+6)+3;//ȷ��ɸ����ʼλ��
		if(i<200&&k<50000){    //ɸ��λ��<50000Ҳ���ܳ���intfanwei
            while(k<50000){
                temp[k]='f';//ɸ��
                k+=(2*i+3); //k��������
            }
		}
		while(temp[++i]=='f');//�ҵ���һ������
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
