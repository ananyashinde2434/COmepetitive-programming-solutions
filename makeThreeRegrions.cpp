#include<iostream>
using namespace std;
void makeThreeRegions(int n, int ){

}
int main() {
    int n; // number of columns
    cout << "Enter the number of columns: ";
    cin >> n;

    int arr[2][100]; // 2 rows and n columns

    // Input the array elements
    cout << "Enter elements for 2x" << n << " array:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }
}