#include <iostream> 
using namespace std;

bool checkPalindrome(string &str,int s,int e){
    if(s>e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    s++;
    e--;
    return checkPalindrome(str,s,e);
}
int main(){
    
    string str = "apa";
    cout<<endl;
    bool ans = checkPalindrome(str,0,str.length()-1);
    cout<<ans;
    return 0;

}