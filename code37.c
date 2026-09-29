#include <stdio.h>

// Finds the first (or last) index of target using binary search.
// If findFirst is 1, searches for the leftmost index; otherwise the rightmost.
int findBound(int nums[], int n, int target, int findFirst) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            result = mid;
            if (findFirst)
                high = mid - 1;   // keep searching on the left side
            else
                low = mid + 1;    // keep searching on the right side
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int n, target;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    int first = findBound(nums, n, target, 1);
    int last  = findBound(nums, n, target, 0);

    printf("%d,%d\n", first, last);

    return 0;
}