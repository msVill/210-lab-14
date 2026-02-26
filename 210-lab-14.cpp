// Color class: 3 private integer variables: Red, Green, and Blue.
// Member Functions/Methods: getters, setters, and a print function.
// In main(): Create several Color class objects.
// Populate them with data and output that data. (Formatted and Neat)
// Comsc 210 | Lab 14 | Martha Stephanie Villalta.


#include <iostream>
using namespace std;

class Color {
    int red, green, blue; // three private members
    // Since a class's default access specifier is private, then no need to declare it.
    public: //have to declare public members to be able to access from a default private class.
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

    //create several Color class objects:
    Color c1, c2, c3;
    c1.setRed(255); c1.setGreen(0); c1.setBlue(0);
    c2.setRed(0); c2.setGreen(255); c2.setBlue(0);
    c3.setRed(0); c3.setGreen(0); c3.setBlue(255);

    //Output the data from the Color objects:
    c1.print();
    c2.print();
    c3.print();

    return 0;
}