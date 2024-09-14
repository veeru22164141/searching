#ifndef SEARCHING_H
#define SEARCHING_H
#include <iostream>
#include <vector>
using namespace std;
// Your code goes here
class Searching {
    public:
        Searching()=default;
        ~Searching()=default;
        int linearSearch(vector<int>& arr, int n);
        int searchInSorted(int arr[], int n, int x);
        int findFloor(vector<long long> &v, long long n, long long x);
        int findMajorityElement(const vector<int>& arr);
        int findMajorityElement2(const vector<int>& arr);
};

#endif // SEARCHING_H