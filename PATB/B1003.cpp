/*************************************************************************
    > File Name: B1003.h
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/13 4:22:54
 ************************************************************************/
#include<cstdio>
#include<iostream>
using namespace std;
#define N 104
char temp[N]={0};
int main(){
	int i;
	int flag=0;
	scanf("%d",&i);
	while(i!=0){
		i--;
		int kk=104;
		while(kk!=0){
			kk--;
			temp[kk]=0;
		}
		scanf("%s",temp);
		int p=0,pp=0,t=0,tp=0,a=0;
		while(temp[kk]!=0){
			if(temp[kk]=='P'){
				p++;
				pp=kk;//¼ÇÂ¼PµÄÎ»ÖÃ
			}
			else if(temp[kk]=='A')
					a++;
				else if(temp[kk]=='T'){
					t++;
					tp=kk;
				}
			else{
				flag=0;
				break;
			}
			kk++;
		}
		if(p==1&&t==1&&a!=0){
			pp=pp*(tp-pp-1);
			tp=kk-tp-1;
			if(pp==tp)
				flag=1;
			else
				flag=0;
		}else
			flag=0;
		if(flag==1)
			printf("YES");
		else
			printf("NO");
		if(i!=0)
			printf("\n");

	}
	return 0;

}
