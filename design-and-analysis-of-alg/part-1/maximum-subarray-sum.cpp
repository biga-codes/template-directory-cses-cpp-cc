#include <iostream>
#include <vector>
#include <sstream>

using namespace std;
int solution1(vector<int>& v)
{
    int maxi;
    for(int i=0;i<v.size();i++){
        int sum=0;
        //startig from i to j
        for(int j=i;j<v.size();j++){
                sum+=v[j];
                //for each i to each j , not each i to same j=size()
              maxi=max(maxi,sum);
        }
        
    }

    return maxi;
}

int solution2(vector<int>& v){

    //max subarray sum kadanes algorithm
    int bestsofar=0;int sum=0;
    for(int i=0;i<v.size();i++){
         sum=max(v[i],sum+v[i]);
         // either choose current k or subarray uptil same CURRENT k whichever is better
         //since we can only go from left to right
         bestsofar=max(sum,bestsofar);
    }

    return bestsofar;
}
int main()
{   
    string s;
    getline(cin,s);
    stringstream ss(s);
    int x;
    vector<int> v;
    while(ss >> x){
         v.push_back(x);
        //cout
    }

    cout << solution2(v) << endl;
    cout << solution1(v) << endl;
    return 0;
}


/*Imagine you are collecting candies in a line.
Some candies are sweet (positive numbers), some are sour (negative numbers).
You want to pick a group of candies in a row that gives you the most sweetness (biggest sum).
How do you do it?
Start at the first candy.
As you walk, keep adding the sweetness of each candy to your basket.
If your basket ever tastes worse than just starting fresh with the next candy, dump your basket and start over!
Always remember the best (sweetest) basket you ever had.
Kadane’s Algorithm in Code
How to use it in your main function
So, Kadane’s algorithm is like always keeping the sweetest basket of candies as you walk down the line!*/

/*GitHub Copilot
Of course! Here’s another childish example for Kadane’s algorithm:

Imagine you are playing a video game.
You walk along a path and collect coins and sometimes lose coins (some numbers are positive, some are negative).
You want to find the part of the path where you collect the most coins in a row.
How do you do it?
Start walking and keep adding up the coins you find.
If you ever lose so many coins that you have less than if you just started fresh at the next spot, pretend you start over there!
Always remember the most coins you ever had in a row.
Example path:
-1 2 4 -3 5 -2 6 -5 2

Start: -1 (not great)
Next: 2 (better to start here)
Next: 2 + 4 = 6 (keep going)
Next: 6 + (-3) = 3 (still positive)
Next: 3 + 5 = 8 (best so far!)
Next: 8 + (-2) = 6
Next: 6 + 6 = 12 (new best!)
Next: 12 + (-5) = 7
Next: 7 + 2 = 9
The most coins you ever had in a row was 12!


GitHub Copilot
Great question!
Let’s walk through Kadane’s algorithm with your example:
-1, -2, -3, -4, 5, -2

Step-by-step (like the coin game):
Start: -1 (basket = -1, best = -1)
Next: -2
max(-2, -1 + -2) = max(-2, -3) = -2
basket = -2, best = -1
Next: -3
max(-3, -2 + -3) = max(-3, -5) = -3
basket = -3, best = -1
Next: -4
max(-4, -3 + -4) = max(-4, -7) = -4
basket = -4, best = -1
Next: 5
max(5, -4 + 5) = max(5, 1) = 5
basket = 5, best = 5
Next: -2
max(-2, 5 + -2) = max(-2, 3) = 3
basket = 3, best = 5
Final answer:
The best streak (maximum subarray sum) is 5 (just the single 5).

Intuitive:
Even if you have a lot of bad coins, as soon as you find a really good one (like 5), you start a new basket there!
So, the answer is 5

So, Kadane’s algorithm is like always keeping track of your best streak */