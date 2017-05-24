##数据结构与算法分析-----c语言描述

```
MaxSubSum(const int A[],int Left,int Right)
{
    int MaxLeftSum,MaxRightSum;
    int MaxLEftBorderSum,MaxRightSum;
    int LeftBorderSum,RightBorderSum;
    int Center,i;

    if(Left==Right)
    {
        if(A[Left]>0)
           return A[Left];
        else
            return 0;
    }

    Center=(Left+Right)/2;
    MaxLeftSum=MaxSubSum(A,Left,Center);
    MaxRightSum=MaxSubSum(A,Center+1,Right);

}
```
