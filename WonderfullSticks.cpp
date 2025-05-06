#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n,i;
        cin>>n;
        cin.ignore();
        vector<int> arr;
        for(i=1;i<=n;i++){
            arr.push_back(i);
        }

        vector<string> s;
        // for(i=0;i<n-1;i++){
        //     string ss;
        //     cin>>ss;
        //     s.push_back(ss);
        // }
        
        int store;
        for(i=1;i<=n;i++){   
            string ss;
            cin>>ss;
            s.push_back(ss);

            if(s[i]=="<" ){
             arr[i]<arr[i+1];
            }else if(s[i]==">"){
                arr[i]>arr[i+1];
            }
            cout<<arr[i]<<" ";
        }
        // for(i=0;i<n-1;i++){
        // cout<<arr[i];
        // }
       
       
    }
    return 0;
}