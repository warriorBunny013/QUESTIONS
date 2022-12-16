vector <int> calculateSpan(int price[], int n){
       //using the concept of nearest smallest to left
       vector<int>ans;
       stack<pair<int,int>>s; //price[i],i
                        // ele,    index
       for(int i=0;i<n;i++){
           if(s.empty()){
               ans.push_back(-1);
               s.push({price[i],i});
           }
           else{
               //s empty nahi hain
               while(!s.empty()){
                   if(s.top().first<=price[i]){
                       //found the smaller one
                     s.pop();
                   }
                   else{
                       break;
                   }
               }
               if(s.empty()){
                   ans.push_back(-1);
               }else{
                   ans.push_back(s.top().second);
               }
               s.push({price[i],i});
           }
       }
       for(int i=0;i<ans.size();i++){
           ans[i]=i-ans[i];
       }
       return ans;
    }