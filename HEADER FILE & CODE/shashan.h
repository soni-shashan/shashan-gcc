#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<assert.h>
#include<complex.h>
#include<ctype.h>
#include<errno.h>
#include<fenv.h>
#include<float.h>
#include<inttypes.h>
#include<iso646.h>
#include<limits.h>
#include<locale.h>
#include<setjmp.h>
#include<signal.h>
#include<stdalign.h>
#include<stdarg.h>
#include<stdatomic.h>
#include<stdbool.h>
#include<stddef.h>
#include<stdint.h>
#include<stdio.h>
#include<stdnoreturn.h>
#include<string.h>
#include<tgmath.h>
#include<time.h>
#include<uchar.h>
#include<wchar.h>
#include<wctype.h>
#include<windows.h>
#include<fcntl.h>
#include<sys/types.h>
#include<locale.h>
#include<sys/stat.h>
#include<unistd.h>

typedef char String[999999];

int factorial (int num) {
    int _factorial=1;
    for(int i=1;i<=num;i++){
        _factorial*=i;
        if(i==num){
         return _factorial;
        }
    }
}

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }

    // Check for divisibility from 2 to the square root of the number
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1; 
}

void swap(int *a,int *b) {
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int greatest_num (int n) {
    int num, max;

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    scanf("%d", &max); // Assume the first number is the maximum

    for (int i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }

    printf("The greatest number is: %d\n", max);

    return 0;
}

float quadroot(float a,float b,float c) {
    float root1,root2;
    root1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    root2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
    printf("Root 1 Is %.2f \nRoot 2 Is %.2f\n",root1,root2);
    
}

int nsum(int n) {
    int sum;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    return sum;
}

void encryption_string(char *c,int code) {
    char *ptr=c;
    while((*ptr)!='\0'){
        *ptr+=((2*code)+1);
        ptr++;
    }
}

void decryption_string(char *c,int code) {
    char *ptr=c;
    while((*ptr)!='\0'){
        *ptr-=((2*code)+1);
        ptr++;
    }
}

void scans(String a){
    fflush(stdin);
    scanf("%[^\n]%*c",a);
}