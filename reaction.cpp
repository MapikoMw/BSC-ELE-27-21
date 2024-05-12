#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //create and open a text file
    ofstream myfile;
    myfile.open("example.txt");

    if (myfile.is_open()){
        myfile<< "Hello My file . !" << endl; 
   //closing the file stream
       myfile.close();
        }
        else 
        cout << "ERROR...!!" << endl;

     
   return 0;
}