/*
ho ten : Vo Thi Tai Linh
MSSV: 17211TM4476
ngay lam bai : 07/11/2017
*/
#include <iostream>
using namespace std;
int main()
{
int nN , i , Dem = 0;
//nhap n
cout << "nhap vao so n:";
cin >> nN;
//tinh va xuat 
for (i = 2 ; i<= nN; i++)
{
if (nN%2 ==0) Dem++;
}
if (Dem <2) 
{
cout <<nN<< "la so nguyen to" << endl;
}
else
{
cout << nN << " khong phai la so nguyen to" << endl;
}
system("pause");
}