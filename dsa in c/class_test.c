#include<stdio.h>
#define max 10000
int stack[max];
int top = -1;
void push(int val){
    if(top==max-1){
        printf("stack is overflow");
    }
    stack[++top] = val;
}
void pop(){
    if(top==-1){
        printf("stack is empty");
    }
    printf("%d \n", stack[top--]);
}
int main(){
    int nums;
    int size;
    printf("enter the input number ");
    scanf("%d", &nums);
    while (nums!=0){
        int x = nums % 10;
        push(x);
        nums = nums / 10;
    }
    while (top!=-1){
        pop();
    }
    return 0;
}