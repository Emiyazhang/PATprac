/*************************************************************************
    > File Name: B1002.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/9 0:25:09
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;
#include <vector>
#include <string>

const string table[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
class strnum{
	public:
		strnum():num(0){};
		~strnum(){};
		void numget();
		void print();
	private:
		vector<string> chnum;
		int num;
};
void strnum :: numget(){
	char temp;
	while((scanf("%c",&temp))!=EOF&&temp!='\n'){
		num+=temp-'0';
	}
	while(num!=0){
		int i=num%10;
		chnum.push_back(table[i]);
		num/=10;
	}
}
void strnum :: print(){
	vector<string> :: iterator iter=chnum.end();
	iter--;
	while(iter!=chnum.begin())
	cout<<*(iter--)<<" ";
	cout<<*iter;

}

int main(){
	strnum ss;
	ss.numget();
	ss.print();
	return 0;
}
