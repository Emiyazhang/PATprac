/*************************************************************************
    > File Name: B1004.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/10 1:52:52
 ************************************************************************/
#include <algorithm>
#include<iostream>
#include <string>
#include <vector>
using namespace std;
class student{
	private:
		string name;
		string stuid;
        int score;
		int rank;
	public:

	student():score(0),rank(0){};
	student(const student&s){
		name=s.name;
		stuid=s.stuid ;
		score=s.score;
		rank=s.rank;
	}
	~student(){};
	void print(){
		cout<<name<<" "<<stuid ;
	}
    const int gets() const{
        return score;
    }
    void reads(){
        cin>>name>>stuid>>score;
    }
} ;
bool cmp(const student &a,const student &b){
	return a.gets()>b.gets();

}
int main(){
	vector<student> stu;
	int i;
	cin>>i;
	int num=i;
	student temp;
	while(i>0){
		--i;
         temp.reads();
		stu.push_back(temp);
	}
	sort(stu.begin(),stu.end(),cmp);
	stu[0].print();
	cout<<endl;
	stu[num-1].print();
	return 0;

}
