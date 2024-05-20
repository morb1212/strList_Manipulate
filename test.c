#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "StrList.h" // Assuming this is the header for your main code

// Function to compare two strings and print the result
void test_strcmp(const char* str1, const char* str2) {
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Strings \"%s\" and \"%s\" are equal.\n", str1, str2);
    } else {
        printf("Strings \"%s\" and \"%s\" are not equal.\n", str1, str2);
    }
}

// Function to test StrList_printLen function
void test_StrList_printLen(StrList* list, int expected_len) {
    int len = StrList_printLen(list);
    if (len == expected_len) {
        printf("Length of the list matches the expected length: %d.\n", expected_len);
    } else {
        printf("Length of the list (%d) does not match the expected length (%d).\n", len, expected_len);
    }
}

// Function to test StrList_isSorted function
void test_StrList_isSorted(StrList* list, int expected_result) {
    int result = StrList_isSorted(list);
    if (result == expected_result) {
        printf("The list is%s sorted as expected.\n", expected_result ? "" : " not");
    } else {
        printf("The list is%s sorted, but it was expected to be %s sorted.\n", result ? "" : " not", expected_result ? "" : "not");
    }
}

// Add more test functions as needed...

int main() {
    // Initialize StrList and perform operations to be tested
    StrList *list = StrList_alloc();
    StrList_insertLast(list, "Hello");
    StrList_insertLast(list, "World");
    
    // Test StrList_printLen function
    printf("Testing StrList_printLen function:\n");
    test_StrList_printLen(list, 10); // Assuming the total length is expected to be 10
    
    // Test StrList_isSorted function
    printf("\nTesting StrList_isSorted function:\n");
    test_StrList_isSorted(list, 1); // Assuming the list is expected to be sorted
    
    // Clean up
    StrList_free(list);
    
    return 0;
}
