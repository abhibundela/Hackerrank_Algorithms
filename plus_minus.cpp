#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n; float m=0,p=0,u=0;
        
  
    float a,b,c;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
       cin >> arr[i];
    }
     for(int i = 0;i < n;i++)
         {
         if(arr[i]>0)
         {m++;}
         else if(arr[i]<0)
         {p++;}
         else
         {u++;}}
         a=m/n;
         b=p/n;
         c=u/n;
         cout<<a<<endl<<b<<endl<<c;
     
    return 0;
}
