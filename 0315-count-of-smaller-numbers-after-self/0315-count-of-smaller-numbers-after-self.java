class Solution {
    int[] indices;
    int[] count;
    public List<Integer> countSmaller(int[] nums) {
        int n=nums.length;
        indices=new int[n];
        count=new int[n];
        for(int i=0;i<n;i++){
            indices[i]=i;
        }
        mergeSort(nums,0,n-1);
        List<Integer> list=new ArrayList<>();
        for(int c:count){
            list.add(c);
        }
        return list;
    }
    public void mergeSort(int[] nums,int start,int end){
        if(start==end){
            return;
        }
        int mid=(start+end)/2;
        mergeSort(nums,start,mid);
        mergeSort(nums,mid+1,end);
        merge(nums,start,mid,end);
    }
    public void merge(int[] nums,int start,int mid,int end){
        int i=start,j=mid+1;
        int k=0,rightCount=0;
        int[] temp=new int[end-start+1];
        while(i<=mid&&j<=end){
            if(nums[indices[j]]<nums[indices[i]]){
                temp[k++]=indices[j++];
                rightCount++;
            }
            else{
                count[indices[i]]+=rightCount;
                temp[k++]=indices[i++];
            }
        }
        while(i<=mid){
            count[indices[i]]+=rightCount;
            temp[k++]=indices[i++];
        }
        while(j<=end){
            temp[k++]=indices[j++];
        }
        for(int p=0;p<temp.length;p++){
            indices[p+start]=temp[p];
        }
    }
}