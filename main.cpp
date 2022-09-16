#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string.h>
#include "reservoir.h"

int main() {
  std::cout << "Enter date: 04/30/2018\n";
  std::string date = "04/30/2018";
  std::cout << "East basin storage: " << get_east_storage(date) << " billion gallons \n";
}
