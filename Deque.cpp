#include <iostream>
#include <deque>

using namespace std;

int main()
{
    /*Deque aka double-sided queue is a dynamic data structure. We can perform 'push' and 'pop' on both in front and back in deque*/
    deque<int> d = {0, 1, 2, 3, 4, 5};

    // push_back() ----------------------------------------------------------------------------------
    d.push_back(6); // Push new data/element in the back/end of the deque.
    d.push_back(7);
    // push_front() ---------------------------------------------------------------------------------
    d.push_front(-1); // Push new data/element in the front/begining of the deque.
    d.push_front(-2);
    cout << "d after push_back and push_front operation: ";
    for (auto &&i : d)
    {
        cout << i << " "; // you can also use normal loop
    }
    cout << endl;

    // pop_back() ------------------------------------------------------------------------------------
    d.pop_back(); // pop/remove element from the end, takes no parameter
    d.pop_back();
    // pop_front() -----------------------------------------------------------------------------------
    d.pop_front(); // pop/removes element from the front, takes no parameter
    d.pop_front();
    cout << "d after pop_back and pop_front operation: ";
    for (auto &&i : d)
    {
        cout << i << " "; // you can also use normal loop
    }
    cout << endl;

    // at() -----------------------------------------------------------------------------------------
    cout << "3rd elemenet in 2nd index: " << d.at(2) << endl;
    // Similar operation can be performed by using square brackets
    cout << "3rd elemenet in 2nd index: " << d[2] << endl;

    // front() --------------------------------------------------------------------------------------
    cout << "Element at the front: " << d.front() << endl; // returns the first element

    // back() ---------------------------------------------------------------------------------------
    cout << "Element at the back: " << d.back() << endl;

    // begin() and end() ----------------------------------------------------------------------------
    cout << "Traverse deque using iterators: ";
    for (auto i = d.begin(); i != d.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    /* Iterate through the vector using begin() and end() functions.
    begin() function is used to return an iterator pointing to the first element of the vector container and
    end() function is used to return an iterator pointing to the last element of the vector container.*/

    // clear(), as well as size() ------------------------------------------------------------------
    cout << "Size before clear operation: " << d.size() << endl;
    d.clear(); // Removes all the elements from the deque and the size of the deque is reduced to zero.
    cout << "Size after clear operation: " << d.size() << endl;

    for (int i = 0; i < 15; i++)
    {
        d.push_back(i); // reassigned the values.
    }

    // swap() ---------------------------------------------------------------------------------------
    deque<int> a = {1, 2, 3, 4, 5};
    deque<int> b = {6, 7, 8, 9, 10};
    a.swap(b); // Exchange elements between two deques.
    cout << "a after swap: ";
    for (auto &&i : a)
    {
        cout << i << " ";
    }
    cout << endl
         << "b after swap: ";
    for (auto &&i : b)
    {
        cout << i << " ";
    }
    cout << endl;

    // empty() ----------------------------------------------------------------------------------------
    d.empty() ? cout << "D is empty.\n" : cout << "D is not empty.\n"; // Returns a boolean value. 0 if not empty, 1 if empty.

    // erase() ----------------------------------------------------------------------------------------
    // erase(pos)
    d.erase(d.end()); // or (d.begin() + 3), Erases element from a certain position.
    cout << "After erasing last elementL: ";
    for (auto &&i : d)
    {
        cout << i << " ";
    }
    cout << "  -->Size: " << d.size() << endl;
    // erase(from here, upto here)
    d.erase(d.begin() + 10, d.end()); // Erases elements from a possition upto another position.
    cout << "After erasing element from 10th index upto last elementL: ";
    for (auto &&i : d)
    {
        cout << i << " ";
    }
    cout << "  -->Size: " << d.size() << endl;

    // insert() ---------------------------------------------------------------------------------------
    // insert(pos, value)
    d.insert(d.begin() + 3, 20); // Insert element after a certain position.
    cout << "After inserting 20 at 3rd index: ";
    for (auto &&i : d)
    {
        cout << i << " ";
    }
    cout << "  -->Size: " << d.size() << endl;
    // insert(pos, n_times, value)
    d.insert(d.begin() + 4, 4, 30); // Inserts value from a particular position n times.
    cout << "After inserting 30 starting from 4th position 4 times: ";
    for (auto &&i : d)
    {
        cout << i << " ";
    }
    cout << "  -->Size: " << d.size() << endl;
    // insert(pos, input_deques_start_iterator, input_deques_end_iterator)
    deque<int> demo = {11, 22, 33, 44, 55};
    d.insert(d.begin() + 8, demo.begin(), demo.end()); // Insert another deques element from a particular position.
                                                       // we can also insert vector, array, etc. with same operation.
                                                       // demo doesn't necessarily have to be an deque.
    cout << "After inserting 'demo' deque after 8th position: ";
    for (auto &&i : d)
    {
        cout << i << " ";
    }
    cout << "  -->Size: " << d.size() << endl;

    // assign() and shrink_to_fit() -----------------------------------------------------------------------
    deque<int> demo2;
    demo2.assign(d.begin() + 4, d.begin() + 10); // Assign values of a deque into another deque. t
                                                // This operation also can be used with deque-vector etc.
    cout << "demo2 after assigning values of d: ";
    for (auto &&i : demo2)
    {
        cout << i << " ";
    }
    cout << "  -->Size: " << d.size() << endl;
    demo2.shrink_to_fit(); // Reduse size of deque according to the number of elements. 
    cout << "Size of demo2 after shrinking to fit operation: " << demo2.size() << endl;

    /*------------------------------- Deque with fixed size -------------------------------*/
    /*--------------------------------------------------------------------------------------*/

    deque<int> d1(10, 1); // Here in d1(10, 1), 10 means the size of vector. And 1 means, to initialize the vector with 1.

    cout << "Sized deque is: ";
    for (int i : d1)
    {
        cout << i << " ";
    }
    cout << endl;


    // Resizing is similar to vector. Please check vector part.

    return 0;
}

// More on deque --> https://www.javatpoint.com/post/cpp-deque