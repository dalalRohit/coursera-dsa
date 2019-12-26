#include <iostream>
using namespace std;
int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

int gcd_fast(int a,int b){
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

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << "Naive: "<<gcd_naive(a, b) << std::endl;
  std::cout<<"Fast: "<<gcd_fast(a,b)<<endl;
  return 0;
}
