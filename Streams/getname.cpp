// NOTE: no .h extensions in C++ standard libraries
//
// iostream: contains basic io streaming operations (cin, cout, etc.)
#include <iostream>
// true string type
#include <string>
// convert strings to streams with stringstream
#include <sstream>
// write files easily as streams
#include <fstream>

namespace foo
{
    // std:: denotes the namespace of std
    // cout takes a string as a stream and prints it to stdout
    // endl is the stream form of an end-of-line character \n
    void print() { std::cout << "This is printing from foo." << std::endl; }
}

namespace bar
{
    void print() { std::cout << "This is printing from bar." << std::endl; }
}

int main()
{
    // specify that everything in the namespace std should 
    // become available in the local scope for convenience
    using namespace std;

    // first name and last name variable declarations
    char first_name[75];
    char last_name[75];

    // Ask for input from user as a string
    cout << "Enter your first name: ";
    // get entire line until a carriage return
    cin >> first_name;
    cout << "Enter your last name: ";
    // get entire line until a carriage return
    cin >> last_name;

    // show result of parsed input
    cout << "First name: \t" << first_name << endl;
    cout << "Last name : \t" << last_name << endl;

    // file handle
    ofstream output;
    // open a file
    output.open("output_file_name.txt");
    // write to file as a stream
    output << "This is the first line of the file." << endl;
    output << "First name: \t" << first_name << '\t';
    output << "Last name \t: " << last_name << endl;
    output.close();

    return 0;
}
