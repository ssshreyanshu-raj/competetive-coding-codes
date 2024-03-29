#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    if (t<=5)
    {
        cout<<1<<endl;
     
    }
    if (t%5==0&&t>5)
    {
        cout<<t/5<<endl;
        
    }
    
    if(t%5!=0&&t>5){
        cout<<(t/5)+1<<endl;
    }
    
return 0;
}