#include <stdio.h>

int main()
{
  int n;
  printf("Enter number of elements: ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter elements:\n");
  for(int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);  // take input
  }

  // Outer loop = number of passes
  // After each pass, biggest element goes to the end
  for(int pass = 0; pass < n - 1; pass++)
  {
    // Inner loop = compare adjacent elements
    for(int pos = 0; pos < n - pass - 1; pos++)
    {
      // If left element is bigger than right
      if(arr[pos] > arr[pos + 1])
      {
        int temp = arr[pos];  // store left
        arr[pos] = arr[pos + 1];  // move right to left
        arr[pos + 1] = temp;  // put stored value to right
      }
    }
  }

  printf("Sorted array:\n");
  for(int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}
