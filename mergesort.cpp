class Solution
{
    public:
    void merge(int *arr,int si,int ei)
    {
        int size=ei-si+1;
        int *out=new int[size];
        int mid=si+(ei-si)/2;
        int i=si;
        int j=mid+1;
        int k=0;
        while(i<=mid&&j<=ei)
        {
            if(arr[i]>=arr[j])
                out[k++]=arr[j++];
            else
                out[k++]=arr[i++];
        }
        while(i<=mid)
            out[k++]=arr[i++];
        while(j<=ei)
            out[k++]=arr[j++];
            int m=0;
        for(int i=si;i<=ei;i++)
        {
            arr[i]=out[m++];
        }
    }
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r)
            return;
        int mid=l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,r);
    }
};