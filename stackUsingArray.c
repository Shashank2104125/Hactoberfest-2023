#include<stdio.h>
#include<conio.h>

int ar[5],top=-1;

void push();
void pop();
void show();

int main(){
    printf("enter the choice:\n");
    printf("1:To push\n");
    printf("2:To pop\n");
    printf("3:To show\n");
    int ch;
    while(1)
    {
    printf("enter your choice:");
    scanf("%d",&ch);
    switch(ch){
     case 1:
     push();
     break;
      case 2:
     pop();
     break;
     case 3:
     show();
     break;
     default:
     printf("Invalid choice\n");
    }
    }
}

void push(){
    if(top==4){
        printf("stack is full\n");
    }else{
        top++;
        printf("enter the interger to add in stack:");
        scanf("%d",&ar[top]);
    }
}

void pop(){
    if(top==-1){
        printf("stack is empty\n");
    }else{
        printf("popped element is:%d\n",ar[top]);
        top--;
    }
}

void show(){
    if(top==-1){
        printf("nothing to show\n");
    }else{
    printf("our stack is:\n");
    for(int i=top;i>=0;i--){
        printf("%d\n",ar[i]);
    }}

}
