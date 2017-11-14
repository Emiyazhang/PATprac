/*************************************************************************
    > File Name: B1015.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/14 12:09:33
 ************************************************************************/

#include<iostream>#include<vector>
#include <algorithm>
#include<cstdio>
using namespace std;
struct stu{
		int id;
		int mor;
		int tal;
};
bool cmp(const stu&a,const stu&b){
	if((a.mor+a.tal)!=(b.mor+b.tal))
		return (a.mor+a.tal)>(b.mor+b.tal);
	else if(a.mor!=b.mor)
		return a.mor>b.mor;
	else
		return a.id<b.id;
}
stu mat[100000]={0};       //德才stu mnt[100000]={0};       //德盛才
stu lmnt[100000]={0};      //低等德盛才
stu common[100000]={0};    //及格的普通考生
int main(){
	int total,los,his;
	cin>>total>>los>>his;
	int idt,mt,tt,loser=0;
	int co1=0,co2=0,co3=0,co4=0;
	int i=0;
	while(i<total){    //读取考生到相应数组，并统计不合格人数
		stu temp;
		scanf("%d %d %d",&temp.id,&temp.mor,&temp.tal);
		if(temp.mor>=his&&temp.tal>=his){
			mat[co1]=temp;
			co1++;
		}else if(temp.mor>=his&&temp.tal>=los){
			mnt[co2]=temp;
			co2++;
		}else if(temp.mor>=temp.tal&&temp.tal>=los){
			lmnt[co3]=temp;
			co3++;
		}else if(temp.mor>=los&&temp.tal>=los){
			common[co4]=temp;
			co4++;
		}else{
			loser++;
		}
		i++;
	}
	sort(mat,mat+co1,cmp);
	sort(mnt,mnt+co2,cmp);
	sort(lmnt,lmnt+co3,cmp);
	sort(common,common+co4,cmp);
	int acce=total-loser;
	//ЭЈЙ§змЪ§
	printf("%d",acce);
	if(acce!=0)         //没合格考生的情况
		printf("\n");
	int siz=co1;
	int cou=0;
	while(cou<siz){
		printf("%d %d %d",mat[cou].id,mat[cou].mor,mat[cou].tal);
		cou++;
		if(cou<siz)
			printf("\n");
		else{
			if(co2>0||co3>0||co4>0){
				printf("\n");//要考虑其他人数都为零的极端
			}
		}
	}
	siz=co2;
	cou=0;
	while(cou<siz){
		printf("%d %d %d",mnt[cou].id,mnt[cou].mor,mnt[cou].tal);
		cou++;
		if(cou<siz)
			printf("\n");
		else{
			if(co3>0||co4>0){
				printf("\n");//要考虑其他人数都为零的极端
			}
		}
	}
	siz=co3;
	cou=0;
	while(cou<siz){
		printf("%d %d %d",lmnt[cou].id,lmnt[cou].mor,lmnt[cou].tal);
		cou++;
		if(cou<siz)
			printf("\n");
		else{
			if(co4>0){
				printf("\n");//要考虑其他人数都为零的极端
			}
		}
	}
	siz=co4;
	cou=0;
	while(cou<siz){
		printf("%d %d %d",common[cou].id,common[cou].mor,common[cou].tal);
		cou++;
		if(cou<siz)
			printf("\n");
	}
	return 0;
}
