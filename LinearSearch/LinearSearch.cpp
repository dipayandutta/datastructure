#include <iostream>

class LinearSearch {

  public:
    void linearSearch(int array[],int value , int i , int n){
      int found = 0;
      for(i=0;i<n;i++){

        if (value == array[i]){
          found = 1;
          break;
        }
      }

      if(found == 1){

        std::cout << "Elemet is present in the array position " << i+1;
        std::cout << std::endl;
      }
      else{
        std::cout << "Item is not present in the array ";
        std::cout << std::endl;
      }
    }

};

int main(){

  int number;
  int i,keynum;

  std::cout<<"Enter the number of elements to insert "<< std::endl;
  std::cin >> number;

  int array[number];

  std::cout << "Enter the elements one by one" << std::endl;

  for(i=0;i<number;i++){

    std::cin >> array[i];
  }

  std::cout << "Enter the item to search for "<< std::endl;
  std::cin >> keynum;

  LinearSearch LS;
  LS.linearSearch(array,keynum,i,number);

  return 0;
}
