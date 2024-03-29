#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5];
    int Ans;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(arr[i][j]==1){
                int X,Y;
                X=i-3+1;
                Y=j-3+1;
                Ans=abs(X)+abs(Y);
            }
        }
        
    }

    cout<<Ans<<endl;

    
return 0;
}