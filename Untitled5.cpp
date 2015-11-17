#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main () 
{
  int arraysize = 100000;
  char myArray[arraysize];
  char current_char;
  string kata;
  int num_characters =0;
  int i = 0;
  	string baca;
	string baris;
	ifstream data;

  ifstream mydata ("data.txt");

     if (mydata.is_open())
        {
          while ( !mydata.eof())
          {
            	getline(data, baris);
				baca += baris+"\n";
			    mydata >> myArray[i];
                i++;
                num_characters++;
          }      

 for (int i = 0; i <= num_characters; i++)
      {

         cout << myArray[i];
         cout << "\n";
         
      } 

      system("pause");
    }
}
