#include<stdio.h>
int main(){
int cur_sales= 100;
int cur_ppu = 500;
int fix_oc = 10000;
int cur_ab = 1000;

int b_sale = cur_sales;
int b_ab = cur_ab;
int b_np = (cur_sales * cur_ppu) - fix_oc - cur_ab;
while (1) {
cur_ab = cur_ab*2;
int n_sales = cur_sales + (cur_sales * 20 / 100);
int n_pro = (n_sales * cur_ppu) - fix_oc - cur_ab;
if (n_pro > b_np) {
b_sale = n_sales;
b_ab = cur_ab;
b_np = n_pro;
} else {
break;}}
printf("Number of Super-Duper sales: %d\n", b_sale);
printf("Advertising budget: Rs %d\n", b_ab);
printf("Net profit just before the profit begins to decline: Rs %d\n", b_np);
return 0;}