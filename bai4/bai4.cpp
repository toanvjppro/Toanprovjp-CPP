#include "bai4.h"
#include "function_bai4.cpp"

int main()
{
    int n;
    int *array = new int[10];
    input_n("Nhap n = ", n);
    input_array("Nhap mang: \n", array, n);
    sap_xep_array(array, n);
    output_array("Mang sau khi da sap xep la: \n", array, n);
    delete array;
    return 0;
}
