class Solution {
public:
    int majorityElement(vector<int>& a) {
        int n=a.size();
         int life=0;
         int candi =INT_MIN;
         if(n==1) return a[0];
         for(int i=0;i<n;i++)
         {
              if(life==0){
                 candi=a[i];
                 life=1;
             }
             else if(a[i]==candi){
                life++; 
             }
             else {
                 life--;
             }
         }
         int count=0;
         for(int i=0;i<n;i++){
             if(a[i]==candi){
                count++; 
             }
         }
         if(count>n/2){
             return candi;
         }
         else {
             return -1;
         }
    }
};