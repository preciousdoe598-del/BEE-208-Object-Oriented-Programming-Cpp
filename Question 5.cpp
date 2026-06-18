#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    
    if(isalpha(ch) && isupper(ch))
        cout << "Uppercase letter" << endl;
    else
        cout << "Not uppercase letter" << endl;
    return 0;
}
