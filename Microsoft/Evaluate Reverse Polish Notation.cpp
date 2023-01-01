
 // Expected Time Complexity: O(n)  Space Time Complexity: O(n)
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long>st;
        for(auto i:tokens)
        {
            if(i=="+" || i=="-" || i=="*" || i=="/")  // if element is operator then store it in a variable to perform operation  on it else if it is an operand push  it into stack
            {
                auto second=st.top();
                st.pop();
                auto first=st.top();
                st.pop();
            
            if(i=="+") 
                st.push(second+first);
            else if(i== "-")
               st.push(first-second);
            else if(i=="*")
                st.push(second*first);
            else if(i=="/")
                st.push(first/second);
            }
            else{
                int t=stoi(i);
                st.push(t);
            }
        }
        return st.top();
        }
    
};
