string Solution::findDigitsInBinary(int A) {
    if(A==0){
        return "0";
    }    
    string s="";
    while(A>0){
        int n = A&1;
        A>>=1;
        s=to_string(n)+s;
    }
    return s;
}
