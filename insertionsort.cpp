 void insertionSort(int arr[], int n)
    {
        //code here
        for(int i=1;i<n;i++)
        {
            int curr=arr[i];
            int j=i-1;
            while(j>=0)
            {
                if(curr<arr[j])  //if current element is less than the pointed element of sorted side we can shift
                {
                    arr[j+1]=arr[j];
                    j--;
                }
                else{   //correct position where we need to insert current element is found
                    arr[j+1]=curr;
                    break;
                }
            }
            if(j==-1)arr[0]=curr; //if every element in sorted part of array is shifted then current element is smallest
        }
    }