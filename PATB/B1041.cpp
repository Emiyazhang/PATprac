/*************************************************************************
    > File Name: B1041.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/16 4:56:47
 ************************************************************************/
#include<map>
#include<string>
#include<iostream>
using namespace std;
struct stu{
	string id;
	int num;
};
map<int,stu> ans;
int main(){
	int n;
	cin>>n;
	int i=0;
	while(i<n){
		stu temp;
		int tes;
		cin>>temp.id>>tes>>temp.num;
		ans.insert(make_pair(tes,temp));
		i++;
	}
	int consu;
	cin>>consu;
	i=0;
	while(i<consu){
		int ask;
		cin>>ask;
		map<int,stu>::iterator iter=ans.find(ask);
		cout<<iter->second.id<<" "<<iter->second.num;
		if(i!=consu-1)
			cout<<endl;
		i++;
	}
	return 0;
}
