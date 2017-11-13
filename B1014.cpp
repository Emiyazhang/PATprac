/*************************************************************************
    > File Name: B1014.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/14 6:27:29
 ************************************************************************/
#include<iomanip>
#include<iostream>
using namespace std;
const char week[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
int main(){
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	unsigned int i=s1.size();
	if(i>s2.size())
		i=s2.size();
	unsigned
	int j=0;
	int flag=0;
	while(j<i){

		if(s1[j]==s2[j]){
			if(flag==0&&s1[j]>='A'&&s1[j]<='G'){
				flag=1;
				int w=s1[j]-'A';
				cout<<week[w]<<" ";
			}else if(flag==1){
				if(s1[j]>='0'&&s1[j]<='9'){
					flag=2;
					cout<<setw(2)<<setfill('0')<<s1[j]<<":";
				}else if(s1[j]>='A'&&s1[j]<='N'){
					flag=2;
					int h=s1[j]-'A'+10;
					cout<<h<<":";
				}
			}
		}
		j++;
	}
	i=s3.size();
	if(i>s4.size())
		i=s4.size();
	j=0;
	while(j<i){
		if(s3[j]==s4[j]&&s3[j]>='A'&&s3[j]<='z'){
			cout<<setw(2)<<setfill('0')<<j;
			break;
		}
		j++;
	}
	return 0;

}
