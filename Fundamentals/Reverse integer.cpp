int Solution::reverse(int A) {
    long long rev = 0; 
        while(A != 0){
            int digit = A % 10;
            rev = rev * 10 + digit;
            if(rev > INT_MAX || rev < INT_MIN) return 0; 
            A = A / 10;
        }
        return (int)rev;
    }