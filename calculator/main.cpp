#include <iostream>
#include <math.h>
#include <string.h>
#include <windows.h>

int selections();
float input(float array[], int n);
float Tong();
float Hieu();
float Tich();
float Thuong();
float PTB1();
float PTB2();
float TBC();
float BinhPhuong();
float CanB2();

int main()
{
    char continues;
    do{
 
    int selection = selections();
    system("cls");
    switch (selection)
    {
    case 1:
        Tong();
        break;
    case 2:
        Hieu();
        break;
    case 3:
        Tich();
        break;
    case 4:
        Thuong();
        break;
    case 5:
        PTB1();
        break;
    case 6:
        PTB2();
        break;
    case 7:
        TBC();
        break;
    case 8:
        BinhPhuong();
        break;
    case 9:
        CanB2();
        break;
    case 0:
    std::cout << "----------------BYE!----------------";
    Sleep(1000);
    system("cls");
        break;


    default:
        std::cout << "Nhap sai, Hay nhap lai!";
        break;
    }
    std::cin.ignore();
    std::cout << "Ban co muon tiep tuc khong (y/n)\n";
    std::cin >> continues;
    system("cls");
    if (continues == 'n'){
        std::cout << "----------------BYE!----------------";
        Sleep(1000);
        system("cls");
    }
    }while(continues == 'y');
    return 0;
}
int selections(){
    int n=0;
    std::cout << "Xin moi lua chon:\n";
    std::cout << "1.Phep tinh cong\n";
    std::cout << "2.Phep tinh tru\n";
    std::cout << "3.Phep tinh nhan\n";
    std::cout << "4.Phep tinh chia\n";
    std::cout << "5.Giai phuong trinh bac 1\n";
    std::cout << "6.Giai phuong trinh bac 2\n";
    std::cout << "7.Trung binh cong\n";
    std::cout << "8.Binh phuong\n";
    std::cout << "9.Can bac 2\n";
    std::cout << "0.Dong chuong trinh\n";
    std::cout << "Lua chon cua ban: ";
    std::cin >> n;
    return n;
}
float input(float array[], int n){
    for (int i = 0 ; i < n ; i++){
        std::cout << "Nhap so thu " << i+1 << ": ";
        std::cin >> array[i];
    }
}
float Tong(){
    float sum[21];
    int selection;
    float sums = 0;
    std::cout << "Nhap vao so luong so ban can tinh Tong (<=20)!\n";
    std::cout << "Lua chon cua ban: ";
    std::cin >> selection;
    input(sum, selection);
    for (int i = 0 ; i < selection ; i++){
        sums += sum[i];
    }
    std::cout << "Ket qua: " << sums << "\n";
}
float Hieu(){
    float Hieus[20];
    int selection;
    std::cout << "Nhap vao so luong so ban can tinh Hieu (<=20)!\n";
    std::cout << "Lua chon cua ban: ";
    std::cin >> selection;
    input(Hieus, selection);
    float Ketqua = Hieus[0];
    for (int i = 1 ; i < selection ; i++){
        Ketqua -= Hieus[i];
    }
    std::cout << "Ket qua: " << Ketqua << "\n";
}
float Tich(){
    float Tichs[20];
    int selection;
    float Ketqua = 1;
    std::cout << "Nhap vao so luong so ban can tinh Tich (<=20)!\n";
    std::cout << "Lua chon cua ban: ";
    std::cin >> selection;
    input(Tichs, selection);
    for (int i = 0 ; i < selection ; i++){
        Ketqua *= Tichs[i];
    }
    std::cout << "Ket qua: " << Ketqua << "\n";
}
float Thuong(){
    float Thuongs[20];
    int selection;
    std::cout << "Nhap vao so luong so ban can tinh Thuong (<=20)!\n";
    std::cout << "Lua chon cua ban: ";
    std::cin >> selection;
    input(Thuongs, selection);
    float Ketqua = Thuongs[0];
    for (int i = 1 ; i < selection ; i++){
        Ketqua /= Thuongs[i];
    }
    std::cout << "Ket qua: " << Ketqua << "\n";
}
float PTB1(){
    float a, b, Ketqua = 0;
    std::cout << "Phuong trinh co dang ax + b = 0\n";
    std::cout << "Nhap a: ";
    std::cin >> a;
    std::cout << "Nhap b: ";
    std::cin >> b;
    Ketqua = (-b)/a;
    printf("Phuong trinh: %fx + %f = %f\n", a, b, Ketqua);
}
float PTB2(){
    float a, b, c, Ketqua = 0;
    std::cout << "Nhap a: ";
    std::cin >> a;
    std::cout << "Nhap b: ";
    std::cin >> b;
    std::cout << "Nhap c: ";
    std::cin >> c;
    float delta = 0;
    delta = (b*b)-(4*a*c);
    if (delta < 0){
        std::cout << "Phuong trinh vo nghiem!\n";
    }
    else if(delta==0){
        printf("Phuong trinh co mot nghiem: %f\n", (-(b/(2*a))));
    }
    else{
        printf("Phuong trinh co hai nghiem:\nx1 = %f \nx2 = %f\n", (((-b+sqrt(delta))/(2*a))), (((-b-sqrt(delta))/(2*a))));
    }
}
float TBC(){
    int selection;
    float TBCs[20] ,Ketqua = 0, Sum = 0;
    std::cout << "Nhap vao so luong so ban can tinh trung binh cong (<=20)!\n";
    std::cout << "Lua chon cua ban: ";
    std::cin >> selection;
    input(TBCs, selection);
    for (int i = 0 ; i < selection ; i++){
        Sum += TBCs[i];
    }
    Ketqua = Sum / selection;
    std::cout << "Ket qua: " << Ketqua << "\n";
    
}
float BinhPhuong(){
    float n;
    std::cout << "Nhap so ban can binh phuong: ";
    std::cin >> n;
    std::cout << n << " binh phuong = " << n*n << "\n";
}
float CanB2(){
    float n;
    std::cout << "Nhap so ban can can bac hai: ";
    std::cin >> n;
    std::cout << " Can bac hai cua " << n << " = " << sqrt(n) << "\n";
}