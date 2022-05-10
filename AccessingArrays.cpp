/*
Accessing Arrays
Pawelski
5/10/2022
Please follow the instructions on the activity guide!
*/

#include <iostream>

/// <summary>
/// Prints the elements within the array in the following format:
/// index : element
/// index : element
/// ...
/// </summary>
/// <param name="arr">Array to display.</param>
/// <param name="length">Length of the array.</param>
void Print(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << i << " : " << arr[i] << "\n";
    }
    std::cout << "\n";
}

int main()
{
    const int LENGTH = 5;
    int some_numbers_1[LENGTH] = { 1, 2, 3, 4, 5 };
    int replacement = 6;
    some_numbers_1[0] = replacement;
    some_numbers_1[1] += replacement;
    some_numbers_1[2] = some_numbers_1[0] + some_numbers_1[1];
    some_numbers_1[replacement - 3] = -2;
    Print(some_numbers_1, LENGTH);
    return 0;
}
