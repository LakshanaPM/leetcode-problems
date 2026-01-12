class Solution {
    public int numRookCaptures(char[][] board) {
        int count=0;
        for(int i=0;i<board.length;i++){
            for(int j=0;j<board[0].length;j++){
                if(board[i][j]=='R'){
                    int k;
                    for(k=i-1;k>=0;k--){
                        if(board[k][j]!='.'){
                            if(board[k][j]=='p'){
                                count++;
                            }
                            break;
                        }
                    }
                    for(k=i+1;k<8;k++){
                        if(board[k][j]!='.'){
                            if(board[k][j]=='p'){
                                count++;
                            }
                            break;
                        }
                    }
                    for(k=j-1;k>=0;k--){
                        if(board[i][k]!='.'){
                            if(board[i][k]=='p'){
                                count++;
                            }
                            break;
                        }
                    }
                    for(k=j+1;k<8;k++){
                        if(board[i][k]!='.'){
                            if(board[i][k]=='p'){
                                count++;
                            }
                            break;
                        }
                    }
                    return count;
                }
            }
        }
        return count;
    }
}