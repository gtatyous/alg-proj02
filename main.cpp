#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
#include <sstream>

using namespace std;

int main () 
{
    string key_str;
    int key_int;
    string fileName;

    cout << "Enter the input file name: ";
    cin >> fileName;
    ifstream infile(fileName);
    assert(infile.is_open());

    while (infile >> key_str)
    {
        istringstream convert(key_str);
        convert>>key_int;
        cout << key_int << endl;
    }  
    
    infile.close();
    return 1;

}
