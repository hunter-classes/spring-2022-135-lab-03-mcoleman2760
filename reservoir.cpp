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
//fin.close();
//return 0;
  }

double get_min_east(std::string date){


std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }
 double min = 0;
 double max = 100;
  std::string junk;   // new string variable
  getline(fin, junk); // read one line from the file

  std::string date1;
  double eastSt;
  double eastEl;
  double westSt;
  double westE;
 while(fin >> date1 >> eastSt >> eastEl >> westSt >> westE) {
    fin.ignore(INT_MAX, '\n'); //skips to the end of line,
            //ignorring the remaining columns

    if(eastSt == min) {
        return eastSt;
      }
   
   
}
   }



double get_max_east (std::string date){
 
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }
 double min = 100;
 double max = 0;
  std::string junk;   // new string variable
  getline(fin, junk); // read one line from the file
  std::string date1;
  double eastSt;
  double eastEl;
  double westSt;
  double westE;
 while(fin >> date1 >> eastSt >> eastEl >> westSt >> westE) {
    fin.ignore(INT_MAX, '\n'); //skips to the end of line,
            //ignorring the remaining columns

    if(eastSt > max) {
        return eastSt;
      }
   
}
   }


std::string compare_basins(std::string date){
 std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }
  std::string junk;   // new string variable
  getline(fin, junk);
  std::string east = "East";
  std::string west = "West";
  std::string equal = "Equal";
  std::string date1;
  double eastSt;
  double eastEl;
  double westSt;
  double westE;
 while(fin >> date1 >> eastSt >> eastEl >> westSt >> westE) {
    fin.ignore(INT_MAX, '\n'); 
  if (eastEl > westE){
    return east;
    }
  if (westE >  eastEl){
    return west;
    
  }
   if (westE == eastEl){
     return equal;
   }
   }
  fin.close();
return 0;
  }
