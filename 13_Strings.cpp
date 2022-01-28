//string is part of STL(standard template library)
#include<bits/stdc++.h>
using namespace  std;
int main()
{
    string s1="nincompoop";
    string s2;
    cout<<"enter a string: ";
    getline(cin,s2);
    cout<<s1<<" "<<s2<<endl;
    //appending
    s1.append(s2);
    cout<<s1<<endl;
    s2.append(s1);
    cout<<s2<<endl;
    //indexing
    cout<<s2[4]<<endl;
    s1.clear();
    s1=s2;
    cout<<s1<<endl;
    if(!(s2.compare(s1)))
    cout<<"equal"<<endl;
    s1.erase(2,5);
    cout<<s1<<endl;
    cout<<s1.find("love");
    




    return 0;
    
} 

