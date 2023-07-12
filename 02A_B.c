// wap to sort an element using bubble sort and selection sort
// count the number of comparision required to sort an element using buubble sort

#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter all elements of array : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                count++;
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-1-i;j++){
    //         if(arr[j]>arr[j+1]){
    //             count++;
    //             int temp=arr[j];
    //             arr[j]=arr[j+1];
    //             arr[j+1]=temp;
    //         }
    //     }
    // }

    for(int i=0;i<n;i++){
        printf("%d ,",arr[i]);
    }
    printf("\ncomparision required : %d",count);

    
    return 0;
}

/*
EXPLAINATION -- Bubble sort
1. First inside main function we get value of n from user, as the size of array 
2. using for loop we get value of all elwment of array 
3. we set a counter to zero;
4. We run a for loop from i=0 to n and inside this for loop another for loop from j=0 to n-1-i ,
   we compare two adjacent value of array, if first elemest is larger than second element, we swap them and
   also increment the counter by 1;
5. This way, largest element move to the end , in the array and smallest element move to the front;
6. we now print the element of array using for loop as a confirmation for sorting. 
7. we print the counter value, and end our program.
*/

/*
EXPLAINATION -- Selection Sort

1. First inside main function, we get value of 'n' from user as the size of array;
2. Using for loop we get input of n elements from user;
3. we set a counter to zero;
4. We run a for loop from i=0 to n and inside this for loop another for loop from j=i+1 to n ,
   we compare value of ith and jth indexed element of array, if ith elemest is larger than jth element, we swap them  and
   also increment the counter by 1;;
5. This way, in the array and smallest element move to the front;
6. we now print the array using for loop from 0 to n;
7. we print the counter value and end our program ; 
*/