//*************************************************************************
    > File Name: B1010.cpp
    > Author: ji_zhang
    > Mail:
    > Created Time: 2017/11/11 5:26:55
 ************************************************************************/

#include <cstdio>
int main(){

	int k,ex;
	scanf("%d %d",&k,&ex);
	if(ex!=0){
        k=k*ex;
        ex--;
        printf("%d %d",k,ex);
        while(scanf("%d %d",&k,&ex)!=EOF&&ex!=0)
        {
            printf(" ");
            k=k*ex;
            ex--;
            printf("%d %d",k,ex);
        }
    }
    else
        printf("0 0");
    return 0;
}
