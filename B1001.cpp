/*************************************************************************
    > File Name: callz.cpp
    > Author: ji_zhang
    > Mail:   
    > Created Time: 2017/11/8 3:21:59
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;
class callaz{
public:
  callaz():N(0),times(0){};
  ~callaz(){};
  void set(unsigned int i);
  void countn();
  void print();
private:
  unsigned int N;
  unsigned int times;
};
void   callaz :: countn(){
  	int i=N;
    while(i!=1){
      times++;
    	if(i%2==0)
          i=i/2;
      else i=(3*i+1)/2; 
    }
}
void callaz :: print()
{
	printf("%d",times);
}
void callaz :: set(unsigned int i){
	N=i;
}
int main(){
 	int i;
  	scanf("%d",&i);
  	callaz temp;
  	temp.set(i);
  	temp.countn();
  	temp.print();
  	return 0;
}
