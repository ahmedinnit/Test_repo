#include <iostream>
using namespace std;

int main(){
    int rows = 0, cols = 0;
    cout << "Enter Rows: "; cin >> rows;
    cout << "Enter Columns: "; cin >> cols;

    for(int i = 0; i<rows; i++){
        for(int j = 0; j < i + 1; j++)
            cout << "*";
        cout << "\n";
    }
}