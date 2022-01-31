#include<bits/stdc++.h>
using namespace std;

int getbit(int num,int pos)
{
   return (num&(1<<pos));
}

int setbit(int num,int pos)
{
    return(num|(1<<pos));
}

int clearbit(int num,int pos)
{
    int mask = ~(1<<pos);
    return(num & mask); 
}

int updatebit(int num,int pos,int value)
{
    int mask=~(1<<pos);
    num=num&mask;
    return(num|(value<<pos));
}

int main()
{
    cout<<getbit(5,2)<<endl;
    cout<<setbit(5,1)<<endl;
    cout<<clearbit(5,2)<<endl;
    cout<<updatebit(5,1,1);


    return 0;
}