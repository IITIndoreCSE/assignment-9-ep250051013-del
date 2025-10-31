#include <iostream>
using namespace std;

// Define structure named 'Point'
struct Point {
    float x;
    float y;
};

int main() {
    // Declare an array of 7 'Point' structures
    Point points[7];

    // Read x and y coordinates from user input
    cout << "Enter coordinates (x and y) for 7 points:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Point " << i + 1 << ":\n";
        cout << "  x = ";
        cin >> points[i].x;
        cout << "  y = ";
        cin >> points[i].y;
    }

    // Count how many points lie in the first quadrant (x > 0 and y > 0)
    int countFirstQuadrant = 0;
    for (int i = 0; i < 7; i++) {
        if (points[i].x > 0 && points[i].y > 0) {
            countFirstQuadrant++;
        }
    }

    // Display the result
    cout << "\nNumber of points in the first quadrant: " 
         << countFirstQuadrant << endl;

    return 0;
}

