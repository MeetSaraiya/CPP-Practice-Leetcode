#include <iostream>
using namespace std;

int fastPow(int a, int b){
    if(b == 0)
        return 1;
    if(b == 1)
        return a;
    int half = fastPow(a , b/2);
    int res = half * half;
    if(b%2 == 1){
        res = res * a;
    }
    return res;
}

int main() {
    int a , b;
    cout<<"enter number "<<endl;
    cin>>a;
    cout<<"enter number "<<endl;
    cin>>b;
    cout<<"answer is "<<fastPow(a,b)<<endl;

    return 0;
}
