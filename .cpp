# 1. insertion sort -

# include <iostream>
using namespace std;

void insertionSort(int array[], int size) {
    for(int i=1; i<size; i++){
      int fixed=array[i];
      int a=i-1;
      while(a>=0 && array[a]>fixed){
        array[a+1]=array[a];                  
        a=a-1;
      }
      array[a+1]=fixed;
    }
    return;
}

int main(){
    int n;
    cin >> n;
    int array[n];
    for (int i=0; i<n; i++){
        cin >> array[i];
    }
    insertionSort(array,n);
    for (int i=0; i<n ; i++){
        cout << array[i] << " ";
    }
return 0;
}

# 2. bubble sort -

# include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return;
}

void printArray (int arr[], int size){
    for (int i=0; i<size ; i++)
    cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int array[n];
    for (int i=0; i<n; i++){
        cin >> array[i];
    }
    bubbleSort(array,n);
    printArray(array,n)
return 0;
}


# 3. selection sort -

# include <iostream>
using namespace std;

void selectionSort(int array[], int size) {
  for (int i=0; i<size; i++){
   int m = i;
   for (int j=i+1; j<size; j++){
      if (array[m]>array[j]){
         m = j;
      }
   }
   int temp = array[m];
   array[m] = array[i];
   array[i] = temp;
  }
  return;
}

void printArray (int arr[], int size){
    for (int i=0; i<size ; i++)
    cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int array[n];
    for (int i=0; i<n; i++){
        cin >> array[i];
    }
    selectionSort(array,n);
    printArray(array,n)
return 0;
}