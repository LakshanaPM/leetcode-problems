int numOfPairs(char** nums, int numsSize, char* target) {
    int count=0;
    int* len=(int*)malloc(numsSize*sizeof(int));
    int l=strlen(target);
    for(int i=0;i<numsSize;i++){
        len[i]=strlen(nums[i]);
    }
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<numsSize;j++){
            if(i==j||len[i]+len[j]!=l) continue;
            char t[250];
            strcpy(t, nums[i]);
            if(strcmp(target,strcat(t,nums[j]))==0) count++;
        }
    }
    return count;
}