/*************************************************************************
    > File Name: B1005.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/11 2:41:00
 ************************************************************************/
//题意没说有序，所以最后应该排序输出。。。
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct callz{
	int num;
	callz *prev;
	callz *next;
};

int main(){
	callz *pt=NULL,*pp=NULL;
	int i;
	cin>>i;
	callz head;
	head.prev=NULL;
	head.next=NULL;
	pp=&head;//pp point to head
	while(i--){  //read vals to a list with head
		callz * pt=new callz;
		cin>>pt->num;
		pp->next=pt;
		pt->prev=pp;
		pt->next=NULL;
		pp=pp->next;
	}
	pt=head.next;//pt point to key(which will be treated)
	pp=head.next->next;//pp point to second val;
	while(pt!=NULL){
		head.num=pt->num;
		while(head.num!=1){
			if((head.num%2)==0)
				head.num/=2;
			else
				head.num=(head.num*3+1)/2;
            callz *p_store;
			while(pp!=NULL){  //删除其覆盖的值
                p_store=pp->next;
				if(pp->num==head.num) //找到覆盖值，将其删除
				{
					pp->prev->next=p_store;
					if(pp->next!=NULL)
                        pp->next->prev=pp->prev;
					delete pp;					break;
				}
				pp=p_store;
			}
			pp=head.next;
		}//删除所有当前关键字覆盖的值
		pt=pt->next;
	}
	pt=&head;
	vector<int> aa;
	while(pt->next!=NULL)
    {
        pt=pt->next;
        aa.push_back(pt->num);
        pt->prev->next=pt->next;
        if(pt->next!=NULL)
            pt->next->prev=pt->prev;
        delete pt;
    }
    sort(aa.begin(),aa.end());
    int coun=aa.size();
	while(coun>1)
    {
        coun--;
        cout<<aa[coun]<<" ";
    }
	cout<<aa[0];
	return 0;
}
