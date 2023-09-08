
#include <iostream>

using namespace std;

int sum(int a){
  int count = 0;
  for(int i = 0; i <= a; i++){
    count = count + i;
  }
  return count;
}

int product(int a){
  int count = 1;
  for(int i = 1; i <= a; i++){
    count = count * i;
  }
  return count;
}

int main() {
  int input = 0;

  cout << "Enter number: ";
  cin >> input;
  
  cout <<"\n" << sum(input) << "\n";
  cout <<"\n" << product(input) << "\n";
  return 0;
}
