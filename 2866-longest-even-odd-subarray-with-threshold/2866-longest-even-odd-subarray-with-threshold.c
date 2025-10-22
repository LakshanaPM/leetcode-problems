int longestAlternatingSubarray(int* a, int numsSize, int threshold) {
    int start=0,end=0,maxLen=0;
    for(int i=0;i<numsSize;i++){
        if(a[i]%2==0&&a[i]<=threshold){
            int count=1;
            for(int j=i;j<numsSize-1&&a[j]<=threshold&&a[j+1]<=threshold;j++){
                if(a[j]%2==a[j+1]%2) break;
                count++;
            }
            if(count>maxLen) maxLen=count;
        }

    }
    return maxLen;
}