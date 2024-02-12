//SELECTION SORT

//algo
//1. the outer loop will run for the unsorted array and after each iteration the starting index would get sorted
//2. the inner loop will find the minimum element in the unsorted region (i to n-1)
//3. then swap the minimum element with the starting element of the sorted part
//4. array will be sorted

void selectionSort(vector<int>&arr) {
    for(int i=0;i<arr.size()-1;i++){
        int mini=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);
    }
}