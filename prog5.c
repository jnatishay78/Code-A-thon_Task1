#include <stdio.h>
int main() {
    int d, m, y;
    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &d, &m, &y);
    if (m < 3) {
        m += 12;
        y -= 1;}
    int hello = (d + ((13 * (m + 1)) / 5) + (y % 100) + ((y % 100) / 4) + ((y / 100) / 4) - 2 * (y / 100)) % 7;
    switch (hello) {
        case 0:
            printf("Sunday\n");
            break;
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid date.\n");
    }

    return 0;
}