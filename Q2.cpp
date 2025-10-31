#include <iostream>
using namespace std;

// Define structure named 'Color'
struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    // Declare and initialize an array of 5 'Color' structures with sample RGB values
    Color colors[5] = {
        {120, 200, 150},
        {45, 60, 255},
        {0, 128, 64},
        {255, 255, 0},
        {10, 20, 30}
    };

    // Invert color values for the first 3 elements (R, G, B = 255 - original)
    for (int i = 0; i < 3; i++) {
        colors[i].red   = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue  = 255 - colors[i].blue;
    }

    // Display new RGB values for all 5 elements
    cout << "New RGB values after inversion (first 3 elements inverted):\n";
    cout << "-----------------------------------------------------------\n";

    for (int i = 0; i < 5; i++) {
        cout << "Color " << i + 1 << " -> "
             << "R: " << colors[i].red << ", "
             << "G: " << colors[i].green << ", "
             << "B: " << colors[i].blue << endl;
    }

    return 0;
}
