#include <iostream>
#include <array>

using namespace std;

int main()
{
    int regular_arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // Regular implimentation

    array<int, 5> a; // = {2, 3, 1, 4, 0}; // STL implimentation

    for (int i = 0; i < 5; i++) // Take user input like normal array.
    {
        cin >> a[i];
    }

    // size() -------------------------------------------------------------------------------
    int sz = a.size(); // Returns the size of the array.

    // a[] -------------------------------------------------------------------------------
    for (int i = 0; i < sz; i++) // Using a[i] operation. Complexity -> O(n).
    {
        cout << a[i] << " ";
    }
    cout << endl;
    // a.at() -------------------------------------------------------------------------------
    for (int i = 0; i < sz; i++) // Using a.at(i) operation. Complexity -> O(n).
    {
        cout << a.at(i) << " ";
    }
    cout << endl;

    // empty() -------------------------------------------------------------------------------
    cout << "Is my array empty? Ans: " << a.empty() << endl; /* Checking wheather my array is empty or full.
    Returns '0' (False/No) if full, returns '1' (True/Yes) if empty. */

    // front() -------------------------------------------------------------------------------
    cout << "First element: " << a.front() << endl; // Returns the 1st element of the array. Complexity -> O(1)

    // back() -------------------------------------------------------------------------------
    cout << "Last element: " << a.back() << endl; // Returns the last element of the array. Complexity -> O(1)

    // begin() -------------------------------------------------------------------------------
    cout << "Address of the 1st element: " << a.begin() << endl; /* Return the addreass of 1st element.
    Can be used to point to the 1st element. Equivalent to &arr[0]. */

    // end() -------------------------------------------------------------------------------
    cout << "Address of the last element: " << a.end() << endl; /* Return the addreass of last element.
    Can be used to point to the last element. Equivalent to &arr[n]. */
    /* begin() and end() operation be used like sort(a.begin(), a.end()); */

    return 0;
}
