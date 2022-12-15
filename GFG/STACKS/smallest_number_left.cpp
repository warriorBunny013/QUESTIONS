vector<int> leftSmaller(int n, int arr[]){
        stack<int>s;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(s.empty()){
                s.push(arr[i]);
                ans.push_back(-1);
            }
            else{
                while(!s.empty()){
                    if(arr[i]>s.top()){
                       ans.push_back(s.top());
                       break;
                   }
                    else{
                    
                       s.pop();
                    }
                }
                if(s.empty()){
                    ans.push_back(-1);
                }
                s.push(arr[i]);
            }
        }
        // reverse(ans.begin(),ans.end());
        return ans;
    }