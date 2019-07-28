#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class BinarySearch{

  public:
    void binarysearch(int array[],int search_number,int count){
      int i;
      int low;
      int high;
      int middle;

      low = 0;
      high = count -1;
      middle = (low+high)/2;

      while(low <= high){

        if (array[middle] < search_number){
          low = middle +1 ;
        }
        else if(array[middle] == search_number){
          cout << "Item found at the array location of "<< middle+1;
          cout << endl;
          break;
        }
        else {
          high = middle +1;
        }

        middle = (low+high)/2;
      }
      if(low > high){
        cout << "Item is not present in the list";
        cout << endl;
      }
    }
};

int main(){

  int count ;
  int i ;
  int array[30];
  int search_item;

  cout << "Enter number of elements to be entered in the array ";
  cout << endl;
  cin >> count;

  for(i=0;i<count;i++){
    cout << "Enter element number "<< (i+1) << ": ";
    cout << endl;
    cin >> array[i];

  }
  cout << "Enter the item to search for ";
  cout << endl;
  cin >> search_item;

  BinarySearch binsearch;
  binsearch.binarysearch(array,search_item,count);

  return 0;
}
