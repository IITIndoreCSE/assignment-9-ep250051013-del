#include <iostream>
#include <string>
using namespace std;

// Define structure named 'SalesRecord'
struct SalesRecord {
    string month;
    float amount;
};

int main() {
    // Declare an array of 12 'SalesRecord' structures
    SalesRecord sales[12];

    // Input sales data for each month
    cout << "Enter the month name and sales amount for each of the 12 months:\n";
    for (int i = 0; i < 12; i++) {
        cout << "\nMonth " << i + 1 << ":\n";
        cout << "  Month name: ";
        cin >> sales[i].month;
        cout << "  Sales amount: ";
        cin >> sales[i].amount;
    }

    // Initialize max and min trackers
    float maxAmount = sales[0].amount;
    float minAmount = sales[0].amount;
    string maxMonth = sales[0].month;
    string minMonth = sales[0].month;

    // Single pass to find month with max and min sales
    for (int i = 1; i < 12; i++) {
        if (sales[i].amount > maxAmount) {
            maxAmount = sales[i].amount;
            maxMonth = sales[i].month;
        }
        if (sales[i].amount < minAmount) {
            minAmount = sales[i].amount;
            minMonth = sales[i].month;
        }
    }

    // Display results
    cout << "\n-------------------------------------------\n";
    cout << "Month with Maximum Sales: " << maxMonth 
         << " (" << maxAmount << ")\n";
    cout << "Month with Minimum Sales: " << minMonth 
         << " (" << minAmount << ")\n";
    cout << "-------------------------------------------\n";

    return 0;
}

