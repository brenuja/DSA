int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    count = 0;
    for(int i =0; i<size.arr ; i++)
    {
        count = count ^ arr[i];
    }
    for(int i = 1; i<size.arr; i++)
    {
        count = count ^ i ;
    }
    return count;
	
}
