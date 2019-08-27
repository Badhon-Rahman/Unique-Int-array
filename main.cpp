#include <iostream>

using namespace std;

void UniqueIntElement(int arr[], int arrSize){
    int uniqueArr[arrSize], x = 1;
    bool flag;
        uniqueArr[0] = arr[0];
        for(int i = 1; i < arrSize; i++){
          flag = false;
          for(int j = 0; j < i; j++){
             if(arr[i] == uniqueArr[j]){
                flag = true;
                break;
             }
          }
          if(flag == false){
            uniqueArr[x] = arr[i];
            x++;
          }
        }
        cout << "Unique elements: ";
        for(int i = 0; i < x; i++){
            cout << uniqueArr[i] << " ";
        }
}

int main()
{
    int arrSize;
    cout << "Enter the array size:";
    cin >> arrSize;

    int arr[arrSize];
    cout << "Enter the array elements: ";
    for(int i = 0; i < arrSize; i++){
        cin >> arr[i];
    }

    UniqueIntElement(arr, arrSize);

    return 0;
}
