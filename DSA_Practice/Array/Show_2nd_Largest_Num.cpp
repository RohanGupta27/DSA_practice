#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector <int> number;

    while (true) {
        string input;
        cout << "Enter a number: ";
        getline(cin, input);
    
        if (input.empty()) 
            break;

        int x = stoi(input);
        
        number.push_back(x);
    }

    int n = number.size();
    sort(number.begin(), number.end());
    cout << "Sorted numbers: ";
    for (int i = 0; i < n; i++) {
        cout << number[i] << " ";
    }

    return 0;
}