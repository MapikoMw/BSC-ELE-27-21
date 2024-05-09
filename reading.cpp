#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //create and open a text file
    ifstream myfile;
    string line;
    myfile.open("example.txt");

    if (myfile.is_open()){
        while(getline(myfile, line)){
            cout<< line << "\n";
        }
      // cout<< "Hello My file . !" << endl; 
   //closing the file stream
       myfile.close();
        }
        else 
        cout << "ERROR...!!" << endl;

     
   return 0;
}