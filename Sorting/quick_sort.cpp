//QUICK SORT (better than merge sort because does not use any temp array)

//algorithm
//pick a pivot element and then place the element in it's correct place
//all smaller element than the pivot on the left and the larger elements on the right



int partitionArray(int input[], int start, int end) {
	int pivot=input[start];
	int i=start;
	int j=end;
	while(i<j){
        //finding element on the left which is greater than pivot
		while(input[i]<=pivot && i<end){
			i++;
		}
        //finding element on the right which is lesser than the pivot 
		while(input[j]>pivot && j>start){
			j--;
		}
        swapping then
		if(i<j){
			swap(input[i],input[j]);
		}
	}
    //place the pivot element in it's position
	swap(input[j],input[start]);
	return j;
}

void quickSort(int input[], int start, int end) {
	if(start>=end){
		return;
	}
	int pivot_index=partitionArray(input,start,end);
	quickSort(input,start,pivot_index-1);
	quickSort(input,pivot_index+1,end);
}