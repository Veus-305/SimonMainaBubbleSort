#include <iostream>
#include <vector>

using namespace std;

// the function 
void bubbleSortAscending(vector<int>& numbers) {
    int n = numbers.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}


void printVector(const vector<int>& vec) {
    if (vec.empty()) {
        cout << "(empty)\n";
        return;
    }
    
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i < vec.size() - 1) {
            cout << "  ";
        }
    }
    cout << "\n";
}

int main() {
    vector<int> numbers;
    int howMany;

    cout << "How many numbers do you want to sort? ";
    cin >> howMany;

    if (howMany <= 0) {
        cout << "Nothing to sort.\n";
        return 0;
    }

    cout << "\nPlease enter " << howMany << " numbers:\n";

    numbers.resize(howMany);

    for (int i = 0; i < howMany; ++i) {
        cout << (i + 1) << ". ";
        cin >> numbers[i];
    }

    cout << "\nBefore sorting: ";
    printVector(numbers);

    // This is where we use the6 function
    bubbleSortAscending(numbers);

    cout << "After sorting (ascending): ";
    printVector(numbers);

    cout << "\nDone!\n";

    return 0;
}