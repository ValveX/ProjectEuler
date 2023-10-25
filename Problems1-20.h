#pragma once
#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <cassert>
#include <fstream>
#include "Utils.h"

class Problem0001  {
public:
    // SumOfMultiplesOf3Or5
    long long operator()(long long m) const;
    long long operator()() const;
};

class Problem0002  {
public:
    // SumEvenValuedFibonacci
    long long operator()(long long m) const;
    long long operator()() const;
};

class Problem0003  {
public:
    // BiggestPrimeFactorOf
    long long operator()(long long m) const;
    long long operator()() const;
};

class Problem0004  {
public:
    int IsMultipleOf3DigitNumber(int number) const;

    // PalindromeOf3DigitNumber
    long long operator()() const;
};

class Problem0005  {
public:
    // Smallest Multiple
    /*
    * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
    * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
    */
    long long operator()() const;
};

class Problem0006  {
public:
    // Sum Square Difference
    /*
    <p>The sum of the squares of the first ten natural numbers is,</p>
    $$1^2 + 2^2 + ... + 10^2 = 385.$$
    <p>The square of the sum of the first ten natural numbers is,</p>
    $$(1 + 2 + ... + 10)^2 = 55^2 = 3025.$$
    <p>Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is $3025 - 385 = 2640$.</p>
    <p>Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.</p>
    */
    long long operator()(long long n) const;

    long long operator()() const;
};

class Problem0007 {
public:
    // 10001st Prime
    /*
    <p>By listing the first six prime numbers: $2, 3, 5, 7, 11$, and $13$, we can see that the $6$th prime is $13$.</p>
    <p>What is the $10\,001$st prime number?</p>
    */
    long long operator()(long long n) const;

    long long operator()() const;
};

class Problem0008 {
public:
    // Largest Product in a Series
    /*
    <p>The four adjacent digits in the $1000$-digit number that have the greatest product are $9 \times 9 \times 8 \times 9 = 5832$.</p>
    <p class="monospace center">
    73167176531330624919225119674426574742355349194934<br>
    96983520312774506326239578318016984801869478851843<br>
    85861560789112949495459501737958331952853208805511<br>
    12540698747158523863050715693290963295227443043557<br>
    66896648950445244523161731856403098711121722383113<br>
    62229893423380308135336276614282806444486645238749<br>
    30358907296290491560440772390713810515859307960866<br>
    70172427121883998797908792274921901699720888093776<br>
    65727333001053367881220235421809751254540594752243<br>
    52584907711670556013604839586446706324415722155397<br>
    53697817977846174064955149290862569321978468622482<br>
    83972241375657056057490261407972968652414535100474<br>
    82166370484403199890008895243450658541227588666881<br>
    16427171479924442928230863465674813919123162824586<br>
    17866458359124566529476545682848912883142607690042<br>
    24219022671055626321111109370544217506941658960408<br>
    07198403850962455444362981230987879927244284909188<br>
    84580156166097919133875499200524063689912560717606<br>
    05886116467109405077541002256983155200055935729725<br>
    71636269561882670428252483600823257530420752963450<br></p>
    <p>Find the thirteen adjacent digits in the $1000$-digit number that have the greatest product. What is the value of this product?</p>
    */
    std::string largeDigitNumber{ "73167176531330624919225119674426574742355349194934"
        "96983520312774506326239578318016984801869478851843"
        "85861560789112949495459501737958331952853208805511"
        "12540698747158523863050715693290963295227443043557"
        "66896648950445244523161731856403098711121722383113"
        "62229893423380308135336276614282806444486645238749"
        "30358907296290491560440772390713810515859307960866"
        "70172427121883998797908792274921901699720888093776"
        "65727333001053367881220235421809751254540594752243"
        "52584907711670556013604839586446706324415722155397"
        "53697817977846174064955149290862569321978468622482"
        "83972241375657056057490261407972968652414535100474"
        "82166370484403199890008895243450658541227588666881"
        "16427171479924442928230863465674813919123162824586"
        "17866458359124566529476545682848912883142607690042"
        "24219022671055626321111109370544217506941658960408"
        "07198403850962455444362981230987879927244284909188"
        "84580156166097919133875499200524063689912560717606"
        "05886116467109405077541002256983155200055935729725"
        "71636269561882670428252483600823257530420752963450" };

