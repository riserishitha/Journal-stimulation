//  1. insertion sort - (12/8)

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

//  2. bubble sort - (12/8)

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
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    bubbleSort(arr,n);
    printArray(arr,n)
return 0;
}


//  3. selection sort - (12/8)

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

void printArray (int array[], int size){
    for (int i=0; i<size ; i++)
    cout << array[i] << " ";
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

//  4. Quick sort : (13/8)

# include <iostream>
using namespace std;

void swap (int&a,int&b){
    int temp = a;
    a=b;
    b = temp;
}
int partition (int arr[],int low, int high){
    int part = arr[high];
    int i= (low-1);
    for (int j=low; j<=high-1; j++){
        if (arr[j]<=part){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
};

void quickSort(int arr[], int low, int high) {
    if (low<high){
        int pi = partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
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
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    quickSort(arr,0,n-1);
    printArray(arr,n)
return 0;
}


//  merge sort : (14/8)

#include <iostream>
using namespace std;

// Function to merge two halves
void merge(int array[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = array[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = array[mid + 1 + j];

    // Merge the temporary arrays back into array[left..right]
    int i = 0;  // Initial index of first subarray
    int j = 0;  // Initial index of second subarray
    int k = left;  // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        } else {
            array[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        array[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        array[k] = R[j];
        j++;
        k++;
    }
}

// Function to implement Merge Sort
void mergeSort(int array[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Recursively sort the first and second halves
        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);

        // Merge the sorted halves
        merge(array, left, mid, right);
    }
}

int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    mergeSort(array, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
