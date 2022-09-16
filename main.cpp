#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string.h>
#include "reservoir.h"

int main() {
  std::cout << "Enter date: 01/04/2018\n";
  std::string date = "05/20/2018";
  std::cout << "East basin storage: " << get_east_storage(date) << " billion gallons \n";
}
