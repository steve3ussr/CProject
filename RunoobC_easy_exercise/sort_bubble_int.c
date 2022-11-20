#include <stdio.h>

void print_int_list(int *lst, int length) {
    for (int i=0; i<length; i++) {
        printf("%d ", lst[i]);
    }
    printf("\n");
}

void swap_two_index(int *lst, int i, int j) {
    int tmp;
    tmp = lst[i];
    lst[i] = lst[j];
    lst[j] = tmp;
}

int main() {
    /* intial data */
    int ORI_LIST[] = {65, 80, 24 ,56, 89, 34, 51, 34, 54, 94, 55, 51, 34, 67, 91, 45};
    const int LIST_LEN = sizeof(ORI_LIST)/sizeof(int);
    printf("ORIGINAL: ");
    print_int_list(ORI_LIST, LIST_LEN);
    /* main seg */
    if (LIST_LEN <= 1) {
        
    }
    else {
        for (int base=0; base<=LIST_LEN-2; base++) {

            for (int curr=0; curr<=LIST_LEN-2-base; curr++) {
                if (ORI_LIST[curr] < ORI_LIST[curr+1]) {
                    swap_two_index(ORI_LIST, curr, curr+1);
                }
                print_int_list(ORI_LIST, LIST_LEN);
            }

        }
    }

    printf("JOB COMPLETE, RES: ");
    print_int_list(ORI_LIST, LIST_LEN);

    return 0;
}