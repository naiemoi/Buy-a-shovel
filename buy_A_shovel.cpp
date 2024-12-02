#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int sum=0;
    for(int i=1;i<200;i++){
        sum=sum+a;
    if((sum %10 == 0) || (sum %10 == b)){
            cout<<i<<endl;
            return 0;
            
        }
    }
    return 0;
}