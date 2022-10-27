//geeks for geeks problem
class Solution{
public:
    void helper(stack<int> &st, int x) {
        if(st.empty()) {
            st.push(x);
            return;
        }
        int elm = st.top();
        st.pop();
        helper(st, x);
        st.push(elm);
    }
    void Reverse(stack<int> &st){
        if(st.empty()){
            
            return;
        }
        
        int elm = st.top();
        st.pop();
        
        Reverse(st);
        helper(st, elm);
    }
};
