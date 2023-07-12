//  wacp to arrange aray elements in increasing order using approach 1 

#include<stdio.h>
int main (){
    int n;
    printf("Enter no of elements of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all elements of array\n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for (int j=0;j<n-1-i;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j]; 
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    //printing the array
    for (int i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    return 0;
}


/*
EXPLAINATION

1. First inside main function, we get value of 'n' from user as the size of array;
2. Using for loop we get input of n elements from user;
3. We run a for loop from i=0 to n and inside this for loop another for loop from j=0 to n-1-i ,
   we compare two adjacent value of array, if first elemest is larger than second element, we swap them ;
4. This way, largest element move to the end , in the array and smallest element move to the front;
5. we now print the array using for loop from 0 to n, and end our program ;

*/