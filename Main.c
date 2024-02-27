    #include <string.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include "StrList.h"

    int main()
    {
        StrList *list = StrList_alloc();
        int choice;
        scanf("%d", &choice);
        while (choice != 0)
        {
            if (choice == 1)
            {
                int num;
                scanf("%d", &num);
                for (int i = 0; i < num; i++)
                {
                    char* st = (char* )malloc(100 * sizeof(char));
                    scanf("%s", st);
                    StrList_insertLast(list, st);
                    free(st);
                }
            }
            if (choice == 2)
            {
                int index;
                scanf("%d", &index);
                char* st = (char* )malloc(100 * sizeof(char));
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
                scanf("%s", st);
                count = StrList_count(list, st);
                printf("%d\n", count);
            }
            if (choice == 8)
            {
                char* st = (char* )malloc(100 * sizeof(char));
                scanf("%s", st);
                StrList_remove(list, st);
            }

            if (choice == 9)
            {
                int index;
                scanf("%d", &index);
                StrList_removeAt(list, index);
            }
            if (choice == 10)
            {
                StrList_reverse(list);
            }
            if (choice == 11)
            {
                for (int i = StrList_size(list)-1; i >=0 ; i--)
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
                    printf("true\n");
                }
                else
                {
                    printf("false\n");
                }
            }
         scanf("%d", &choice);
        }
        StrList_free(list);
        return 0;
    }