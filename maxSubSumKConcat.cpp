#include <iostream>
#include <vector>
using namespace std;

long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{
    long long prefixSum = 0, suffixSum = 0;
    long long maxPrefixSum = INT64_MIN;
    long long maxSuffixSum = INT64_MIN;
    long long kadaneMaxSum = INT64_MIN, kadaneCurrSum = 0;
    for (int i = 0; i < n; i++)
    {
        kadaneCurrSum += arr[i];
        kadaneMaxSum = max(kadaneMaxSum, kadaneCurrSum);
        prefixSum += arr[i];
        suffixSum += arr[n - i - 1];
        maxPrefixSum = max(maxPrefixSum, prefixSum);
        maxSuffixSum = max(maxSuffixSum, suffixSum);
    }
    if (k == 1)
        return kadaneMaxSum;
    long long totalArraySum1 = prefixSum * k - (prefixSum - kadaneMaxSum);
    long long totalArraysSum2 = maxSuffixSum + prefixSum(k - 2) + maxPrefixSum;
    long long singleArrayMaxSum = kadaneMaxSum;
    long long arrayExtremesMaximumSum = maxSuffixSum + maxPrefixSum;
    return max({singleArrayMaxSum, totalArraysSum1, arrayExtremesMaximumSum, totalArraysSum2});
}

int main()
{
    int n;
    cin >> n;

    int k;
    cin >> k;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    cout << maxSubSumKConcat(arr, n, k) << endl;
}