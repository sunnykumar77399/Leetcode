class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
        int left[n];
        int leftMax = arr[0];
        int right[n];
        int rightMax = arr[n - 1];
        for (int i = 0; i < n; i++) {
            if (arr[i] > leftMax) {
                left[i] = arr[i];
                leftMax = arr[i];
            } else {
                left[i] = leftMax;
            }
        } 
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] > rightMax) {
                right[i] = arr[i];
                rightMax = arr[i];
            } else {
                right[i] = rightMax;
            } 
        }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + (min(left[i], right[i]) - arr[i]);
        }
        return sum;
    }
};