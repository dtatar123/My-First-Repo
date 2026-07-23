#include <iostream>
#include <fstream>
using namespace std;

/*
==============================================
  C++ PRACTICE FILE — Intermediate Beginner
==============================================
  Complete each task below.
  Do NOT modify anything outside the TODOs.
  Test each task individually in main().
==============================================
*/

// -------------------------------------------------------
// TASK 1: FizzBuzz with a twist
// -------------------------------------------------------
// Write a function that takes an integer n and prints
// numbers from 1 to n with these rules:
//   - divisible by 3: print "Fizz"
//   - divisible by 5: print "Buzz"
//   - divisible by both: print "FizzBuzz"
//   - divisible by 7: print the number squared
//   - otherwise: print the number
//
// Expected output for n = 15:
// 1 2 Fizz 4 Buzz Fizz 49 8 Fizz Buzz 11 Fizz 13 169 FizzBuzz

void fizzBuzz(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "fizzBuzz";
        }
        else if (i % 5 == 0)
        {
            cout << "buzz";
        }
        else if (i % 3 == 0)
        {
            cout << "fizz";
        }
        else if (i % 7 == 0)
        {
            cout << i * i;
        }
        else
        {
            cout << i;
        }
    }
}
// -------------------------------------------------------
// TASK 2: Array reversal
// -------------------------------------------------------
// Write a function that reverses an array IN PLACE.
// No second array allowed — swap elements using
// a temporary variable.
//
// Example:
// before: 10 20 30 40 50
// after:  50 40 30 20 10

void reverseArray(int arr[], int size)
{
    // TODO
}

// -------------------------------------------------------
// TASK 3: 2D array row sum
// -------------------------------------------------------
// Given a 4x4 grid of integers, write a function that
// returns the sum of a specific row.
// Then in main, find and print which row has the highest sum.
//
// Grid:
// { 3,  8,  1,  4}
// {12,  5,  9,  2}
// { 7, 11,  6, 10}
// {15,  0, 13, 14}
//
// Expected output:
// Row 0 sum: 16
// Row 1 sum: 28
// Row 2 sum: 34
// Row 3 sum: 42
// Highest sum: row 3 with 42

int rowSum(int arr[][4], int row)
{
    // TODO
}

// -------------------------------------------------------
// TASK 4: File word counter
// -------------------------------------------------------
// Create a file called "input.txt" with at least 3 lines
// of text (any text you want).
// Write a function that opens the file, counts the total
// number of words, and returns the count.
// A word is anything separated by whitespace.
//
// Hint: read word by word using:
//   string word;
//   while (inputFile >> word) { ... }

int countWords(string filename)
{
    // TODO
}

// -------------------------------------------------------
// TASK 5: Number inspector (pass by reference)
// -------------------------------------------------------
// Write a function that takes an integer and fills in
// three values BY REFERENCE:
//   - whether it is even or odd (bool isEven)
//   - its absolute value (int absVal)
//   - its digit count (int digits)
//      e.g. 1234 has 4 digits, -56 has 2 digits, 0 has 1 digit
//
// Do NOT use any math libraries.

void inspectNumber(int n, bool &isEven, int &absVal, int &digits)
{
    // TODO
}

// -------------------------------------------------------
// TASK 6: 2D board — diagonal sum
// -------------------------------------------------------
// Given a 4x4 grid, write TWO functions:
//   - mainDiagonalSum: returns sum of top-left to bottom-right
//   - antiDiagonalSum: returns sum of top-right to bottom-left
//
// Grid:
// { 1,  2,  3,  4}
// { 5,  6,  7,  8}
// { 9, 10, 11, 12}
// {13, 14, 15, 16}
//
// Expected:
// Main diagonal sum: 34   (1 + 6 + 11 + 16)
// Anti diagonal sum: 34   (4 + 7 + 10 + 13)

int mainDiagonalSum(int arr[][4])
{
    // TODO
}

int antiDiagonalSum(int arr[][4])
{
    // TODO
}

// -------------------------------------------------------
// TASK 7: Running statistics
// -------------------------------------------------------
// Ask the user to enter numbers one at a time.
// Stop when they enter -1.
// After stopping, print:
//   - count of numbers entered (not counting -1)
//   - sum
//   - average
//   - highest number
//   - lowest number
//
// Handle the edge case where the user enters -1 immediately
// (print "No numbers entered." and exit cleanly).

void runningStats()
{
    // TODO
}

// -------------------------------------------------------
// main — uncomment each task as you complete it
// -------------------------------------------------------

int main()
{

    //--- Task 1 ---
    cout << "--- Task 1: FizzBuzz ---" << endl;
    fizzBuzz(15);

    // --- Task 2 ---
    // cout << "\n--- Task 2: Array reversal ---" << endl;
    // int arr[] = {10, 20, 30, 40, 50};
    // reverseArray(arr, 5);
    // for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    // cout << endl;

    // --- Task 3 ---
    // cout << "\n--- Task 3: Row sums ---" << endl;
    // int grid[4][4] = {
    //     { 3,  8,  1,  4},
    //     {12,  5,  9,  2},
    //     { 7, 11,  6, 10},
    //     {15,  0, 13, 14}
    // };
    // int highest = 0, highestRow = 0;
    // for (int i = 0; i < 4; i++) {
    //     int sum = rowSum(grid, i);
    //     cout << "Row " << i << " sum: " << sum << endl;
    //     if (sum > highest) { highest = sum; highestRow = i; }
    // }
    // cout << "Highest sum: row " << highestRow << " with " << highest << endl;

    // --- Task 4 ---
    // cout << "\n--- Task 4: Word counter ---" << endl;
    // cout << "Word count: " << countWords("input.txt") << endl;

    // --- Task 5 ---
    // cout << "\n--- Task 5: Number inspector ---" << endl;
    // bool isEven; int absVal, digits;
    // inspectNumber(-3456, isEven, absVal, digits);
    // cout << "Even: " << (isEven ? "Yes" : "No") << endl;
    // cout << "Absolute value: " << absVal << endl;
    // cout << "Digits: " << digits << endl;

    // --- Task 6 ---
    // cout << "\n--- Task 6: Diagonal sums ---" << endl;
    // int board[4][4] = {
    //     { 1,  2,  3,  4},
    //     { 5,  6,  7,  8},
    //     { 9, 10, 11, 12},
    //     {13, 14, 15, 16}
    // };
    // cout << "Main diagonal sum: " << mainDiagonalSum(board) << endl;
    // cout << "Anti diagonal sum: " << antiDiagonalSum(board) << endl;

    // --- Task 7 ---
    // cout << "\n--- Task 7: Running stats ---" << endl;
    // runningStats();

    return 0;
}