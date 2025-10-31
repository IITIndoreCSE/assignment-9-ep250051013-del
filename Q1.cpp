
#include <iostream>
using namespace std;

// Define structure named 'Item'
struct Item {
    int id;
    float cost;
};

int main() {
    // Declare an array of 6 'Item' structures
    Item items[6];

    // Initialize first four elements with sample data
    items[0] = {101, 45.50};
    items[1] = {102, 78.90};
    items[2] = {103, 60.25};
    items[3] = {104, 35.00};

    // Remaining elements can be left uninitialized or set to default values
    items[4] = {105, 0.0};
    items[5] = {106, 0.0};

    cout << "Items with cost greater than 50.00:\n";
    cout << "----------------------------------\n";

    // Use a 'for' loop to display items whose cost > 50.00
    for (int i = 0; i < 6; i++) {
        if (items[i].cost > 50.00) {
            cout << "Item ID: " << items[i].id 
                 << ", Cost: " << items[i].cost << endl;
        }
    }

    return 0;
}
