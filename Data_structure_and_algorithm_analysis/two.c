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


    递归的具体应用
1   2  3   4   5  6  7  8（元素索引）
4，-3，5，-2，-1，2，6，-2  （数组）

MaxLeftSum= MaxSubSum(A,1,4)
Left!=Right
MaxLeftSum=MaxSubSum(A,1,2)
MaxLeftSum=MaxSubSum(A,1,1)
Left==Right  return 4
MaxRightSum=MaxSubSum(A,3,8)
MaxLeftSum=MaxSubSum(A,3,5)
MaxLeftSum=MaxSubSum(A,3,4)
MaxLeftSum=MaxSubSum(A,3,3)
Left==Right return 5
MaxRightSum=MaxSubSum(A,5,8)
MaxLeftSum=MaxSubSum(A,5,6)
MaxLeftSum=MaxSubSum(A,5,5)
Left==Right return -1
MaxRightSum=MaxSubSum(A,7,8)
MaxLeftSum=MaxSubSum(A,7,7)
return 6

i   LeftBorderSum  MaxLEftBorderSum
7        6              6
6        8              8
5        7              8
4        5              8
3        10             10
2        7              10
1        11             11

i  RightBorderSum     MaxRightBorderSum
8       




int MaxSubsequenceSum(const int A[] ,int N)
{
    int ThisSum,MaxSum;

    ThisSum=MaxSum=0;
    for(j=0;j<N;j++)
    {
        ThisSum+=A[j];
        if(ThisSum>MaxSum)
            MaxSum=ThisSum;
        else
            ThisSum=0;
    }
    return Maxsum;
}
4,-3,5,-2,-1,2,6,-2

A[j]   ThisSum   MaxSum
4         4        4
-3        1->0      4  
5         5        5
-2        3->0     5
-1        -1->0    5
2         2->0     5
6         6        6
-2        -2->0    6
return 6;
联机算法：对数据进行一次扫描，不需被记忆。对已经读入的数据给出子序列问题的正确答案

2.4.4  运行时间中的对数
分治算法O(NlogN)时间运行

如果一个算法用常数时间O（1），将问题的大小消减为开始的一部分 那么算法就是O(NlogN)
。。。。。。。。。。。。。。。将问题大小减少一个常数。。。。。。。。。。。O(N)

假设输入数据已经提前读入

具有对数特点的三个例子：
1、对分查找
int BinNarySearch(const ElementType A[] , int left,int Right  ,int X)
{
    center=(left+Right)/2;

    if(A[cneter]!=X)
        if(A[center]>X)
        {   
            if(center!=low)
            {
                BinNarySearch(A,left,center,x)

            }
            else
                return -1;
        }
        else
        {
            if(A[center]<X)
            {
                if(center!=hight)
                {
                    BinNarySearch(center,Right,x )
                }
                else
                {
                    return -1;
                }
            }
        }
    else 
        return center;

}
1   2  3  4 5 6 7 8
-3,-2,-2,-1,2,4,5,6   x=2

Find（查找）操作
int BinNarySearch(const ElementType A[],ElementType X ,int N)
{
    int low,hight,mid;
    low=0;
    hight=N-1;

    while(low<=hight)
    {
        mid=(low/hight)/2;
        if(A[mid]<X)
            low=mid+1;
        else if(A[mid]<x)
            hight=mid-1;
        else
            return mid; 
            
    }
    return -1;
}

insert操作 O(N)


欧几里得算法(计算最大公因数)

unsigned int Gcd(unsigned int M,unsigned int N)
{
    unsigned int r;
    while(N>0)//直到余数为零
    {
        r=M%N;
        M=N;
        N=r;
    }

}



幂运算

乘法的次数作为运行时间的度量

long int Pow(long int X,unsigned int N)
{
    long int zhi;
    long int produce;
    produce=X;
    zhi=1;
    if(N==0)
        return 1;

    while(N>0)
    {
         zhi=zhi*produce;
         N--;
    }
    return zhi;
}

long int pow(long int x,unsigned int n)
{
    if(n==0)
        return 1;
    else
        return x*pow(x,n-1);
    
}



b^N=(b^n/2)^2--->n是偶数
b^N=(b*b^n-1)--->n是奇数

long int pow(long int x,unsigned int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return square(pow(x,n/2));
    else
        return x*pow(x,n-1);
}

int square(int x)
{
    return x*x;
}
x^5
x*(pow(x,4))
x*(square(pow(x,2)))
x*(square(square(pow(x,1))))
x*(square(square(x*(1))))
x^5


long int pow(long int x,unsigned n)
{
    if(n==0);
        return 1;
    if (n%2==0)
        return pow(x*x , n/2);
    else
        return pow(x*x , n/2)*x;
}
pow(x,5)
x^2*pow(x^2,2)
x^2*(pow(x^2,1))
x^2*(x^2(pow(x^2,0))
x^2*(x^2(x))
x^5


练习


