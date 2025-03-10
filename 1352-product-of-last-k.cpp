
// class ProductOfNumbers {
//     public:
//         std::vector<int> n;
    
//         ProductOfNumbers() { }
    
//         void add(int num) {
//             n.push_back(num);
//         }
    
//         int getProduct(int k) {
//             int prod = 1;
//             int i = n.size() - k;
//             while (i < n.size()) {
//                 prod = prod * n[i];
//                 i++;
//             }
//             return prod;
//         }
//     };
    
    
//     /**
//      * Your ProductOfNumbers object will be instantiated and called as such:
//      * ProductOfNumbers* obj = new ProductOfNumbers();
//      * obj->add(num);
//      * int param_2 = obj->getProduct(k);
//      */

#include<bits/stdc++.h>
using namespace std;
class ProductOfNumbers {
    public:
        map<int,vector<int>>m;
        int prod = 1;
    
        ProductOfNumbers() { }
    
        void add(int num) {
            int size = m.size();
            if(prod == 0)
                prod = 1;
            prod = prod * num;
            // m[size]={num,prod};
            m[size].push_back(num);
            m[size].push_back(prod);
        }
    
        int getProduct(int k) {
            int i = m.size() - k -1;
            int div = m[i][1];
            int total = m[m.size()-1][1];
            int ans = total / div ; 
            return ans;
        }
    };
    
    
    /**
     * Your ProductOfNumbers object will be instantiated and called as such:
     * ProductOfNumbers* obj = new ProductOfNumbers();
     * obj->add(num);
     * int param_2 = obj->getProduct(k);
     */