class Solution {
public:
    int findMax(vector<int>& arr){
        int maxelement =arr[0];
        for(int i=1; i<arr.size(); i++){
            if(arr[i]>maxelement)
            maxelement = arr[i];
        }   
        return maxelement; 
    }
};