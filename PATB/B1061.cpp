/*************************************************************************
    > File Name: B1061.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/13 6:36:59
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	int studs,prob;
	cin>>studs>>prob;
	int *p=new int[prob];
	int *right=new int[prob];
	int i=0;
	while(i<prob){
		cin>>p[i++];
	}
	i=0;
	while(i<prob){
		cin>>right[i++];
	}

	int num=0;
	while(num<studs){

		i=0;
		int score=0;
		while(i<prob){
			int rig=0;
			cin>>rig;
			if(rig==right[i])
				rig=1;
			else
				rig=0;
			score+=rig*p[i];
			i++;  //¼ÆËã·ÖÊý
		}
		cout<<score;
		if(num<(studs-1))
			cout<<endl;
		num++;
	}
	return 0;
}
