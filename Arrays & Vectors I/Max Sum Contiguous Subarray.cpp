int Solution::maxSubArray(const vector<int> &A) {
    int maxSum=INT_MIN;
    int currSum=0;
    for(int i=0;i<A.size();i++){
        currSum+=A[i];
        maxSum=max(maxSum,currSum);
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
}
