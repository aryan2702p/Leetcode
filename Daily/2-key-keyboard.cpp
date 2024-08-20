class Solution {
public:

    int helper(int n , int ans, int clip ){
        if(ans>n)return 10000000;
        if(ans==n)return 0;
        int copy=INT_MAX;
        int paste=INT_MAX;

        if(clip==ans) {
            return 1+helper(n,ans+clip,clip);

        }
        if(clip==0){
            return 1+helper(n,ans,ans);
        }
        return 1+min(helper(n,ans,ans),helper(n,ans+clip,clip));

    }
    int minSteps(int n) {
      return helper(n,1,0);
    }
};
