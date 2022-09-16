#include "reverseorder.h"
#include <climits>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string.h>
void reverse_oreder(std::string date1, std::string date2){
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }
 double min = 0;
 double max = 100;
  std::string junk;   // new string variable
  getline(fin, junk); // read one line from the file

  std::string date;
  double eastSt;
  double eastEl;
  double westSt;
  double westE;
  
 
  
 while(fin >> date >> eastSt >> eastEl >> westSt >> westE) {
    fin.ignore(INT_MAX, '\n'); //skips to the end of line,

   for (int i = INT_MAX ; i > 0 ; i--)
   return date;
   return westE;
   
{
    
    }
}
   }
