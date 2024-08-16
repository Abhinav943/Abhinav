#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int target)
{
  int left = 0;
  int right = size - 1; 

  while (left <= right)
  {
    int mid = left + (right - left) / 2; 

    if (arr[mid] == target)
      return mid;

    if (arr[mid] < target)
      left = mid + 1;

    else
      right = mid - 1;
  }
  return -1;
}
int main()
{
  int n;
  cout << "Enter the number of elements in the array: ";
  cin >> n;

  int arr[n];

  cout << "Enter " << n << " integers (sorted order): ";
  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
  }

  int target;
  cout << "Enter the target integer to search for: ";
  cin >> target;

  int index = binarySearch(arr, n, target);

  if (index != -1)
  {
    cout << "Target " << target << " found at index: " << index << endl;
  }
  else
  {
    cout << "Target " << target << " not found in the array" << endl;
  }
  return 0;
}
