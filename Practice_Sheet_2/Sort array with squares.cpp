vector<int> Solution::solve(vector<int> &A) {
    int n= 1e+5;
    vector<int>count(n);
    for(int i=0;i<A.size();i++){
        int x = abs(A[i]);
        count[x]++;
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(count[i]){
            for(int j=1;j<=count[i];j++){
                ans.push_back(i*i);
            }
        }
    }
    return ans;
}
