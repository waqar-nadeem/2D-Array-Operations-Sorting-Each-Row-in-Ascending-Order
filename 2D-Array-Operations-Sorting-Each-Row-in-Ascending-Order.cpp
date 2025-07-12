#include <iostream>
using namespace std;

void sortRow(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[100][100];

    cout << "Enter elements of the " << rows << "x" << cols << " array:" << endl;
    for (int i = 0; i < rows; ++i) {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        sortRow(arr[i], cols);
    }

    cout << "\nArray after sorting each row in ascending order:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}
