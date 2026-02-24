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

  // This loop selects position where smallest should go
  for(int pos = 0; pos < n - 1; pos++)
  {
    int minIndex = pos;  // assume current position has smallest

    // This loop searches for smaller element
    for(int check = pos + 1; check < n; check++)
    {
      if(arr[check] < arr[minIndex])
      {
        minIndex = check;  // update index of smallest
      }
    }

    // Swap only if a smaller element was found
    if(minIndex != pos)
    {
      int temp = arr[pos];
      arr[pos] = arr[minIndex];
      arr[minIndex] = temp;
    }
  }

  printf("Sorted array:\n");
  for(int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}
