
class ProductOfNumbers {
    public:
        std::vector<int> n;
    
        ProductOfNumbers() { }
    
        void add(int num) {
            n.push_back(num);
        }
    
        int getProduct(int k) {
            int prod = 1;
            int i = n.size() - k;
            while (i < n.size()) {
                prod = prod * n[i];
                i++;
            }
            return prod;
        }
    };
    
    
    /**
     * Your ProductOfNumbers object will be instantiated and called as such:
     * ProductOfNumbers* obj = new ProductOfNumbers();
     * obj->add(num);
     * int param_2 = obj->getProduct(k);
     */