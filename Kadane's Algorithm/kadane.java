/*

Kadane's Algorithm:
The maximum sum subarray problem is the task of finding a contiguous subarray with the largest sum, within a given one-dimensional array A[1...n] of numbers.
This is one of the most popular problems and is asked in almost all of the Technical Interviews of top Companies.
Kadane's algorithm can be used to find the sum of the largest sum contiguous subarray or modified to find the subarray itself.

Contributor's Note:
This is a pretty easy algorithm to understand, although, seems a little scary by its name. I faced this problem in the interviews of companies like Walmart and Amazon.

For a Video based Explanation, check out my favorite video on this topic:
https://youtu.be/jnoVtCKECmQ

*/

import java.util.*;

class kadane{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter Size of Array :");
        int arr_size = s.nextInt();

        int[] arr = new int[arr_size];

        int i;

        System.out.println("Enter Elements : ");

        for(i=0;i<arr_size;i++)
            arr[i] = s.nextInt();

        System.out.print("The maximum contiguous subarray sum is : ");
        System.out.print(kadane_func(arr));
        s.close();
    }
    
    //function implementing kadane's algo
    static int kadane_func(int[] arr)
    {
        int max_val = arr[0];
        int current = max_val;

        for(int i=1;i<arr.length;i++)
        {
            current = Math.max(arr[i]+current,arr[i]);
            max_val = Math.max(current,max_val);
        }

        return max_val;
    }
}