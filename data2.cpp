#include <iostream>  //declaring variables
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;
string code(string& line);
int main()
{
    ofstream outf;
    ifstream myfile;
    string infile;
    string line;
    string outfile;

  //  cout << "Please enter an input file (A.txt) for Matrix A or (B.txt) for Matrix B" << endl;
    //cin >> infile;   //prompts user for input file

   // if (infile == "data.txt")
    //{      //read whats in it and write to screen
        myfile.open("data.txt");
        cout << endl;
        getline (myfile, line);
        cout << line << endl;
}
   // }
   /* else
        if (infile == "B.txt")
        {
            myfile.open("B.txt");
            cout << endl;
            getline (myfile, line);
            cout << line << endl;
        }
        else
    { 
        cout << "Unable to open file." << endl;
    }
        //{
            //while("Choose next operation");
        //}
    return 0;
}*/
