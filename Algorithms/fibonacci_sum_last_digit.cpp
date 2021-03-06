#include <iostream>

int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum % 10;
}
long long fibonacci_sum_fast(long long n){
   
   long long f[n],sum=0;
   f[0]=0;
   f[1]=1;
   
   for(long long i=2;i<=n;i++)
   {
         f[i]=f[i-1]+f[i-2];
         sum+=f[i];
   } 
   return sum%10;
   }
int main() {
    long long n = 0;
    std::cin >> n;
    //std::cout << fibonacci_sum_naive(n)<<'\n';
    std::cout<<fibonacci_sum_fast(n)<<'\n';
}
