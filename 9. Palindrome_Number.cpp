class Solution {
public:
bool isPalindrome(int x) {
long temp=0;
long temp2=x;
if(x<0)return false;
while(x!=0)
{
temp=temp*10+x%10;
x=x/10;

    }
    if (temp==temp2)
        return true;
    else return false;
    
}
};``
