// Importations:
#include <cpputils.hpp>
#include <iostream>
#include <thread>


// Main code:
int main()
{
  // Variables:
  unsigned long long int times{0ULL}, aonits; // AONITS is an abreviation to the "Amount Of Numbers In The Screen"

  // Commands before the code:
  CppUtils::Terminal::clear_terminal();

  // Code:
  std::cout << bold << "Type the amount of numbers that you want to print in the screen (can be literally an infinity number...): " << std::flush;
  std::cin >> aonits;
  std::cout << "=========================================================================================================" << std::endl;

  for(times = 0ULL; times <= aonits; ++times)
  {
    std::cout << 1ULL * times << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
  }

  std::cout << "=========================================================================================================" << std::endl;
  std::cout << "Press any key to continue..." << base_terminal << std::flush;
  std::cin.ignore(), std::cin.get();

  CppUtils::Terminal::clear_terminal();

  return 0;
}
