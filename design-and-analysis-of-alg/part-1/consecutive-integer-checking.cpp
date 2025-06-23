
#include <iostream>
#include <algorithm>


using namespace std;
int randint(int low, int high) {
    return low + rand() % (high - low + 1);
}

int consecutiveInteger(int m, int n){
     //dont over write
      int t=min(m,n);
    while(!(m % t == 0 && n % t == 0)){
        t--;
    }
  // First common divisor from high to low is the GCD
  // for GCD, we need t to divide both m and n — so it should be: 
  return 1;
}

int main()
{
    int m = randint(1, 30);
    int n = randint(1, 30);
    cout << "two integers are : " << m  << " and " << n << endl;
    cout << "the gcd is: " << consecutiveInteger(m, n) << endl;
}

/*y. Obviously, such
a common divisor cannot be greater than the smaller of these numbers, which we
will denote by t = min{m, n}. So we can start by checking whether t divides both
m and n: if it does, t is the answer; if it does not, we simply decrease t by 1 and
try again. (How do we know that the process will eventually stop?) For example,
for numbers 60 and 24, the algorithm will try first 24, then 23, and so on, until it
reaches 12, where it stops*/











/*Consecutive integer checking algorithm for computing gcd(m, n)
Step 1 Assign the value of min{m, n} to t.
Step 2 Divide m by t. If the remainder of this division is 0, go to Step 3;
otherwise, go to Step 4.
Step 3 Divide n by t. If the remainder of this division is 0, return the value of
t as the answer and stop; otherwise, proceed to Step 4.
Step 4 Decrease the value of t by 1. Go to Step 2.
Note that unlike Euclid’s algorithm, this algorithm, in the form presented,
does not work correctly when one of its input numbers is zero.*/