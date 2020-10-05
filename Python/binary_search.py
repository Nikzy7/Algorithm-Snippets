import math
# params
# array - sorted search space
# n     - item to search for
# start - search space start index
# end   - search space end index
def binarySearch(array,n,start,end):

    mid = start+((end-start)//2) # find the middle element
    if(array[mid]==n):           # check if n is in the middle
        return mid
    elif(start==end):            # check if the search is completed
        return -1
    elif(n < array[mid]):        # search on the left side
        end=mid-1
        return binarySearch(array,n,start,end)
    else:                        # search on the right side
        start=mid+1
        return binarySearch(array,n,start,end)