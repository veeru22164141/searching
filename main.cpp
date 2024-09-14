#include"searching.h"

int main() {
    Searching s;
    vector<int> arr = {1, 2, 3, 4};
    int n = 3;
    s.linearSearch(arr, n)? cout << "true" : cout << "false" << endl;
    int arr1[] = {1, 2, 3, 4, 6};
    int n1 = 5;
    int x = 6;
    s.searchInSorted(arr1, n1, x)? cout << "true" : cout << "false" << endl;
    vector<long long> v = {1, 2, 8, 10, 10, 12, 19};
    long long n2 = 7;
    long long x1 = 5;
    cout << s.findFloor(v, n2, x1) << endl;
    vector<int> arr2 = {3, 1, 3, 3, 2};
    cout << s.findMajorityElement(arr2) << endl;
    cout << s.findMajorityElement2(arr2) << endl;
    return 0;
}