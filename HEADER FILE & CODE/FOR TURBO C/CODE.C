#include<shashan.h>

void cr();


int main () {
    int a=3,b=4,n,sum=10;
    String s1;
    char c[]="shashan";
    char d[]="vkdvkdq";
    cr();
    //This All Standard Function Using math.h & stdio.h
    printf("Hello World\n");
    printf("%.2f\n",pow(2,4));
    printf("%.2f\n",sqrt(100));

    //factorial Using #include<shasha.h>
    printf("%d\n",factorial(5));

    //check prime or not Using #include<shasha.h>
    if(is_prime(5)) {
	printf("prime\n");
    } else {
	printf("not a prime\n");
    }

    //swap Using #include<shasha.h>
    printf("A is %d & B is %d\n",a,b);
    swap(&a,&b);
    printf("A is %d & B is %d\n",a,b);

    //greatest of Nth Numbers Using #include<shasha.h>
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    greatest_num(n);

    //Find The Roots Of Quadratic Equation Using #include<shasha.h>
    quadroot(1,2,-3);

    //Sum Of Nth Netural Numbers Using #include<shasha.h>
    printf("\nThe Sum Of 10 Netural Numbers Is %d\n",nsum(sum));

    //encryption & decryption string Using #include<shasha.h>
    encryption_string(c,1);
    printf("encryption String Is %s\n",c);
    decryption_string(d,1);
    printf("decryption String Is %s\n",d);

    //New Variable 'String' Using Typedef and New Function 'scans' This Scan Values Include Space Using #include<shasha.h>
    printf("Write Your Own String : ");
    scans(s1);
    printf("%s",s1);

    getch();
    return 0;
}


void cr() {
clrscr();
}