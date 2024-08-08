//Switch problems
#include<iostream>
#include<vector>
using namespace std;
int press(vector<int>&v){
    int n=v.size();
    int count=0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                count++;
                v[i]=0;
                int k=i+1;
                while(k<n){
                    if(v[k]==0){
                        v[k++]=1;
                    }
                    else{
                        v[k++]=0;
                    }
                }
            }
        }
        return count;
}
int main(){
    vector<int>v={1,0,0,0,1};
    cout<<press(v)<<endl;
    return 0;
}