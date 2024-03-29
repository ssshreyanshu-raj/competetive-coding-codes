#include<bits/stdc++.h>
using namespace std;
int main(){
    int count(0);
    int M,N;
    cin>>M>>N;
    for (int i = 1; i <= M*N; i++)
    {
        if (i%2==0)
    {
        count++;
    }
    }
    
    
    cout<<count<<endl;
    
return 0;
}