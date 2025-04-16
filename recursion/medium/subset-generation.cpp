#include<iostream>
#include<vector>
using namespace std;

void generateAllSunsets(vector<int>&sets,vector<vector<int>>&ans,vector<int>&current,int i, int n){
    if(i==n){
        ans.push_back(current);
        return;
    }
    current.push_back(sets[i]);
        generateAllSunsets(sets,ans,current,i+1,n);
    current.pop_back();
        generateAllSunsets(sets,ans,current,i+1,n);
}

int main(){
    vector<int>sets = {1, 2, 3};
    int n = sets.size();
    int i = 0;
    vector<vector<int>>ans;
    vector<int>current;

    generateAllSunsets(sets,ans,current,i,n);
    for(auto c:ans){
        if(c.size()){
            for(int it:c){
                cout << it <<" ";
            }
        }else{
            cout<<"{}"<<endl;
        }
        cout<<endl;
    }

    return 0;
}