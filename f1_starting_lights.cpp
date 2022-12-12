#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <bitset>

int LFSR(unsigned int seed) {
  int newbit;

  newbit = (seed ^ (seed << 1)) & 8;
  seed = (seed << 1) | (newbit >> 3);
  return seed;
}

int main() {
  int in;
  int i=1;

std::cin >> in;

while (true) {
  if (in == 1) {
    for (i=1; i<6; i++){
      std::cout << std::to_string(i) +" lights on! \n";
      sleep(1);
    }
    sleep(LFSR(3)%4);
    std::cout << "F1 lights off \n";
    std::cin >> in;
  }
  else {
    std::cin >> in;
  }
}
  
}
