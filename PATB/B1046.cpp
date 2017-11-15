/*************************************************************************
    > File Name: B1046.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/16 4:02:40
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ad=0,bd=0;
	int i=0;
	while(i<n){
		int as,ae,bs,be;
		cin>>as>>ae>>bs>>be;
		as=as+bs;
		if(ae==as&&be!=as)
			bd++;
		else if(ae!=as&&be==as)
			ad++;
		i++;
	}
	cout<<ad<<" "<<bd;
	return 0;
}
