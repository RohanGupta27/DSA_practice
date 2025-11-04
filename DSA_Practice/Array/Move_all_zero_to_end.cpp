#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector <int> Num;
    
    while (true) {
        string input;
        cout << "Enter a number (or press Enter to finish): ";
        getline(cin, input);
    
        if (input.empty()) 
            break;

        int x = stoi(input);
        
        Num.push_back(x);
    }

    int nonZeroIndex = 0;

    int n = Num.size();
    for (int i = 0; i < n; i++) {
        if (Num[i] != 0) {
            swap(Num[i], Num[nonZeroIndex]);
            nonZeroIndex++;
        }
    }
    cout << "After moving all zeros to the end: ";
    for (int i = 0; i < n; i++) {
        cout << Num[i] << " ";
    }
    
    return 0;
}