    long long operator()(long long n) const;

    long long operator()() const;
};

class Problem0009 {
public:
    // Special Pythagorean Triplet
    /*
    <p>A Pythagorean triplet is a set of three natural numbers, $a \lt b \lt c$, for which,
    $$a^2 + b^2 = c^2.$$</p>
    <p>For example, $3^2 + 4^2 = 9 + 16 = 25 = 5^2$.</p>
    <p>There exists exactly one Pythagorean triplet for which $a + b + c = 1000$.<br>Find the product $abc$.</p>
    */
    long long operator()() const;
};


class Problem0010 {
public:
    // Summation of Primes
    /*
    <p>The sum of the primes below $10$ is $2 + 3 + 5 + 7 = 17$.</p>
    <p>Find the sum of all the primes below two million.</p>
    */
    long long operator()(long long n) const;

    long long operator()() const;
};

class Problem0011 {
public:
    // Largest Product in a Grid
    /*
    <p>In the $20 \times 20$ grid below, four numbers along a diagonal line have been marked in red.</p>
    <p class="monospace center">
    08 02 22 97 38 15 00 40 00 75 04 05 07 78 52 12 50 77 91 08<br>
    49 49 99 40 17 81 18 57 60 87 17 40 98 43 69 48 04 56 62 00<br>
    81 49 31 73 55 79 14 29 93 71 40 67 53 88 30 03 49 13 36 65<br>
    52 70 95 23 04 60 11 42 69 24 68 56 01 32 56 71 37 02 36 91<br>
    22 31 16 71 51 67 63 89 41 92 36 54 22 40 40 28 66 33 13 80<br>
    24 47 32 60 99 03 45 02 44 75 33 53 78 36 84 20 35 17 12 50<br>
    32 98 81 28 64 23 67 10 <span class="red"><b>26</b></span> 38 40 67 59 54 70 66 18 38 64 70<br>
    67 26 20 68 02 62 12 20 95 <span class="red"><b>63</b></span> 94 39 63 08 40 91 66 49 94 21<br>
    24 55 58 05 66 73 99 26 97 17 <span class="red"><b>78</b></span> 78 96 83 14 88 34 89 63 72<br>
    21 36 23 09 75 00 76 44 20 45 35 <span class="red"><b>14</b></span> 00 61 33 97 34 31 33 95<br>
    78 17 53 28 22 75 31 67 15 94 03 80 04 62 16 14 09 53 56 92<br>
    16 39 05 42 96 35 31 47 55 58 88 24 00 17 54 24 36 29 85 57<br>
    86 56 00 48 35 71 89 07 05 44 44 37 44 60 21 58 51 54 17 58<br>
    19 80 81 68 05 94 47 69 28 73 92 13 86 52 17 77 04 89 55 40<br>
    04 52 08 83 97 35 99 16 07 97 57 32 16 26 26 79 33 27 98 66<br>
    88 36 68 87 57 62 20 72 03 46 33 67 46 55 12 32 63 93 53 69<br>
    04 42 16 73 38 25 39 11 24 94 72 18 08 46 29 32 40 62 76 36<br>
    20 69 36 41 72 30 23 88 34 62 99 69 82 67 59 85 74 04 36 16<br>
    20 73 35 29 78 31 90 01 74 31 49 71 48 86 81 16 23 57 05 54<br>
    01 70 54 71 83 51 54 69 16 92 33 48 61 43 52 01 89 19 67 48<br></p>
    <p>The product of these numbers is $26 \times 63 \times 78 \times 14 = 1788696$.</p>
    <p>What is the greatest product of four adjacent numbers in the same direction (up, down, left, right, or diagonally) in the $20 \times 20$ grid?</p>
    */
  int grid[20][20]{{8, 2, 22, 97, 38, 15, 0, 40, 0, 75, 4, 5, 7, 78, 52, 12, 50, 77, 91, 8},
                   {49, 49, 99, 40, 17, 81, 18, 57, 60, 87, 17, 40, 98, 43, 69, 48, 4, 56, 62, 0},
                   {81, 49, 31, 73, 55, 79, 14, 29, 93, 71, 40, 67, 53, 88, 30, 3, 49, 13, 36, 65},
                   {52, 70, 95, 23, 4, 60, 11, 42, 69, 24, 68, 56, 1, 32, 56, 71, 37, 2, 36, 91},
                   {22, 31, 16, 71, 51, 67, 63, 89, 41, 92, 36, 54, 22, 40, 40, 28, 66, 33, 13, 80},
                   {24, 47, 32, 60, 99, 3, 45, 2, 44, 75, 33, 53, 78, 36, 84, 20, 35, 17, 12, 50},
                   {32, 98, 81, 28, 64, 23, 67, 10, 26, 38, 40, 67, 59, 54, 70, 66, 18, 38, 64, 70},
                   {67, 26, 20, 68, 2, 62, 12, 20, 95, 63, 94, 39, 63, 8, 40, 91, 66, 49, 94, 21},
                   {24, 55, 58, 5, 66, 73, 99, 26, 97, 17, 78, 78, 96, 83, 14, 88, 34, 89, 63, 72},
                   {21, 36, 23, 9, 75, 0, 76, 44, 20, 45, 35, 14, 0, 61, 33, 97, 34, 31, 33, 95},
                   {78, 17, 53, 28, 22, 75, 31, 67, 15, 94, 3, 80, 4, 62, 16, 14, 9, 53, 56, 92},
                   {16, 39, 5, 42, 96, 35, 31, 47, 55, 58, 88, 24, 0, 17, 54, 24, 36, 29, 85, 57},
                   {86, 56, 0, 48, 35, 71, 89, 7, 5, 44, 44, 37, 44, 60, 21, 58, 51, 54, 17, 58},
                   {19, 80, 81, 68, 5, 94, 47, 69, 28, 73, 92, 13, 86, 52, 17, 77, 4, 89, 55, 40},
                   {4, 52, 8, 83, 97, 35, 99, 16, 7, 97, 57, 32, 16, 26, 26, 79, 33, 27, 98, 66},
                   {88, 36, 68, 87, 57, 62, 20, 72, 3, 46, 33, 67, 46, 55, 12, 32, 63, 93, 53, 69},
                   {4, 42, 16, 73, 38, 25, 39, 11, 24, 94, 72, 18, 8, 46, 29, 32, 40, 62, 76, 36},
                   {20, 69, 36, 41, 72, 30, 23, 88, 34, 62, 99, 69, 82, 67, 59, 85, 74, 4, 36, 16},
                   {20, 73, 35, 29, 78, 31, 90, 1, 74, 31, 49, 71, 48, 86, 81, 16, 23, 57, 5, 54},
                   {1, 70, 54, 71, 83, 51, 54, 69, 16, 92, 33, 48, 61, 43, 52, 1, 89, 19, 67, 48}};

