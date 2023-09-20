#include <stdio.h>
#define MAX 5
int linearSearch(int* a, int n)
{
    int i, pos = -1;
    for (i = 0; i < MAX; i++) {
        if (a[i] == n) {
            pos = i;
            break;
        }
    }
    return pos;
}
int main()
{
    int i, n, arr[MAX];
    int num; /* element to search*/
    int position;
    printf("\nEnter array elements:\n");
    for (i = 0; i < MAX; i++)
        scanf("%d", &arr[i]);
    printf("\nNow enter element to search :");
    scanf("%d", &num);
    /* calling linearSearch function*/
    position = linearSearch(arr, num);
    if (num == -1)
        printf("Element not found.\n");
    else
        printf("Element found  %d position.\n", position);
    return 0;
}
