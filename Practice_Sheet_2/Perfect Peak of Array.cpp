int Solution::perfectPeak(vector<int> &A) {
    int n = A.size();
    vector<int> prefix(n);
    vector<int> sufix(n);
    sufix[n - 1] = A[n - 1];
    prefix[0] = A[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = max(prefix[i - 1], A[i]);
        sufix[n - i - 1] = min(sufix[n - i], A[n - i - 1]);
    }
    for (int i = 1; i < n - 1; i++) {
        if (A[i] > prefix[i - 1] && A[i] < sufix[i + 1]) {
            return 1;
        }
    }
    return 0;
}