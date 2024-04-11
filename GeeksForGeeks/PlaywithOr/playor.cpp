<<<<<<< HEAD
int* game_with_number(int arr[], int n)
{
    
    // Complete the function
    for(int i=0;i<n;i++)
    {
        if(i!=n-1)
        arr[i] = arr[i]|arr[i+1];
    }
    return arr;
}
// tc : o(n)
=======
int* game_with_number(int arr[], int n)
{
    
    // Complete the function
    for(int i=0;i<n;i++)
    {
        if(i!=n-1)
        arr[i] = arr[i]|arr[i+1];
    }
    return arr;
}
// tc : o(n)
>>>>>>> 24694c16372f1391a6ccdfdcb19b9d545dabcfe5
// sc : o(1)