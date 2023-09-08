
#include <iostream>

using namespace std;

int sum(int a){
  int count = 0;
  for(int i = 0; i <= a; i++){
    count = count + i;
  }
  return count;
}

int main() {
  int input = 0;

  cout << "Enter number: ";
  cin >> input;
  
  cout <<"\n" << sum(input) << "\n";
  return 0;
}
