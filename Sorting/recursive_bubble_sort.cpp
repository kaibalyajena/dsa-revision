//RECURSIVE BUBBLE SORT

//ALGORITHM

//1. First, call the recursive function with the given array and the range of n(size of the array).
//2. Inside that recursive function, repeatedly swap 2 adjacent elements if arr[j] > arr[j+1].
//   Here, the maximum element of the unsorted array reaches the end of the unsorted array after each recursive call.
//3. Each time after step 2, call the recursion again decreasing the range by 1.
//4. The recursion will continue until the range(i.e. the size) of the array is reduced to 1.
// Base Case: if(n == 1) return;


void bubbleSort(vector<int>& arr, int n) {
    if(n==1){
        return;
    }
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    bubbleSort(arr,n-1);
}