#include <iostream>
using namespace std;

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}
int get_fibonacci_last_digit_fast(int n){
    int f[n+2];
    f[0]=0;
    f[1]=1;
    for (int i = 2; i <= n; i++)
  {
      /* Add the previous 2 numbers in the series
         and store it */
      f[i] = (f[i-1] + f[i-2])%10;
  }
    return f[n];
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    std::cout <<"Naive: "<< c << '\n';
    cout<<"Fast: "<<get_fibonacci_last_digit_fast(n);
    }
