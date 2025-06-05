#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 12 || age > 65) {
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl;  
    }

    return 0;
}
