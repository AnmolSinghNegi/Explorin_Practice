class Solution {
  public:
    string armstrongNumber(int n){
        int org=n;
        int sum =0;
        while(n!=0){
            int num =n%10;
            sum+=pow(num,3);
            n/10;
        }
        if(sum==org){
            return "Yes";
        }
        return "No";
    }
};