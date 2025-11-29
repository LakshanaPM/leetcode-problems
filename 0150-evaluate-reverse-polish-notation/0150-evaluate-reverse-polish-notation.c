int stack[10000];
int top=-1;
void push(int num){
    stack[++top]=num;
}
int pop(){
    return stack[top--];
}
int evalRPN(char** tokens, int tokensSize) {
    for(int i=0;i<tokensSize;i++){
        char* c=tokens[i];
        if((strlen(c)==1)&&(c[0]=='+'||c[0]=='-'||c[0]=='*'||c[0]=='/')){
            int a=pop();
            int b=pop();
            switch(tokens[i][0]){
                case '+':
                push(b+a);
                break;
                case '-':
                push(b-a);
                break;
                case '*':
                push(b*a);
                break;
                case '/':
                push(b/a);
                break;
            }
        }
        else{
            push(atoi(tokens[i]));
        }
    }
    return pop();
}