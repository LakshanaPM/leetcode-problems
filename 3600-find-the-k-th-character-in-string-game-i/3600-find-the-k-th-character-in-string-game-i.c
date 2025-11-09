char kthCharacter(int k) {
    if(k==1) return'a';
    int l=1;
    while(l*2<k){
        l=l*2;

    }
    if(k-l>0) return kthCharacter(k-l)+1;
    else return kthCharacter(k);
    
}