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

#include <iomanip>//��Ҫ���ǰ�����ͷ�ļ�
using namespace std;

/************************************************************

��һ�����ֵĵ�δ��󣬹�����map�ڴ������2333��������ϰ��ʹ��STL

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
		lovers.insert(pair<string,interv>(a,temp)); //���Լ����Լ���Ϣ
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
		if(iter!=lovers.end()){  //���ǵ���
            iter=lovers.find(iter->second.mate); //�ҵ�����
			iter->second.mat_come_flag=1;//�޸Ķ����������־
			com_d.push_back(co); //װ�����������
		}
		else
			ans.push_back(co);  //�ǵ�����װ��������
	}
	int siz=com_d.size();
	i=0;
	while(i<siz)
	{
		iter=lovers.find(com_d[i]);  //���Լ���Ϣ
		if(iter->second.mat_come_flag==0){
			ans.push_back(com_d[i]);
		}//��į��/��,װ��
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
    int num;  //����λ��
    int flag; //�Լ���û��
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
          lovers[temp].flag=1;  //����
    }
    i=0;
    int cou=0;
    while(i<100000){
        if(lovers[i].num!=-1&&lovers[i].flag==1){//�Լ����˿�������
            int tem=lovers[i].num;
            if(lovers[tem].flag==0) //����û��
                cou++;
        }
        if(lovers[i].num==-1&&lovers[i].flag==1){//��������
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

            if(lovers[i].num!=-1&&lovers[i].flag==1){//�Լ����˿�������
                int tem=lovers[i].num;
                if(lovers[tem].flag==0){ //����û��
                    coutt++;
                    cout<<setfill('0')<<setw(5)<<i<<((cou==coutt)?"":" ");
                }
            }
            if(lovers[i].num==-1&&lovers[i].flag==1){//��������
                coutt++;
                cout<<setfill('0')<<setw(5)<<i<<((cou==coutt)?"":" ");
            }
            i++;
        }
    }
	return 0;
}
