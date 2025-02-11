#include<bits/stdc++.h>

using namespace std;

int removeOcc(string s = "daabcbaabcbc", string part = "abc"){
    int n = s.size();
    int m = part.size();
    int i=0;
    while(i<n-m){
        int idx = s.find(part);
        if(idx != string::npos)
            s.erase(idx,m);
        i++;
    }
    cout<<s<<endl;
    return 0;
}

int main(){
    removeOcc();
}