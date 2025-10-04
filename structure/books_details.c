//program to store and display book details using structures 
#include<stdio.h>

int main()
{
    // Structure definition to store book details
    struct books
    {
        unsigned long book_code; // Unique book code
        unsigned int npages;     // Number of pages in the book
        float price;             // Price of the book
    };

    // Declare 3 book variables
    struct books bvar1, bvar2, bvar3;

    // Input details of three books
    printf("Enter the book_code, number of pages and price of first book\n");
    scanf("%lu %u %f", &bvar1.book_code, &bvar1.npages, &bvar1.price);

    printf("Enter the book_code, number of pages and price of second book\n");
    scanf("%lu %u %f", &bvar2.book_code, &bvar2.npages, &bvar2.price);

    printf("Enter the book_code, number of pages and price of third book\n");
    scanf("%lu %u %f", &bvar3.book_code, &bvar3.npages, &bvar3.price);

    // Display book details
    printf("\nBook Code = %8lu\tPages = %5u\tPrice = %7.2f", bvar1.book_code, bvar1.npages, bvar1.price);
    printf("\nBook Code = %8lu\tPages = %5u\tPrice = %7.2f", bvar2.book_code, bvar2.npages, bvar2.price);
    printf("\nBook Code = %8lu\tPages = %5u\tPrice = %7.2f", bvar3.book_code, bvar3.npages, bvar3.price);

    return 0;
}
