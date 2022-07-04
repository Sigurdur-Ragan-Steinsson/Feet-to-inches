#include <iostream>

using namespace std;

int feetToInches(int feet){
  return feet * 12;
}

int main() {
  int ft = 0;
  cout << "Please enter the number of feet ";
  cin >> ft;
  cout << feetToInches(ft) << " inches" << endl;
} 