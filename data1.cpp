#include <iostream>

#include<fstream>

using namespace std;

int main()

{

char str[1000];

fstream file(“data.txt”,ios::in); //membaca file

while(!file.eof())

{

file.getline(str,1000);

cout<<str;

}

file.close();

return 0;

}
