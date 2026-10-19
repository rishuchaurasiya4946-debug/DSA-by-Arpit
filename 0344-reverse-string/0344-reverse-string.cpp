class Solution {
public:
    void reverseString(vector<char>& str ) {
       stack<char>st;
       for(char ch:str){
        st.push(ch);
       }
       for(int i=0;i<str.size();i++){
        str[i]= st.top();
        st.pop();
       }
        
    }
};