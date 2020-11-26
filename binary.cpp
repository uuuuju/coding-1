#include <stdio.h>
int main()
{
  int i, first, last, middle, n, x, array[100];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  printf("Enter value to find\n");
  scanf("%d", &x);

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < x)
      first = middle + 1;
    else if (array[middle] == x) {
      printf("%d found at location %d.\n",x, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", x);

  return 0;
}

 

