#include<bits/stdc++.h>
using namespace std;
class Stack{
    int st[1000];
    int size = 0;
    int topELE = INT_MAX;
    Stack(){}
    bool push(int num){
        st[size]=num;
        size++;
        topELE=num;
        if(st[size]==num)
            return true;
        return false;
    }

    int top(){
        return topELE;
    }

    bool pop(){
        size--;
        st[size]=INT_MAX;
        topELE = st[size-1];
    }

};

int main(){

}