//APPROACHES

// brute
// 1. sorting (but only works when duplicates are not present)

// better
// 2. find the largest using linear search and then find the element which is just larger than the largest element
void getElements(int arr[],int n){
    //edge case for only one element
    if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;  
    int small=INT_MAX,second_small=INT_MAX;
    int large=INT_MIN,second_large=INT_MIN;
    //find largest and smallest element
    for(int i=0;i<n;i++)
    {
        small=min(small,arr[i]);
        large=max(large,arr[i]);
    }
    //finding second largest and second smallest element
    for(int i=0;i<n;i++)
    {
        //element which is smallest but not equal to the already smallest will become the second smallest
        if(arr[i]<second_small && arr[i]!=small)
            second_small=arr[i];
        if(arr[i]>second_large && arr[i]!=large)
            second_large=arr[i];
    }
    cout<<"Second smallest is "<<second_small<<endl;
    cout<<"Second largest is "<<second_large<<endl;
}


// optimal
// 3. 

int secondLargest(int arr[],int n)
{
	if(n<2)
	return -1;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;                
}