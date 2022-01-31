/*
challenge 1- to a number is power of 2 or not.
challenge 2- to count the numbers of 1 in binary representation of the number.
challenge 3- to make all subsets of a set.
*/
#include<bits/stdc++.h>
using namespace std;

void subset(char arr[],int size)
{
    for(int i=0;i< (1<<size);i++)    //1<<size=2 ki power size
    {
        for(int j=0;j<size;j++)
        {
            if( i & (1<<j) )       //check if jth bit of ith number is set or not
            {
                cout<<arr[j]<<" ";
            }   
        }
        cout<<endl;
    }

}

int count1(int num)
{
    int count=0;
    while(num)
    {
        num=num&(num-1);
        count++;
    }
    return count;

}

bool ispower2(int n)
{
    return (n && !(n & (n-1)));
}
int main()
{ 
    char arr[3]={'x','y','z'};
int num;
cout<<"number";
cin>>num;
cout<<ispower2(num)<<endl;
cout<<count1(num)<<endl;
subset(arr,3);

return 0;
}