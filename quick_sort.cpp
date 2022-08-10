void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low>=high)return;
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot=low;
       int count=0;
       for(int i=pivot+1;i<=high;i++)
       {
           if(arr[i]<=arr[pivot])
            count++;
       }
       swap(arr[pivot],arr[count+low]);
       pivot=count+low;
       int si=low;
       int ei=high;
       while(si<pivot&& ei>pivot)
       {
          if(arr[si]<=arr[pivot])
        {
            si++;
        }
        else if(arr[ei]>arr[pivot])
        {
            ei--;
        }
        else{
            int temp=arr[si];
            arr[si]=arr[ei];
            arr[ei]=temp;
            si++;
            ei--;
        }
       }
       return pivot;
    }
};