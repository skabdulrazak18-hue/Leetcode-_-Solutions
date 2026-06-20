class Solution {
public:
    bool isPalindrome(int x) {
        int a = x;
        long long rem = 0;
        while(x>0){
            int digit = x%10;
            rem = (rem*10)+digit;
            x/=10;
        }
        if(a == rem){
          return true;  
        }
       return false; 
    }
};