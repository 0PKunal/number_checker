# include<stdio.h>

int main(){
    int num;

    // get a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // check the number is odd or even
    if (num % 2 == 0) 
        printf("%d is a odd number.\n", num);
    else       
        printf("%d is a even number.\n", num);
    
return 0;
}