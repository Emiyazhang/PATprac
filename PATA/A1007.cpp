#include <iostream>
#include <cstdio>
using namespace std;
int max_rig=0,max_lef=0;
int MaxSubSeqSum(int arr[], int n) {
    int currentSum, maxSum;
    currentSum = 0;
    maxSum = arr[0]; //֧�ָ���ʱ���arr[0] ,
    int temp_lef=0;
    int temp_rig=0;
    for(int i=0; i<n; i++) {
        currentSum += arr[i];  /* �����ۼ� */
        temp_rig++;
        if(currentSum > maxSum) {  /* ���ָ���ֵ �������ֵ */
            maxSum = currentSum;
            max_lef=temp_lef;
            max_rig=temp_rig;
        }else if(currentSum < 0){  /* �����ǰ����Ϊ�� ���� ���� */
            currentSum = 0;
            temp_lef=i+1;
            temp_rig=i;

        }
    }
    if(maxSum<0)
    {
       max_lef =0;
       max_rig =n-1;
       return 0;
    }
    return maxSum;
}
int main()
{

    int n=0;
    scanf("%d",&n);
    int *arrr=new int[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arrr[i]);
    int ans=MaxSubSeqSum(arrr,n);
    printf("%d ",ans);
    printf("%d %d",arrr[max_lef],arrr[max_rig]);
    return 0;
}
