#include <iostream>

#ifdef COOL_FEATURE
  #include "CoolFeature.h"
#endif

int main() {
  std::cout << "Hello From main\n";
  
  #ifdef COOL_FEATURE
    std::cout << coolFeature();
  #endif
}