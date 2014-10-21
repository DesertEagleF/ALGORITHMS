//Merge sort based on Merge Method

void Merge_Sort(int arr[], int begin, int end)
{
    if(begin < end) //condition to break the loop
    {    
        int mid = (begin + end)/2;
    
        Merge_Sort(arr, begin, mid);
        Merge_Sort(arr, mid+1, end);
        Merge(arr, begin, mid, end);
    }
}