  long long operator()(long long n) const;

  long long operator()() const;
};

class Problem0012 {
public:
    // Highly Divisible Triangular Number
    /*
    <p>The sequence of triangle numbers is generated by adding the natural numbers. So the $7$<sup>th</sup> triangle number would be $1 + 2 + 3 + 4 + 5 + 6 + 7 = 28$. The first ten terms would be:
    $$1, 3, 6, 10, 15, 21, 28, 36, 45, 55, \dots$$</p>
    <p>Let us list the factors of the first seven triangle numbers:</p>
    \begin{align}
    \mathbf 1 &amp;\colon 1\\
    \mathbf 3 &amp;\colon 1,3\\
    \mathbf 6 &amp;\colon 1,2,3,6\\
    \mathbf{10} &amp;\colon 1,2,5,10\\
    \mathbf{15} &amp;\colon 1,3,5,15\\
    \mathbf{21} &amp;\colon 1,3,7,21\\
    \mathbf{28} &amp;\colon 1,2,4,7,14,28
    \end{align}
    <p>We can see that $28$ is the first triangle number to have over five divisors.</p>
    <p>What is the value of the first triangle number to have over five hundred divisors?</p>
    */
    long long operator()(long long divisor_count) const;
    long long operator()() const;
};

class Problem0013 {
public:
    // Large Sum
    /*
    Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.
    */
    std::vector<std::string> fifty_digit_numbers;

    long long operator()() const;
};