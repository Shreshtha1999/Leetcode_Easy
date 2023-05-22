// Write a function that takes the binary representation of an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

// Input: n = 00000000000000000000000000001011
// Output: 3
// Explanation: The input binary string 00000000000000000000000000001011 has a total of three '1' bits.


// Constraints:

// The input must be a binary string of length 32.

#include<bits/stdc++.h>

using namespace std ;

void countBits (uint32_t n){

    int count = 0 ;


    while (n != 0){

        if (n & 1){

            count ++ ;
        }

        n = n >> 1 ;
    }

    cout << count ;
}

int main (){

    int n ;

    cout << "Enter value of n : ";

    cin >> n ;

    countBits(n);
}