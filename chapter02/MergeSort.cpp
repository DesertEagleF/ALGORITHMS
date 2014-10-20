//Merge sort based on Merge Method

void Merge_sort(int arr[], int begin, int end)
{
    if(begin >= end)
        return;
        
    int mid = (begin + end)/2;
    
    Merge_sort(arr, begin, mid);
    Merge_sort(arr, mid+1, end);
    Merge(arr, begin, mid, end);
}
