class Solution{
public:
    long long int factorial(int N){
        if(N ==1 || N==0)return 1;
        int ans = N;
        return ans*factorial(N-1);
    }
};