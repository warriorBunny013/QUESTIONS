class StockSpanner {
public:
    StockSpanner() {
        
    }
    stack<pair<int,int>>s; //index.price
    int next(int price) {
        int ans=1;
        while(!s.empty()){
                   if(s.top().second<=price){
                       //found the smaller one
                     ans+= s.top().first;
                     s.pop();
                   }
                   else{
                       break;
                   }
               }
        s.push({ans,price});
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */