#include<stdio.h>
#include<stdarg.h>

void __printBinary(unsigned int n){
    int i;
    int arr[16];
if(n>0){
    for(i=0;n>0;i++){
        arr[i]=n%2;
        n=n/2;
    }

    for(i=i-1;i>=0;i--){
        printf("%d",arr[i]);
    }
} else {
    printf("0");
}
}

void print(const char* format, ...) {
    va_list args;
    va_start(args, format);

    while (*format) {
        if (*format == '%') {
            format++; 
            if (*format == 'd' || *format=='i') {
                int num = va_arg(args, int);
                printf("%d", num);
            } else if (*format == 'f') {
                double num = va_arg(args, double);
                printf("%f", num);
            } else if (*format == 'b') {
                unsigned int num = va_arg(args,unsigned int);
                __printBinary(num);
            } else if(*format=='s'){
                char *str = va_arg(args, char*);
                printf("%s",str);
            } else if(*format=='c'){
                char a= (char)va_arg(args, int);
                printf("%c",a);
            } else if(*format=='o'){
                int o=(int)va_arg(args, int);
                printf("%o",o);
            } else if(*format=='x'){
                int x=(int)va_arg(args,int);
                printf("%x",x);
            } else if(*format=='.'){
                format++;
                if(*format=='0'){
                    format++;
                    if(*format=='f'){
                        double num = va_arg(args, double);
                        printf("%.0f", num);   
                    }
                }else if(*format=='1'){
                    format++;
                    if(*format=='f'){
                        double num = va_arg(args, double);
                        printf("%.1f", num);   
                    }
                }else if(*format=='2'){
                    format++;
                    if(*format=='f'){
                        double num = va_arg(args, double);
                        printf("%.2f", num);   
                    }
                }else if(*format=='3'){
                    format++;
                    if(*format=='f'){
                        double num = va_arg(args, double);
                        printf("%.3f", num);   
                    }
                }else if(*format=='4'){
                    format++;
                    if(*format=='f'){
                        double num = va_arg(args, double);
                        printf("%.4f", num);   
                    }
                }else if(*format=='5'){
                    format++;
                    if(*format=='f'){
                        double num = va_arg(args, double);
                        printf("%.5f", num);   
                    }
                }else if(*format=='6'){
                    format++;
                    if(*format=='f'){
                        double num = va_arg(args, double);
                        printf("%.6f", num);   
                    }
                } else { 
                    format++;
                    if(*format=='f'){
                        double num = va_arg(args, double);
                        printf("%f", num);
                    }
                }
            } else {
                putchar('%');
                putchar(*format); 
            }
        } else {
            putchar(*format);
        }
        format++;
    }

    va_end(args);
}

int binary(unsigned int num) {
    unsigned int result = 0;
    unsigned powerOfTwo = 1;

    while (num > 0) {
        result += (num % 2) * powerOfTwo;
        num /= 2;
        powerOfTwo *= 10;
    }

    return result;
}
