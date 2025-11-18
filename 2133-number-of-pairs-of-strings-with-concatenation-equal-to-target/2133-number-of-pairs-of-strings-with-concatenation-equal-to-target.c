int numOfPairs(char** nums, int numsSize, char* target) {
    int count=0;
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<numsSize;j++){
            if(i==j) continue;
            char t[250];
            strcpy(t, nums[i]);
            if(strcmp(target,strcat(t,nums[j]))==0) count++;
        }
    }
    return count;
}