# 1. insertion sort - (12/8)

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

# 2. bubble sort - (12/8)

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


# 3. selection sort - (12/8)

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

# 4. Quick sort : (13/8)

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

// Quick Sort function
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
