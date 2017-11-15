/*************************************************************************
    > File Name: B1043.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/13 8:53:52
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	int base[6]={0};
	char temp;
	while(cin>>temp){
		if(temp=='P'){
			base[0]++;
		}else if(temp=='A')
			base[1]++;
		else if(temp=='T')
            base[2]++;
		else if(temp=='e')
            base[3]++;
		else if(temp=='s')
            base[4]++;
		else if(temp=='t')
		    base[5]++;
		else{};
	}

	while(base[0]>0||base[1]>0||base[2]>0||base[3]>0||base[4]>0||base[5]>0){
		if(base[0]>0)
		{
			base[0]--;
			cout<<"P";
		}
		if(base[1]>0)
		{
			base[1]--;
			cout<<"A";
		}
		if(base[2]>0)
		{
		    base[2]--;
			cout<<"T";
		}
		if(base[3]>0)
        {
            base[3]--;
            cout<<"e";
        }
		if(base[4]>0)
		{
			base[4]--;
			cout<<"s";
		}
		if(base[5]>0)
		{
			base[5]--;
			cout<<"t";
		}
	}
	return 0;

}
