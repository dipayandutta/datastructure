#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void){

  int count , i , array[30],first , last ,middle;
  int number;

  cout << "Enter number of elements to be eneterd in the array ";
  cout << endl;
  cin >> count;

  for (i=0;i<count;i++){
    cout << "Enter number "<< (i+1)<< ": ";
    cin >> array[i];
  }

  cout << "Enter the item to search for ";
  cout << endl;
  cin >> number;

  first = 0;
  last = count-1;
  middle = (first+last)/2;

  while( first <=last ){

    if (array[middle] <number){
      first = middle +1;
    }
    else if (array[middle] == number){
      cout << "Item found at the array location of " << middle+1;
      cout << endl;
      break;
    }
    else {
      last = middle + 1;
    }

    middle = (first+last)/2;
  }
    if (first > last){
      cout << "Item is not present in the list";
      cout << endl;
    }
  return 0;
}
