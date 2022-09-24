#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str="n0ji#k$";
   
    int count=0;

    for (int i = 0; i < str.length(); i++)
    {
         if (str[i]>=97 && str[i]<122)
         {
            count++;
         }
         
    }

    cout<<count;
    
}