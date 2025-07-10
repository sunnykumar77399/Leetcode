class Solution {
public:
  unordered_map<int,string> mp;
        vector<string> res={};
       Solution() {
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
    }
    void func(string digits,int idx,string& s){
        
        if(idx==digits.size()){
            res.push_back(s);
            return ;
        }
        int num=int(digits[idx])-'0'; 
               for(int i=0;i<mp[num].size();i++){
                    s+=mp[num][i];
                    func(digits,idx+1,s);
                    s.pop_back();
               }
         
    }
    vector<string> letterCombinations(string digits) {
        if(digits=="") return res;
        string s="";
        func(digits,0,s); 
        return res;

    }
     
};