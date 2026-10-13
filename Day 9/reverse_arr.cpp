class Solution {
public:
    vector<int> reverseArray(vector<int>& arr) {
        vector<int> reverse;
        for(int i=arr.size()-1; i>=0; i--){
            reverse.push_back(arr[i]);
        }
        return reverse;
    }
};