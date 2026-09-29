#include <stdio.h>

int main()
{
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5, i, pos, value;

    // Traversal
    printf("Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    // Insertion
    printf("\nEnter position and value to insert: ");
    scanf("%d %d", &pos, &value);

    for(i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = value;
    n++;

    printf("After insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    // Deletion
    printf("\nEnter position to delete: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    printf("After deletion: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
