//binary search

bool Binary_Search(const in arr[], int begin, int end, const int key)
{
    int mid;
    while(begin <= end)
    {
        mid = (begin + end)/2;
        if(arr[mid] == key)  
            return true;
        if(arr[mid] > key)    
            end = mid - 1;
        if(arr[mid] < key)    
            begin = mid + 1;
    }
    return false;
}
