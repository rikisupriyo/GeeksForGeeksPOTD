class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        sort(arr.begin(), arr.begin()+n/2, greater<int>());
        sort(arr.begin()+n/2, arr.end(), greater<int>());
        int i=0, j=n/2;
        int c=0;
        while (i<n/2 && j<n) {
            if (arr[i] >= 5*arr[j]) {
                c += n-j;
                i++;
            }
            else j++;
                
        }
        return c;
    }  
};
