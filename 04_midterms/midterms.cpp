#include <iostream>

using namespace std;

int main() {
    const int num_sales = 5;
    float sales[num_sales], total = 0, average;

    for (int i = 1; i <= num_sales; i++) {
        cout << "Enter sale " << (i + 1) << ": ";
        cin >> sales[i];
        total += sales[i];
    }

    average = total / num_sales;
    cout << "Average sale: " << average << endl;

    cout << "Below average:" << endl;
    for (int i = 1; i <= num_sales; i++) {
        if (sales[i] < average) {
            cout << sales[i] << endl;
        }
    }

    return 0;
}
