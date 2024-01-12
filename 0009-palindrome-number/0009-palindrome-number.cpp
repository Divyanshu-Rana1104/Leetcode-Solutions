class Solution {
public:
    bool isPalindrome(int x) {
       long int num=0,original=x;
       
        while(x>0){
            num=num*10;
            num=num+(x%10);
            x=x/10;
        }
        if(num==original){
            return true;
        }
        return false;
    }
    
};