//write a program that used multiple structure variables(structure)
#include<stdio.h>
int main()
{
    struct books
    {
        unsigned long book_code;
        unsigned int npages;
        float price;
    };
    struct books bvar1,bvar2,bvar3;
    printf("Enter the book_code,number of pages and price of first book=\n");
    scanf("%lu%u%f",&bvar1.book_code,&bvar1.npages,&bvar1.price);
    printf("Enter the book_code,number of pages and price of Second book=\n");
    scanf("%lu%u%f",&bvar2.book_code,&bvar2.npages,&bvar2.price);
    printf("Enter the book_code,number of pages and price of Third book=\n");
    scanf("%lu%u%f",&bvar3.book_code,&bvar3.npages,&bvar3.price);
    printf("\nbook code=%8lu\tpages=%5u\tprice%7.2f\n",bvar1.book_code,bvar1.npages,bvar1.price);
    printf("\nbook code=%8lu\tpages=%5u\tprice%7.2f\n",bvar2.book_code,bvar2.npages,bvar2.price);
    printf("\nbook code=%8lu\tpages=%5u\tprice%7.2f\n",bvar3.book_code,bvar3.npages,bvar3.price);
    
    
}
