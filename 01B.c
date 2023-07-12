// wacp to arrange aray elements in increasing order using approach 2

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
        for (int j=i+1;j<n;j++){
            if (arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    //printing the array
    for (int i=0;i<n;i++){
        printf("%d, ",arr[i]);
    }
    return 0;
}


/*
EXPLAINATION

1. First inside main function, we get value of 'n' from user as the size of array;
2. Using for loop we get input of n elements from user;
3. we run a for loop from 0 to n to go through each element of array,
   while selecting each element we compare this element with further elements in array using inner for loop from i+1 to n, 
   if this element is larger then any other element in array we swap this element with that smaller element 
4. this way we are able to move most forward the most smaller element of array;
5. we repeat this for every element in array (using outer for loop);
6. this way our array is sorted in increasing order, we print the array and end the program;


*/