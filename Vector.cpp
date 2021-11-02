#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /*------------------------------- Vector without fixed size -------------------------------*/
    /*-----------------------------------------------------------------------------------------*/

    vector<int> v; // Initialize a vector. Vactor can be called as Dynamic array.

    // capacity() --------------------------------------------------------------------------------------------
    cout << "Capacity of the vector: " << v.capacity() << endl; // Returns the current capacity of the vector

    // size() ------------------------------------------------------------------------------------------------
    cout << "Size of the vector: " << v.size() << endl; // Returns the current size of the vector

    /*
    Info:
    The difference between size() and capacity() is,
    size() returns the amount of element the vector have, but
    capacity() returns the assigned space in the vector that can be used.
    */

    // push_back() ------------------------------------------------------------------------------------------
    v.push_back(1);                                                     // Insert element into the vector
    v.push_back(2);                                                     // Insert element into the vector
    v.push_back(3);                                                     // Insert element into the vector
    v.push_back(4);                                                     // Insert element into the vector
    v.push_back(5);                                                     // Insert element into the vector
    cout << "Current capacity of the vector: " << v.capacity() << endl; // Here the current capacity is 8, that means, the vector can contain 8 element now.
    cout << "Current size of the vector: " << v.size() << endl;         // Here the current size is 5, meaning that, the vector contain 5 elements.

    // at() -------------------------------------------------------------------------------------------------
    cout << "3rd element if the the vector at 2nd index: " << v.at(2) << endl; // at() returns a tergated element of a vector. Use index (similar to array indexing) to access the element.

    // front() ----------------------------------------------------------------------------------------------
    cout << "The first element of the vector: " << v.front() << endl; // Returns the 1st element of the vector.

    // back() -----------------------------------------------------------------------------------------------
    cout << "The last element of the vector: " << v.back() << endl; // Returns the last element of the vector.

    // begin() and end() ------------------------------------------------------------------------------------
    cout << "Traverse vector by iterator: ";
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    /* Iterate through the vector using begin() and end() functions.
    begin() function is used to return an iterator pointing to the first element of the vector container and
    end() function is used to return an iterator pointing to the last element of the vector container.*/

    // pop_back() -------------------------------------------------------------------------------------------
    cout << "Before pop operation: ";
    for (int i = 0; i < v.size(); i++) // We can use normal loop.
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.pop_back(); // pop_back() removes the last element of the vector. It takes no parameter.
                  // It doesnot decrease the capacity of the vector.
    cout << "After pop operation: ";
    for (auto &&i : v) // or (int i : v), We can use iterator to traverse through the vector.
    {
        cout << i << " ";
    }
    cout << endl;

    // clear() ---------------------------------------------------------------------------------------------
    cout << "Capacity before clear() operation: " << v.capacity() << endl; // Curent capacity is 8.
    cout << "Size before clear() operation: " << v.size() << endl;         // Current size is 4.
    v.clear();                                                             // Removes all the elements from the vector. It does not decrease the capacity of the vector. But size become zero (means no element in the container)
    cout << "Capacity After clear() operation: " << v.capacity() << endl;  // Curent capacity is 8.
    cout << "Size After clear() operation: " << v.size() << endl;          // Current size is 0.

    // swap( ) ---------------------------------------------------------------------------------------------
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {5, 6, 7, 8};
    a.swap(b); // swap() function exchanges the elements between two vectors. Means, a's elements will be b's and b's elements will be a's.
    cout << "a after swap: ";
    for (auto &&i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "b after swap: ";
    for (auto &&i : b)
    {
        cout << i << " ";
    }
    cout << endl;

    // empty() --------------------------------------------------------------------------------------------
    a.empty() ? cout << "Vector a is empty.\n" : cout << "Vector a is not empty.\n"; // empty() function checks whether the vector is empty or not.
    v.empty() ? cout << "Vector v is empty.\n" : cout << "Vector v is not empty.\n"; // it returns '1' if vector is empty and '0' if not empty.

    // erase() --------------------------------------------------------------------------------------------
    // erase(pos)
    v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    v.erase(v.begin() + 9); // erases a tergated element from the vector container.
    cout << "After erasing 10th (9th index) elemnent: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // erase(start_iterator, emd_iterator)
    v.erase(v.begin() + 7, v.end()); // or v.erase(v.begin() + 1, v.begin() + 4);
                                     // erase element from x-position to y-position.
    cout << "After erasing 8th - 9th (7th - 8th index) elemnent: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // insert() -------------------------------------------------------------------------------------------
    // insert(iterator,val)
    v.insert(v.begin() + 3, 100); // Insert 100 after 3rd element.
    cout << "After inserting 100 after 3rd element: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // insert(iterator,n,val)
    v.insert(v.begin() + 1, 3, 200); // insert 200, three(3) time after the 1st element;
    cout << "After inserting 200 after 1st element 3 time: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // insert(iterator,InputIterator first,InputIterator last)
    v.insert(v.begin() + 1, a.begin(), a.end()); // Inserts a's element after the v's 1st element
    cout << "After inserting a's elements after 1st element: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // shrink_to_fit()---------------------------------------------------------------------------------
    cout << "V's current capacity: " << v.capacity() << endl;                        // which is 16
    cout << "V's current size: " << v.size() << endl;                                // which is 15
    v.shrink_to_fit();                                                               // Changes the capacity of the vector and makes it equal to the size of the vector.
    cout << "V's current capacity after shrinking to fit: " << v.capacity() << endl; // which is 15 now
    cout << "V's current size after shrinking to fit: " << v.size() << endl;         // which is 15

    // assign() ----------------------------------------------------------------------------------------
    vector<int> v2;
    v2.assign(v.begin() + 5, v.end() - 5); // Assigns value of a vector to another vector
    cout << "v2 after assigning values of v: ";
    for (int i : v2)
    {
        cout << i << " ";
    }
    cout << endl;
    // Similar operation can be done like this if we need to copy one vector's all elements to another vector.
    vector<int> v3(v);
    cout << "V3 after copying v's element into it: ";
    for (int i : v3)
    {
        cout << i << " ";
    }
    cout << endl;

    /*------------------------------- Vector with fixed size -------------------------------*/
    /*--------------------------------------------------------------------------------------*/

    vector<int> v1(10, 1); // Here in v1(10, 1), 10 means the size of vector. And 1 means, to initialize the vector with 1.

    cout << "Sized vector is: ";
    for (int i : v1)
    {
        cout << i << " ";
    }
    cout << endl;

    // resize()------------------------------------------------------------------------------------
    // resize(new_size)
    v1.resize(15); // Increase the size of the vector and the new size is initialized with 0.
                   // If you push_back any element now, it will start from 16th position, position 11-15 will be unchanged.
                   // to modify in position 11-15, we need to assign value like we normally do, as example, v1[11] = 10.
    cout << "Size of v1 after resizing to 15: " << v1.size() << endl;
    cout << "Resized vector is: ";
    for (int i : v1)
    {
        cout << i << " ";
    }
    cout << endl;
    // resize(new_size, initializing_value)
    v1.resize(20, 100); // Increase the size of the vector and the new size is initialized with 100.
    cout << "Size of v1 after resizing to 20: " << v1.size() << endl;
    cout << "Resized vector is: ";
    for (int i : v1)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

// More on vector -> https://www.javatpoint.com/cpp-vector