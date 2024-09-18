/*
    Binary search : It is a searching algorithm which can be performed over baised data or else ordered data.
    to apply binary search on any list of elements, when we have given a pirticular element from that list
    we should be able to tell behaviour of the elements to its right side and left. 

    In binary search for every iteration we will reduce the search range by half. 

    Here search range is the range where we are trying to to search something.
    let us say we have given an array of size n , in the first go the range will be (0 , n-1) , then the next range
    will be devided to the half range it may be from (0 , n/2-1) or (n/2 , n-1) and so on. 

    So here the time complexity will be , the number of iteratons took to find the element. 
    if we keep on decreasing the search range at some point of time the search range will vanish. 

    if the range is of size n , Then 
    if we could write this in the power of 2 

    so the number of iterations will be 2^x = n ; 

    x = log (base2(n) ) ;

    let us say if there are 10^9 iterations which is almost equals to 2^31 which is int max;

    if a cpu runs 10^9 iterations it will take around 100s ; 


    if we do binary search 

    x = log base 2 (10^9) => log base 2 (2^32) => 32 * log base 2 (2) => 32 * 1 
    
    cpu takes around 0.000003 sec to complete using binary search. 
    

    let us take a genral search problem. range is n elements and they are sorted. 

    untill we find the res or untill the search range is empty we will keep on searching the element .

    let us take range l,r 

    l = 0 , r = n-1; 

    while(l<=r) {
        int mid = (l+r)/2; mid index; 

        if(arr[mid] == searchElement) res = mid , break; 

        if(arr[mid] > searchElement) {
            // it means the search element must be on the left side of mid if it exists because the list is
            // ordered
            we will reduce the next search range for this. 

            r = mid-1;
        } else {
            l = mid+1; 
        }
    }


*/