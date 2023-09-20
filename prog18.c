#include <stdio.h>
    int main(){
    int ati;
    printf("Enter how many elements you want: ");
    scanf("%d", &ati);

    int arr[ati];
    printf("Enter the elements of array: ");
    for (int a = 0; a < ati; a++) {
        scanf("%d", &arr[a]);
    }
    int eve[ati], od[ati];
    int evecount = 0, odcount = 0;

    for (int a = 0; a<ati; a++) {
        if (arr[a] % 2 == 0) {
            eve[evecount++] = arr[a];
        } else {
            od[odcount++] = arr[a];   } }
    Sort(eve, evecount);
    Sort(od, odcount);
    int pni = 0;
    for (int a = 0; a<evecount; a++) {
        arr[pni++] = eve[a];}
    for (int a = 0; a<odcount; a++) {
        arr[pni++] = od[a];}
    printf("Sorted array :\n");
    for (int i = 0; i<ati; i++) {
        printf("%d ", arr[i]);}
    printf("\n");
    return 0;
}



    void Sort(int arr[], int ja) {
    int temp, swaped;
    do {
        swaped = 0;
        for (int a=0; a<ja-1; a++) {
            if (arr[a] > arr[a+1]) {
                temp = arr[a];
                arr[a] = arr[a+1];
                arr[a+1] = temp;
                swaped=1;}}
    } while (swaped);}