#include <iostream>
#include <map>

using namespace std;

int main()
{
    /*
    *Notes on map:-
     1) Contains a key and a data
     2) Map automatically sort the data
    */

    map<string, int> marks_map;

    marks_map["Pritom"] = 98; // Assign value to the map
    marks_map["Akhi"] = 80;
    marks_map["Arafat"] = 79;

    //* insert(), is used to insert data
    marks_map.insert({{"Mamun", 50}, {"Maruf", 60}, {"Joynul", 70}}); // Use .insert() method to insert value to the container

    // *Iterator*
    map<string, int>::iterator it; // Use  iterator to iterate through the map
    for (it = marks_map.begin(); it != marks_map.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << '\n';
    }

    //* Size(), returns the current size of the map container.
    cout << "Size of the map container: " << marks_map.size() << '\n';
    //* max_size(), returns the maximum size of the map container, the amount of data it can hold.
    cout << "Maximum size of the map container: " << marks_map.max_size() << '\n';
    //* empty(), returns 0 if the container is not empty and 1 if the container is full.
    cout << "Is the container empty? " << marks_map.empty() << '\n';

    

    return 0;
}