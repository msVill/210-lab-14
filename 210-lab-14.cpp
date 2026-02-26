// Color class: 3 private integer variables: Red, Green, and Blue.
// Member Functions/Methods: getters, setters, and a print function.
// In main(): Create several Color class objects.
// Populate them with data and output that data.
// Comsc 210 | Lab 14 | Martha Stephanie Villalta.


#include <iostream>
using namespace std;

class Color {
    int red, green, blue;

    public:
    // the getter methods:
    int getRed() { return red; }
    int getGreen() { return green; }
    int getBlue() { return blue; }

    // the setter methods:
    void setRed(int r) { red = r; }
    void setGreen(int g) { green = g; }
    void setBlue(int b) { blue = b; }

    // the class member print method:
    void print() {
        cout << "RGB(" << red << ", " << green << ", " << blue << ")" << endl;
    }
};

int main() {

    return 0;
}