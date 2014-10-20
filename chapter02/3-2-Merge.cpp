//Merge method

void Merge(int arr[], int p, int q, int r)
{
    int n1=q-p+1, n2=r-q;
    int i, j, k;
    
    //Creat the left and right array which is sorted
    int *left = new int[n1];
    int *right = new int[n2];
    for ( i=0; i!=n1; ++i)
        left[i] = arr[p+i];
    for ( j=0; j!=n2; ++j)
        right[j] = arr[q+1+j];
    
    //Merge left and rigth array
    i = j = 0;
    k = p;
    while(i!=n1 && j!=n2)
    {
        if(left[i] < right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    
    //Merge the remaining elements
    if(i!=n1)
    {
        while(i!=n1)
            arr[k++] = left[i++];
    }
    if(j!=n2)
    {
        while(j!=n2)
            arr[k++] = right[j++];
    }
    
    delete [] left;
    delete [] right;
}
