/*************************************************************************
    > File Name: B1065.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/12 20:39:47
 ************************************************************************/

#include<iostream>
//#include<map>
//#include<string>//#include<vector>
//#include<algorithm>

#include <iomanip>//不要忘记包含此头文件
using namespace std;

/************************************************************

有一个两分的点段错误，估计是map内存过大了2333，不过练习下使用STL

class interv{
	public:
		interv():mat_come_flag(0){};
		~interv(){};
		string name;
		string mate;
		int mat_come_flag;

} ;

int main(){
	map<string,interv> lovers;
	int cou_lov;
	cin>>cou_lov;
	int i=0;
	string a,b;
	interv temp;
	while(i++<cou_lov){
		cin>>a>>b;
		temp.name=a;
		temp.mate=b;
		lovers.insert(pair<string,interv>(a,temp)); //绑定自己与自己信息
		temp.name=b;
		temp.mate=a;
		lovers.insert(pair<string,interv>(b,temp));
	}
	int comers;
	cin>>comers;
	i=0;
	vector<string> com_d,ans;
	map<string,interv>::iterator iter;
	while(i++<comers){
		string co;
		cin>>co;
		iter=lovers.find(co);
		if(iter!=lovers.end()){  //不是单身狗
            iter=lovers.find(iter->second.mate); //找到对象
			iter->second.mat_come_flag=1;//修改对象对象来标志
			com_d.push_back(co); //装入待处理数组
		}
		else
			ans.push_back(co);  //是单身狗，装入结果数组
	}
	int siz=com_d.size();
	i=0;
	while(i<siz)
	{
		iter=lovers.find(com_d[i]);  //找自己信息
		if(iter->second.mat_come_flag==0){
			ans.push_back(com_d[i]);
		}//寂寞夫/妇,装入
		i++;
	}
    sort(ans.begin(),ans.end());
	i=0;
	siz=ans.size();
	cout<<siz<<endl;
	while(i<siz-1)
	{
		cout<<ans[i++]<<" ";
	}
	cout<<ans[i];
	return 0;
}
************************************************************/

class lov{
 public:
    lov():num(-1),flag(0){};
    int num;  //对象位置
    int flag; //自己来没来
};
lov lovers[100000];
int main(){
    int lov_c;
    cin>>lov_c;
    int a,b,i=0;
    while(i++<lov_c){
        cin>>a>>b;
        lovers[a].num=b;
        lovers[b].num=a;
    }
    int come_c;
    cin>>come_c;
    i=0;
    while(i++<come_c){
          int temp;
          cin>>temp;
          lovers[temp].flag=1;  //来了
    }
    i=0;
    int cou=0;
    while(i<100000){
        if(lovers[i].num!=-1&&lovers[i].flag==1){//自己来了看看对象
            int tem=lovers[i].num;
            if(lovers[tem].flag==0) //对象没来
                cou++;
        }
        if(lovers[i].num==-1&&lovers[i].flag==1){//单身狗来了
            cou++;
        }
        i++;
    }
    cout<<cou;
    if(cou!=0){
        cout<<endl;
        i=0;
        int coutt=0;
        while(coutt<=cou&&i<100000)
        {

            if(lovers[i].num!=-1&&lovers[i].flag==1){//自己来了看看对象
                int tem=lovers[i].num;
                if(lovers[tem].flag==0){ //对象没来
                    coutt++;
                    cout<<setfill('0')<<setw(5)<<i<<((cou==coutt)?"":" ");
                }
            }
            if(lovers[i].num==-1&&lovers[i].flag==1){//单身狗来了
                coutt++;
                cout<<setfill('0')<<setw(5)<<i<<((cou==coutt)?"":" ");
            }
            i++;
        }
    }
	return 0;
}
