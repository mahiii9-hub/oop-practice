#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
int id = 100;
string name = "aiman";
// writ file 

// create objrct of file
fstream file;
// open the file for writting mode
file.open("myFile.txt", ios::out|ios::app);
// write data in file 
file << id<<" "<<name<< "\n";
// close the file
file.close();


 // open file for reading mode
 file.open("myFile.txt", ios::in);
 if(file)
 {
 	//read file
 	file>>id>>name;
 	while(!file.eof())
 	{
 		cout<<"\n\n ID :"<< id<< "\tName :"<< name;
 		 	file>>id>>name;

	 }
	 // close the file
	 file.close();
 }
 else
 {
 	cout<<"\n\n file opening error :";
 }
getch();
return 0;
}





