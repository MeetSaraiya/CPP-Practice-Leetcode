#include <iostream>
using namespace std;

void reverseStr(string &a,int i,int j){
    if(i>j){
        return;
    }
    swap(a[i],a[j]);
    return reverseStr(a,i+1,j-1);
}

int main() {
    
    string a = "" ;
    cout<<"enter string "<<endl;
    cin>>a;
    int len = a.length()-1;
    reverseStr(a,0,len);
    cout<<"reverse is "<<a<<endl;

    return 0;
}
