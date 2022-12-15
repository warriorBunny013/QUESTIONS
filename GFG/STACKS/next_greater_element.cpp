class Solution {
public:
    bool checkValidString(string str) {
        stack <char> open;
        stack<char> star;
        for(int i=0;i<str.length();i++){
            if(str[i]=='('){
                open.push(i);
            }
            else if(str[i]=='*'){
                star.push(i);
            }  
            if(str[i]==')'){
                if(!open.empty()){
                  open.pop();
                }
                else{
                    //open stack is empty now check check star
                    if(!star.empty()){
                        // return true;
                        star.pop();
                    }
                    else if(star.empty() and open.empty()){
                          return false;
                    }
                   
                }
            }
        }
        //now perform operations-->balance open with stars 
        if(open.empty()){
            return true;
        }
        else{
           
            while(!open.empty()){
                
                 if(!open.empty() and star.empty()){
                    return false;
                }
                if(open.top()<star.top()){
                   open.pop();
                   star.pop();
                // return tr?ue;
                }
                else{
                    return false;
                }
               
            }
            return true;
        }

       
    }

};