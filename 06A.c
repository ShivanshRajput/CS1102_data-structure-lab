/*
1. tower or hanoi -- DONE
2. write a c program to search for element in existing array and find number of comparison required for 
   binary search and linear search 
3. tree traversal
*/

#include <stdio.h>
int binarysearchcomparisons(int arr[], int n, int x){
    int l=0,r=n-1;
    int m;
    int count=0;
    while(l<=r){
        m=(l+r)/2;
        if (arr[m]==x){
            return count+1;
        }
        else if (x<arr[m]){
            count++;
            r=m-1;
        }
        else if (arr[m]<x){
            count++;
            l=m+1;
        }
    }
}

int linearsearchcomparisons(int arr[],int n,int x){
    int count=0;
    for (int i=0;i<n;i++){

        if (arr[i]==x){
            count++;
            break;
        }
        else{
            count++;
        }
    }
    return count;
}

int main()
{
    
    int arr[]={6,10,11,20,21,30,31,40,41,50,51,61,75,85,96};
    int c1=linearsearchcomparisons(arr,15,31);
    int c2=binarysearchcomparisons(arr,15,31);
    printf("linear search comparisons required = %d\n",c1);
    printf("binary search comparisons required = %d\n",c2);
    return 0;
}



/*
Explaination

1. first we create a binarysearchcomparision() function which returns the number of comparisions 
   required to find an element from an array by using binary search.
2. in this function we perform regular binary search, everytime left or right limits are changed,
   count is increased. at last we just return the count.
3. then we create a linearsearchcomparisions() function which returns the number of comparisions 
   required to find an element from an array by using linear search.
4. in this function we just traverse through the array and check each element, if it is equal to the 
   element we are searching for. for each comparision, count is increased by one and at last count is returned
5. int main() function, we just call these two functions for a predefined sorted array and observe the results.

*/