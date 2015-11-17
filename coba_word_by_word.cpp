#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void printString( const string & str ) { // ignore the & for now, you'll get to it later.
    cout << str << " : " << str.size() << endl;
}

int main() {
    ifstream fin("data.txt"); 

    if (!fin) {
       cout << "Could not open file" << endl;
       return 1;
    }

    string word; // You only need one word at a time.
    while( fin >> word ) {
       printString(word);
    }

    fin.close();
}
