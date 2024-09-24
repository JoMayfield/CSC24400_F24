// The following two lines and the last line
//    of this file are new!
// They are needed when we define a header file.
#ifndef _COORDINATE_HPP // If it's not defined
#define _COORDINATE_HPP // Define it

// General syntax: class ClassName
class Coordinate
{ 
    // Specify the access (e.g. public or private)
    //    for a whole section at a time
    public:
        // INSTANCE ATTRIBUTES (usually private)
        int x;
        int y;

        // METHOD DECLARATIONS
        // Default constructor
        Coordinate() {}
        // Parameterized constructor
        //    This is defined "in-line"
        Coordinate(int a, int b) {x = a; y = b;}

        // Class method to print (x, y)
        void printCoordMethod();

        // Operator overloading
        Coordinate operator+(Coordinate p2);
}; // <-- NOTICE THE SEMI-COLON


#endif // End the definition