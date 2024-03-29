#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,a,b;
    int count=1;
    cin>>a>>b;
    x=a;
    y=b;
    while (x<=y)
    {
        x=x*3;
        y=y*2;
        if(x<y){
        count++;
       }
    }
   
    cout<<count;
    
return 0;
}

int main(){
    int x,a,b;
    
    cin>>a>>b;
    x=0;
    if(a>b)
        x=0;
    else
        while(a<=b)
        {
            a=a*3;
            b=b*2;
            x++;
        }
        cout<<x;
    
return 0;
    }
