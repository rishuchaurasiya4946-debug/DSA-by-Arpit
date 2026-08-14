class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=0,r=0;
        int maxlen=0;
        unordered_map<char,int> freq;
        while(r<s.size()){
            freq[s[r]]++;

            while(freq[s[r]]>2){
                freq[s[l]]--;
                l++;
            }

            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
}; 