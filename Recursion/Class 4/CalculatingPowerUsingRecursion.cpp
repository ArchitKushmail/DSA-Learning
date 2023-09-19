#include<iostream>
using namespace std;


int powerr(int a , int b){
if(b==0){
    return 1;
}
if(b==1){
    return a;
}
int ans = powerr(a,b/2);
if(b&1){
    return a*ans * ans;
}else{
    return ans*ans;
}
}

int main(){
    
    int a = 2;
    int b = 3;

    int ans = powerr(a,b);
    cout<<ans;
    
    return 0;
}