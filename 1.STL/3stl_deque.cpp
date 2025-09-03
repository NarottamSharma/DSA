#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> deque_1;

   /*What is a Deque? 🤔
A deque is like a flexible array that can efficiently grow and shrink from both ends. Think of it as a deck of cards where you can easily add or remove cards from the top OR bottom.*/

    // Insert elements at both ends
    deque_1.push_back(5);     // {5}
    deque_1.emplace_back(7);  // {5, 7}
    deque_1.push_front(3);    // {3, 5, 7}
    deque_1.emplace_front(1); // {1, 3, 5, 7}

    // At this point, deque_1 = {1, 3, 5, 7}

    // Removing elements
    deque_1.pop_back();  // Removes last element (7), now {1, 3, 5}
    deque_1.pop_front(); // Removes first element (1), now {3, 5}

    // Access elements
    cout << "Back: " << deque_1.back() << endl;  // Output: 5
    cout << "Front: " << deque_1.front() << endl; // Output: 3
    cout << "Second element: " << deque_1[1] << endl; // Output: 5

    // Iterating over deque
    cout << "Deque elements: ";
    for (int num : deque_1) {
        cout << num << " ";
    }
    cout << endl;

    // Check size and empty status
    cout << "Size of deque: " << deque_1.size() << endl; // Output: 2
    cout << "Is deque empty? " << (deque_1.empty() ? "Yes" : "No") << endl;

    // Clearing the deque
    deque_1.clear();
    cout << "Deque cleared. Is empty now? " << (deque_1.empty() ? "Yes" : "No") << endl;

    /*Fast Insertions/Deletions at Both Ends 🏎️

       push_front(), push_back(), pop_front(), pop_back().

     Supports Random Access 🎯

      Use deque[i] just like a vector.

Useful Methods 🛠️

    front(), back(), size(), clear(), empty(), erase(), insert().

     Better than vector for frequent front-end operations

    But worse than list for inserting in the middle.*/

    return 0;
}

