#include"searching.h"

int Searching::linearSearch(vector<int>& arr, int n) {
    /*
    Given an array, arr of n integers, and an integer element x, find whether element x is 
    present in the array. Return the index of the first occurrence of x in the array, or -1 if it doesn't exist.
    Examples:

    Input: arr[] = [1, 2, 3, 4], x = 3
    Output: 2
    Explanation: There is one test case with array as [1, 2, 3 4] and element to be searched as 3. Since 3 is present at index 2, the output is 2.
    Input: arr[] = [10, 8, 30, 4, 5], x = 5
    Output: 4
    Explanation: For array [1, 2, 3, 4, 5], the element to be searched is 5 and it is at index 4. So, the output is 4.
    Input: arr[] = [10, 8, 30], x = 6
    Output: -1
    Explanation: The element to be searched is 6 and its not present, so we return -1.
    Expected Time Complexity: O(n).
    Expected Auxiliary Space: O(1). 
    */
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == n) {
            cout << "Element found at index " << i << endl;
            return i;
        }
    }
    cout << "Element not found" << endl;
    return -1;

}

int Searching::searchInSorted(int arr[], int n, int x) {
    /*
    Given a sorted array of size N and an integer K. Check if K is present in the array or not.
    Example:

    Input:
    N = 5, K = 6
    arr[] = {1, 2, 3, 4, 6}
    Output: 1
    Explanation: Since, 6 is present in the array at index 4 (0-based indexing), output is 1.
    Input:
    N = 5, K = 2
    arr[] = {1, 3, 4, 5, 6}
    Output: -1
    Explanation: Since, 2 is not present in the array, output is -1.
    Expected Time Complexity: O(LogN).
    Expected Auxiliary Space: O(1).
    */
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            cout << "Element found at index " << mid << endl;
            return mid;
        }
        else if (arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    cout << "Element not found" << endl;
    return -1;
}

 int Searching::findFloor(vector<long long> &v, long long n, long long x) {

        // Your code here
        int low = 0, high = n - 1;
        int floor_index = -1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (v[mid] == x) {
                return mid;
            } else if (v[mid] < x) {
                floor_index = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
    }

    return floor_index;
    }

int Searching::findMajorityElement(const vector<int>& arr) {
    /*
    Given an array arr of size N, find the element which appears more than N/2 times in the array.
    Example:

    Input:
    N = 5
    arr[] = {3,1,3,3,2}
    Output: 3
    Explanation: Since, 3 is present more than N/2 times, so it is the majority element.
    Expected Time Complexity: O(N).
    Expected Auxiliary Space: O(1).
    */
    int count = 1;
    int majority_element = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == majority_element) {
            count++;
        }
        else {
            count--;
        }
        if (count == 0) {
            majority_element = arr[i];
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == majority_element) {
            count++;
        }
    }
    if (count > arr.size() / 2) {
        cout << "Majority element is " << majority_element << endl;
        return majority_element;
    }
    cout << "No majority element" << endl;
    return -1;
}

int Searching::findMajorityElement2(const vector<int>& arr) {
    /*
    Given an array arr of size N, find the element which appears more than N/2 times in the array.
    Example:

    Input:
    N = 5
    arr[] = {3,1,3,3,2}
    Output: 3
    Explanation: Since, 3 is present more than N/2 times, so it is the majority element.
    Expected Time Complexity: O(N).
    Expected Auxiliary Space: O(1).
    */
    int candidate = -1;
    int count = 0;

    // Phase 1: Find a candidate
    for (int num : arr) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify the candidate
    count = 0;
    for (int num : arr) {
        if (num == candidate) {
            count++;
        }
    }

    if (count > arr.size() / 2) {
        return candidate;
    } else {
        return -1;
    }
}