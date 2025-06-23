#include <iostream>
using namespace std;
// page 32
//  Euclid's algorithm for computing the greatest common divisor (GCD) of two integers

int euclidian(int m,int n){
     
    //edge case
    if (m == 0 && n == 0) {
    cout << "GCD is undefined for both inputs zero." << endl;
    return 0;
}

    while(n!=0){
      int r=m%n;
      m=n;
      n=r;
    }

    return m ;
}
int main()
{
   int m,n;
   cin>>m;
   cin>>n;
   cout<<"gcd is"<<euclidian(m,n);
   
    return 0;
}

//lesser number always ends up being in the n position and greater number always ends up being in m position, because if m<n, then m/n=m would go to n

/*
Recall that the greatest common divisor of two nonnegative, not-both-zero
integers m and n, denoted gcd(m, n), is defined as the largest integer that divides
both m and n evenly, i.e., with a remainder of zero.

Euclid of Alexandria (third century b.c.) outlined an algorithm for solving this problem in one of the volumes
of his Elements most famous for its systematic exposition of geometry. In modern
terms, Euclid’s algorithm is based on applying repeatedly the equality
gcd(m, n) = gcd(n, m mod n),
where m mod n is the remainder of the division of m by n, until m mod n is equal
to 0. 
Since gcd(m, 0) = m (why?), 

the last value of m is also the greatest common
divisor of the initial m and n.
*/