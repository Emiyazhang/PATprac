/*************************************************************************
    > File Name: B1018.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/15 2:29:44
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	int vs;
	cin>>vs;
	int i=0;
	int as[3]={0}; //¼ÇÂ¼´ÎÊý
	int bs[3]={0};
	int pin=0;
	char ach,bch;
	while(i<vs){
		cin>>ach>>bch;
		if(ach=='B'){
			if(bch=='B')
				pin++;
			else if(bch=='C'){
				as[0]++;
			}else if(bch=='J'){
				bs[2]++;
			}
		}
		if(ach=='C'){
			if(bch=='B')
				bs[0]++;
			else if(bch=='C'){
				pin++;
			}else if(bch=='J'){
				as[1]++;
			}
		}
		if(ach=='J'){
			if(bch=='B')
				as[2]++;
			else if(bch=='C'){
				bs[1]++;
			}else if(bch=='J'){
				pin++;
			}
		}
		i++;
	}
	int awin=as[0]+as[1]+as[2];
	cout<<awin<<" "<<pin<<" "<<(vs-awin-pin)<<endl;
	cout<<(vs-awin-pin)<<" "<<pin<<" "<<awin<<endl;
	int tem=(as[0]>=as[1]?0:1);
	int pw=(as[tem]>=as[2]?tem:2);
	char ans[3]={'B','C','J'};
	cout<<ans[pw]<<" ";
	tem=(bs[0]>=bs[1]?0:1);
	pw=(bs[tem]>=bs[2]?tem:2);
	cout<<ans[pw];
	return 0;
}
