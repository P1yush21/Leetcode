class StockSpanner {
public:
stack<int>st;
vector<int>arr;
vector<int>pgi;
    StockSpanner() {
        
    }
    
    int next(int price) {
        arr.push_back(price);
        int i = arr.size()-1;
        while(st.size()>0 && arr[st.top()] <= arr[i]) st.pop();
        if(st.size()==0) pgi.push_back(i+1);
        else pgi.push_back(i-st.top());
        st.push(i);
        return pgi[i];
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */