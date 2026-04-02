#include<stdio.h> // Includes standard I/O library for printf and scanf [13].
int main() // Entry point of the program.
{
    int i,j,n,temp,a[20]; // Declares variables and an integer array 'a' of size 20.
    printf("enter the no of elements in the array"); // Prompts user for size.
    scanf("%d",&n); // Reads the number of elements (n) from user.
    printf("enter the elemets"); // Prompts user to input n elements.
    for(i=0;i<n;i++){ // Loop to read each element.
        scanf("%d",&a[i]); // Stores input into array 'a' at index 'i'.
    }
    // INSERTION SORT ALGORITHM:
    for(i=1;i<n;i++) // Outer loop: starts from 2nd element (index 1) to last.
    {
        temp=a[i]; // 'temp' stores the current element to be placed.
        j=i-1; // 'j' starts checking elements to the left of temp.

        // Inner loop: shifts elements larger than 'temp' one position right.
        while(temp<a[j]&&(j>=0))
        {
            a[j+1]=a[j]; // Move element a[j] to the right.
            j=j-1; // Move to the next element on the left.
        }
        a[j+1]=temp; // Places 'temp' into its correct sorted position [11].
    }
    printf("the sorted array:\n"); // Print message.
    for(i=0;i<n;i++){ // Loop to output sorted elements.
        printf("%d",a[i]); // Prints each element [7].
    }
}
