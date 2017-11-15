/*************************************************************************
    > File Name: B1009.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/11 22:58:50
 ************************************************************************/

#include<iostream>
#include <list>
#include <string>
using namespace std;
 int main(){
	list<string> str;
	string temp;
	while(cin>>temp) {
		str.push_back(temp);
    }
	list<string>::iterator iter=str.end();
	iter--;
	while(iter!=str.begin()){
		cout<<*iter<<" ";
		iter--;
	}
	cout<<*iter;
	return 0;


 }
