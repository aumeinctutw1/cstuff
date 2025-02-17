#include <stdio.h>
#include <stdlib.h>

/*
 * Find value in array of integers, returns 1 if value is found, otherwise 0
 * pos function parameter is used to return the position of found value
 * if the value is not found, the position is set to -1
 */
int findValue(const int *arr, int arrLen, int value, int *pos) {
	/* err check for NULL pointer, prevent segfault */
	if (arr == NULL || pos == NULL) {
		return 0;
	}

	for (int i = 0; i < arrLen; i++) {
		if (arr[i] == value) {
			*pos = i;
			return 1;
		}
	}	
	*pos = -1;
	return 0;
}

int main(int argc, const char *argv[]) {
	if (argc != 2) {
		printf("Usage: ./main <value to search>\n");
	}

	/* value to search in the array */
	int value = atoi(argv[1]);
	/* variable to store the position */
	int pos;

	/* array initialization */
	int arr[] = {1, 2, 4, 8, 16, 32, 64, 128};

	/*
	 * Calculate the length of array (number of elements)
	 * divide the size of the whole array in bytes by 
	 * the number of bytes one element takes 
	 * If an Integer takes 8 bytes, an array of 2 Integer takes 16 Bytes total
	 */
	int arrLen = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < arrLen; i++) {
		printf("Elem %d = %d\n", i, arr[i]);
	}

	printf("Searching for value: %d\n", value);
	int found = findValue(arr, arrLen, value, &pos);

	if (!found) {
		printf("Value not found!\n");
		printf("Position: %d\n", pos); 
		return 1;
	}

	printf("Value found!\n");
	printf("Position: %d\n", pos); 
		

	/* Pointers example */
	int test = 4;
	/* points to the address of test, the &-Operator returns the adress of a value */
	int *ptr = &test;

	/* the value of test is 4, the value if ptr is a adress (0x16f797278) to the location of 4 */
	printf("Value of test: %d\n", test);
	printf("Value of ptr: %p\n", ptr);

	/* if ptr is derefenced it prints the value of the adress its poiting to */
	printf("Value of *ptr: %d\n", *ptr);

	/* Prints:
		Value of test: 4
		Value of ptr: 0x16f797278
		Value of *ptr: 4
	*/

	return 0;
}
