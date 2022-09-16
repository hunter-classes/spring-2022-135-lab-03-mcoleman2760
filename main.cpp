#include "reservoir.h"
#include <climits>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string.h>

double get_east_storage(std::string date) {

  std::string Point_time;
  double AUGEVolume;

  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }
  std::string junk;   // new string variable
  getline(fin, junk); // read one line from the file

 while(fin >> Point_time >> AUGEVolume) {
    fin.ignore(INT_MAX, '\n'); //skips to the end of line,
            //ignorring the remaining columns

    if(date == Point_time) {
        return AUGEVolume;
}
   }
fin.close();
return 0;
  }
