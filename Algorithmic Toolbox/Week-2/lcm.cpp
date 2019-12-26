#include <iostream>
using namespace std;
long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}
long gcd_fast(long a,long b){
    //Implement Euclidean algo for GCD(a,b)
    /*
    GCD(1344, 217)
    = GCD(217, 42)
    = GCD(42, 7)
    = GCD(7, 0)
    =7
    */
    int q=0;
    while(b!=0){
        q=a%b;
        a=b;
        b=q;
    }
    return a;
}
long long lcm_fast(long a, long b) {
    return (a*b)/gcd_fast(a,b);
}

int main() {
  long a, b;
  std::cin >> a >> b;
  //Naive is very slow for 761457 614573
  std::cout << "Naive: "<<lcm_naive(a, b) << std::endl;
  std::cout << "Fast: "<<lcm_fast(a, b) << std::endl;
  return 0;
}
