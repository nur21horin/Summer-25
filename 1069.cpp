#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s,a,b,c;
        cin>>s>>a>>b>>c;
        float t=((float)s*(float)c)/100 ;
        float store=s+t;
        if(store>=a && store<=b) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }
    return 0;
}