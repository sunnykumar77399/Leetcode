class Solution {
public:
//checking that new string is palindrom or not
    bool check(string part){
        int r=part.size()-1;
        int l=0;
        while(l<r){
            if(part[l]!=part[r]) return false;
            l++,r--;
        }
        return true;
    }
    vector<vector<string>> res;
    vector<string> list;
    void func(string s,int idx){
      if(idx==s.size()){
        res.push_back(list);
        return;
      }
      string part="";
      for(int i=idx;i<s.size();i++){
        part+=s[i];
        if(check(part)){
            list.push_back(part);
            func(s,i+1);
            list.pop_back();
        }
      }
    }
    vector<vector<string>> partition(string s) { 
        func(s,0);
        return res;
    }
};