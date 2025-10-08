/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void*a,const void*b){
    return (*(int*)a-*(int*)b);
}
int binarySearch(int* potions, int potionsSize, long long success,long long spell){
    int left=0,right=potionsSize-1,ans=potionsSize;
    while(left<=right){
        int mid=left+(right-left)/2;
        long long product=potions[mid]*spell;
        if(product>=success){
            ans=mid;
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return ans;
}
int* successfulPairs(int* spells, int spellsSize, int* potions, int potionsSize, long long success, int* returnSize) {
    qsort(potions,potionsSize,sizeof(int),compare);
    int* result=(int*)malloc(spellsSize*sizeof(int));
    *returnSize=spellsSize;
    for(int i=0;i<spellsSize;i++){
        int count=binarySearch(potions,potionsSize,success,spells[i]);
        result[i]=potionsSize-count;
    }
    
    return result;
}