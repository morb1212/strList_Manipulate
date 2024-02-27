    #include <string.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include "StrList.h"

    int main()
    {
        StrList *list = StrList_alloc();
        int choice;
        printf("choose a number from the menu\n");
        scanf("%d", &choice);
        while (choice != 0)
        {
            if (choice == 1)
            {
                int num;
                printf("how many Strings to you want to enter?\n");
                scanf("%d", &num);
                for (int i = 0; i < num; i++)
                {
                    char* st = (char* )malloc(100 * sizeof(char));
                    printf("enter the String\n");
                    scanf("%s", st);
                    StrList_insertLast(list, st);
                    free(st);
                }
            }
            if (choice == 2)
            {
                int index;
                printf("enter the index\n");
                scanf("%d", &index);
                char* st = (char* )malloc(100 * sizeof(char));
                printf("enter the String\n");
                scanf("%s", st);
                StrList_insertAt(list, st, index);
                free(st);
            }
            if (choice == 3)
            {
                StrList_print(list);
            }
            if (choice == 4)
            {
                int sizeList = StrList_size(list);
                printf("%d", sizeList);
            }
            if (choice == 5)
            {
                int index;
                printf("enter the index\n");
                scanf("%d", &index);
                StrList_printAt(list, index);
            }
            if (choice == 6)
            {
                int len = StrList_printLen(list);
                printf("%d", len);
            }

            if (choice == 7)
            {
                int count;
                char* st = (char* )malloc(100 * sizeof(char));
                printf("enter the String\n");
                scanf("%s", st);
                count = StrList_count(list, st);
                printf("the string %s appears %d times\n", st, count);
            }
            if (choice == 8)
            {
                char* st = (char* )malloc(100 * sizeof(char));
                printf("enter the String\n");
                scanf("%s", st);
                StrList_remove(list, st);
            }

            if (choice == 9)
            {
                int index;
                printf("enter the index\n");
                scanf("%d", &index);
                StrList_removeAt(list, index);
            }
            if (choice == 10)
            {
                StrList_reverse(list);
            }
            if (choice == 11)
            {
                for (int i = 0; i < StrList_size(list); i++)
                {
                    StrList_removeAt(list, i);
                }
            }
            if (choice == 12)
            {
                StrList_sort(list);
            }
            if (choice == 13)
            {
                int ans = StrList_isSorted(list);
                if (ans == 1)
                {
                    printf("the list is sorted by lexicographic order\n");
                }
                else
                {
                    printf("the list is not sorted by lexicographic order\n");
                }
            }
        printf("next choice\n");
         scanf("%d", &choice);
        }
        StrList_free(list);
        return 0;
    }