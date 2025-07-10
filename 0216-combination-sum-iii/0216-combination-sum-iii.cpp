class Solution {
public:
    vector<vector<int>> res;
    void func(vector<int>& arr,vector<int>& v,int k,int n,int idx){
        if(idx==arr.size()){
            if(n==0 && v.size()==k){
                res.push_back(v);
            }
                return ;
        }
        func(arr,v,k,n,idx+1);
        if(arr[idx]<=n){
            v.push_back(arr[idx]);
            func(arr,v,k,n-arr[idx],idx+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> arr={};
        int temp=n;
        if(n>9) temp=9; 
        for(int i=1;i<=temp;i++){
            arr.push_back(i);
        }
        vector<int> v={};
        func(arr,v,k,n,0);
        return res;
    }
};