#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // create the file variable
    fstream input;
    fstream output;

    // we try to open the files
    input.open("input.txt", ios::in);
    output.open("output.txt", ios::out);

    // we cheek if the file is open
    if (input.is_open() && output.is_open()) {
        // we ask the user for the name of the list
        cout << "insert list name:";

        string list_name;
        cin >> list_name;

        // we start writing in the file
        output << "//txt to java list\n";
        output << "//made by Hrodebert\n";
        output << "import java.util.List;\n";
        output << "List<String> " + list_name + " =  new ArrayList<>(); \n";
        string line;
        const string quote = "\"";
        while (getline(input,line))
        {
            output << list_name + ".add(" + quote + line + quote + "); \n";
        }
        input.close();
        output.close();
    }


    return 0;
}
