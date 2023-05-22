// Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 
// Example 1:

// Input: n = 234
// Output: 15 
// Explanation: 
// Product of digits = 2 * 3 * 4 = 24 
// Sum of digits = 2 + 3 + 4 = 9 
// Result = 24 - 9 = 15

# include<bits/stdc++.h>

using namespace std ;

void substractProductSum (int n){

    int sum = 0 ;

    int product = 1 ;

    int diffNum ;

    while (n != 0){

        //Extracting the last digit 

    int last_digit = n % 10 ;

        //Storing sum 

        sum = sum + last_digit;

        // storing product

        product = product * last_digit;

        //difference betn product & sum 

        diffNum = product - sum ;

        n = n / 10 ;


    }

    cout << diffNum;
}

int main(){

    int n ;

    cout << "Enter the value of n: ";

    cin >> n ;

    substractProductSum(n);
}