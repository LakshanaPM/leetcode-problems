int findLucky(int* arr, int arrSize) {
    int* count=(int*)calloc(501,sizeof(int));
    for(int i=0;i<arrSize;i++){
        ++count[arr[i]];
    }
    int largest=-1;
    for(int i=0;i<arrSize;i++){
        if(count[arr[i]]==arr[i]&&arr[i]>largest) largest=arr[i];
    }
    return largest;
}