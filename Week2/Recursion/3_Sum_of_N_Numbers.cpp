/*
 * Problem: Sum of Natural Numbers
 * Platform: GeeksForGeeks
 * Difficulty: Easy
 * Link: https://www.geeksforgeeks.org/problems/sum-of-n-number--144226/1
 *
 * Approach: Recursion — base case at n=0, recursive call does
 * n + sum(n-1).
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n) — recursive call stack
 */

#include <iostream>
using namespace std;

int sum(int n)
{
    if(n == 0)
        return 0;
    return (n + sum(n-1));
}

int main() {
    int n;
    cin >> n;

    // code here
    int ans = sum(n);
    cout<<ans;

    return 0;
}