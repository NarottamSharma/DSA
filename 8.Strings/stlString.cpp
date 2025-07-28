#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // ============ STRING DECLARATION ============
    string s1 = "Hello";
    string s2("World");
    string s3(5, 'A');  // "AAAAA"
    string s4 = s1;     // Copy constructor
    cout << "s1: " << s1 << ", s2: " << s2 << ", s3: " << s3 << ", s4: " << s4 << endl;
    
    // ============ STRING INPUT/OUTPUT ============
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "You entered: " << input << endl;
    
    // ============ STRING LENGTH/SIZE ============
    cout << "Length of s1: " << s1.length() << endl;
    cout << "Size of s1: " << s1.size() << endl;
    cout << "Max size: " << s1.max_size() << endl;
    cout << "Capacity: " << s1.capacity() << endl;
    cout << "Is empty: " << s1.empty() << endl;
    
    // ============ STRING ACCESS ============
    cout << "First character: " << s1[0] << endl;
    cout << "Last character: " << s1.back() << endl;
    cout << "Character at index 1: " << s1.at(1) << endl;
    cout << "Front character: " << s1.front() << endl;
    
    // ============ STRING MODIFICATION ============
    string str = "Programming";
    
    // Append
    str.append(" is fun");
    cout << "After append: " << str << endl;
    
    // Push back
    str.push_back('!');
    cout << "After push_back: " << str << endl;
    
    // Insert
    str.insert(0, "C++ ");
    cout << "After insert: " << str << endl;
    
    // Erase
    str.erase(0, 4);  // Remove "C++ "
    cout << "After erase: " << str << endl;
    
    // Replace
    str.replace(0, 11, "Coding");
    cout << "After replace: " << str << endl;
    
    // Clear
    string temp = str;
    temp.clear();
    cout << "After clear: '" << temp << "' (empty)" << endl;
    
    // ============ STRING SEARCHING ============
    string text = "Hello World Programming";
    
    // Find
    size_t pos = text.find("World");
    cout << "Position of 'World': " << pos << endl;
    
    // Find from position
    pos = text.find("o", 5);
    cout << "Position of 'o' after index 5: " << pos << endl;
    
    // Find last occurrence
    pos = text.rfind("o");
    cout << "Last position of 'o': " << pos << endl;
    
    // Find first of any character
    pos = text.find_first_of("aeiou");
    cout << "First vowel at position: " << pos << endl;
    
    // Find first not of
    pos = text.find_first_not_of("Hello ");
    cout << "First char not in 'Hello ' at: " << pos << endl;
    
    // ============ STRING COMPARISON ============
    string a = "apple", b = "banana", c = "apple";
    cout << "a == c: " << (a == c) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a.compare(b): " << a.compare(b) << endl;
    
    // ============ SUBSTRING ============
    string original = "Hello World";
    string sub1 = original.substr(6);     // From index 6 to end
    string sub2 = original.substr(0, 5);  // From index 0, length 5
    cout << "Substring from 6: " << sub1 << endl;
    cout << "Substring (0,5): " << sub2 << endl;
    
    // ============ STRING ALGORITHMS ============
    string toReverse = "reverse";
    reverse(toReverse.begin(), toReverse.end());
    cout << "Reversed: " << toReverse << endl;
    
    string toSort = "programming";
    sort(toSort.begin(), toSort.end());
    cout << "Sorted: " << toSort << endl;
    
    // ============ STRING CONVERSION ============
    // String to number
    string numStr = "123";
    int num = stoi(numStr);
    cout << "String to int: " << num << endl;
    
    string floatStr = "3.14";
    float f = stof(floatStr);
    cout << "String to float: " << f << endl;
    
    // Number to string
    int number = 456;
    string numberStr = to_string(number);
    cout << "Int to string: " << numberStr << endl;
    
    // ============ CHARACTER OPERATIONS ============
    string testStr = "Hello123!";
    for(char ch : testStr) {
        cout << ch << " -> ";
        cout << "Alpha: " << isalpha(ch) << " ";
        cout << "Digit: " << isdigit(ch) << " ";
        cout << "Alnum: " << isalnum(ch) << " ";
        cout << "Lower: " << islower(ch) << " ";
        cout << "Upper: " << isupper(ch) << endl;
    }
    
    // Case conversion
    string mixedCase = "Hello World";
    transform(mixedCase.begin(), mixedCase.end(), mixedCase.begin(), ::tolower);
    cout << "Lowercase: " << mixedCase << endl;
    
    transform(mixedCase.begin(), mixedCase.end(), mixedCase.begin(), ::toupper);
    cout << "Uppercase: " << mixedCase << endl;
    
    // ============ STRING ITERATORS ============
    string iterStr = "ABCDE";
    cout << "Forward iteration: ";
    for(auto it = iterStr.begin(); it != iterStr.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Reverse iteration: ";
    for(auto it = iterStr.rbegin(); it != iterStr.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    // ============ USEFUL STRING FUNCTIONS ============
    
    // Check if string is palindrome
    auto isPalindrome = [](string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        return s == rev;
    };
    cout << "Is 'racecar' palindrome? " << isPalindrome("racecar") << endl;
    
    // Count occurrences of character
    auto countChar = [](string s, char ch) {
        return count(s.begin(), s.end(), ch);
    };
    cout << "Count of 'l' in 'hello': " << countChar("hello", 'l') << endl;
    
    // Remove spaces
    string withSpaces = "H e l l o";
    withSpaces.erase(remove(withSpaces.begin(), withSpaces.end(), ' '), withSpaces.end());
    cout << "After removing spaces: " << withSpaces << endl;
    
    return 0;
}