// WACP to find elements of array which are nearer to average elements of array 

#include <stdio.h>

int averageArray(int*ptr,int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum=sum+ptr[i];
    }
    return sum/n;
}

int difference(int a, int b){
    if (a>b){
        return a-b;
    }
    else {
        return b-a;
    }
}
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array\n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int avg=averageArray(arr,n);
    int diff[n];
    for (int i=0;i<n;i++){
        diff[i]=difference(arr[i],avg);
    }
    int value=diff[0];
    int index=0;
    for(int i=0;i<n;i++){
        if (value>diff[i]&&diff[i]!=0){
            value=diff[i];
            index=i;
        }
    }
    printf("The average is %d\n",avg);
    printf("The first closest number is %d\n",arr[index]);
    diff[index]=0;
    value=diff[0];
    index=0;
    for(int i=0;i<n;i++){
        if (value>diff[i]&&diff[i]!=0){
            value=diff[i];
            index=i;
        }
    }
    printf("The second closest number is %d\n",arr[index]);
    return 0;
}


/*
EXPLAINATION

1. we first created two functions 
    first, averageArray, to calculate the average of any array of any length; and
    second, difference to find positive difference between any two integers; 

2. now, inside main function, we take value of n from user as the length of array and using for loop input whole array;

3. we created integer 'avg' to store average value of entered array using 'averageArray' function;

4. we also created array 'diff' to store the positive difference of every respective element from average value of array
5. using for loop, we searched for the index of element having least difference from array but not zero, and captured its index;
6. we print the respective element at this index, as, the element first closest to the average.
7. we set difference of this element from average to zero and again repeated the above step to find new index of another element 
   which is now closest but difference is not zero.
8. this way we are able to get second closest element, we print this element and end our program
*/