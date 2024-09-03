class ProductOfNumbers {
public:
    vector<int> ans;
    ProductOfNumbers() { 
    }
    
    void add(int num) {
        ans.push_back(num);
    }
    
    int getProduct(int k) {
        int product = 1;
        int till = ans.size() - k;
        for(int i=ans.size()-1; i>=till; i--)
            product *= ans[i];
    return product;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */