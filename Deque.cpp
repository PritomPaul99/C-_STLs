#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d = {0, 1, 2, 3, 4, 5};

    d.push_back(6);   // Push new data/element in the back/end of the deque.
    d.push_front(-1); // Push new data/element in the front/begining of the deque.
    d.pop_back();     // pop/remove element from the end, takes no parameter
    d.pop_front();    // pop/removes element from the front, takes no parameter
    cout << "3rd elemenet in 2nd index: " << d.at(2) << endl;
    cout << "3rd elemenet in 2nd index: " << d[2] << endl;
    cout << "Element at the front: " << d.front() << endl; // returns the first element
    cout << "Element at the back: " << d.back() << endl;
    cout << "Traverse deque using iterators: ";
    for (auto i = d.begin(); i != d.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    d.clear(); // Removes all the elements from the deque and the size of the deque is reduced to zero.
    cout << "Size after clear operation: " << d.size() << endl;
    deque<int> a = {1, 2, 3, 4, 5}, b = {6, 7, 8, 9, 10};
    a.swap(b); // Exchange elements between two deques.
    d.empty() ? cout << "D is empty.\n" : cout << "D is not empty.\n"; // Returns a boolean value. 0 if not empty, 1 if empty.
    d.erase(d.end()); // or (d.begin() + 3), Erases element from a certain position.
    d.erase(d.begin() + 10, d.end()); // Erases elements from a possition upto another position.
    d.insert(d.begin() + 3, 20); // Insert element after a certain position.
    d.insert(d.begin() + 4, 4, 30); // Inserts value from a particular position n times. insert(pos, n_times, value)
    // insert(pos, input_deques_start_iterator, input_deques_end_iterator)
    deque<int> demo = {11, 22, 33, 44, 55};
    d.insert(d.begin() + 8, demo.begin(), demo.end());
    deque<int> demo2;
    demo2.assign(d.begin() + 4, d.begin() + 10); // Assign values of a deque into another deque. t
    demo2.shrink_to_fit(); // Reduse size of deque according to the number of elements.
    deque<int> d1(10, 1); // Here in d1(10, 1), 10 means the size of vector. And 1 means, to initialize the vector with 1.
    return 0;
}
