// Calculates a dogs age in human years by simple convesrion

#include <iostream>

int main() {
  
  // The age of the dog
  int dog_age = 2;

  int early_years;
  int later_years;
  int human_years;

  // First 2 dog years is 21 years in human time
  early_years = 21;

  // After 2 years every year is 4 years in human time
  later_years = (dog_age-2)*4;

  // Total years
  human_years = early_years + later_years;

  std::cout << "My name is Ruffles! Ruff ruff, I am " << human_years << " years old in human years.\n";
  
}