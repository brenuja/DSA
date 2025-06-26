int findUnique(int *arr, int size)
{
    //Write your code here
    int count =0;
    int i;
    for( i = 0; i<size ; i++){
        count = count ^ arr[i];
    }
    return count;
    
}
