/*
Objective: Compare the efficiency of Linear Search and Binary Search by tracking and counting the number
of iterations each algorithm takes to find a target value in an array. Your goal is to observe how the number
of iterations changes depending on the algorithm used and the position of the target value in the array.

Instructions
Linear Search Explanation:

Linear search is a straightforward algorithm where you start from the beginning of an array and examine each element one-by-one until you find the target or reach the end of the array.
For each position checked, count the iteration.

Binary Search Explanation:

Binary search requires the array to be sorted in ascending order. The search starts at the middle of the array. If the middle element matches the target, the search is complete.
If the target is less than the middle element, the search continues on the left half of the array; if the target is greater, it continues on the right half. Each step reduces the search range by half, making it much faster than linear search.
Count each time you check a middle element as one iteration.

Use this sorted array for testing both search algorithms:
[1, 3, 5, 7, 9, 11, 13, 15, 17, 10]

hoose a target value (e.g., 9) and run both algorithms on this array. 
Count the iterations each algorithm requires to find the target.

Compare Iterations:
After completing both searches, compare the number of iterations required to find the target value in each case.
Document the findings to show the differences in efficiency between linear search and binary search.
*/
#include <stdio.h>

int lin(int data[], int length, int target){ //Linear search
    int iterations = 0;
    
    for(int i = 0; i < length; i++){
        
        iterations++;
        if (data[i] == target)
        {
            return iterations;
        }
    }

    return -1;

}

int bin(int data[], int length, int target){
    int half = 0;
    int left = 0;
    int iterations = 0;
    int right = (length - 1);

    while (left <= right)
    {

        half = left + (right - left)/2;
        iterations++;

        if(data[half] == target){

            return iterations;

        }else if(data[half] < target){

            right = half - 1;

        }else{

            left = half + 1;
        }



    }
    

    return iterations;
}

int main()
{   
    int data[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    int length = (sizeof(data)/sizeof(data[0]));

    int iterations_lin = lin(data,length,9);
    printf("\nThe iterations in the linear search are: %d", iterations_lin);

    int iterations_bin = bin(data,length,9);
    printf("\nThe iterations in the binari search are de: %d", iterations_bin);
   
    return 0;
}
