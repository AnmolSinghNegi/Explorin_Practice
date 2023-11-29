int Solution::solve(vector<int> &A) {
    int esum=0;
    int osum=0;
    for(int i=0;i<A.size();i++){
        if(i%2==0){
            esum+=A[i];
        }
        else{
            osum+=A[i];
        }
    }
    int ans=0;
    int sum=esum+osum;
    for(int i=0;i<A.size();i++){
        sum-=A[i];
        osum=sum-osum;
        esum=sum-osum;
        if(esum==osum){
            ans++;
        }
        sum+=A[i];
    }
    return ans;
}