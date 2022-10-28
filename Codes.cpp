#include <bits/stdc++.h>
using namespace std;

// Factorial Func
int factorial(int n)
{
    return n == 0 ? 1 : n * factorial(n - 1);
}

// Fibonacci Series
int fibonacci(int n)
{
    // base case
    // int ans = fibonacci(n-1) + fibonacci(n-2);
    return n == 0 ? 0 : n == 1 ? 1
                               : fibonacci(n - 1) + fibonacci(n - 2);
}

// Say the numbers in word
string SayDig(int n)
{
    string arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (n == 0)
        return "";
    else
    {
        SayDig(n / 10);
        cout << arr[(n % 10) - 1] << " ";
    }
}

int main()
{
    // Lets Make A Better World
    //  int n = 5;
    //  factorial(n);
    //  fibonacci(n);
    //  SayDig(n);
    return 0;
}