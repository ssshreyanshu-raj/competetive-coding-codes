#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
   
    
   
   
    for (int i = 0; i < t; i++)
    {   
        string s;
        int n;
        string y;
        cin>>n;
        cin>>s;
        y=s;
        reverse(y.begin(),y.end());
       
        if((s.length())%2==0){

            cout<<y<<s<<endl;
    }
    

        else{
           cout<<s<<endl;
          
    }

    }
    
    
}