/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

// #include <iostream>
// #include <math.h>

// using namespace std;

// int main()
// {
//     int n, a[100];

// //###INSERT CODE HERE -
// cin >> n;
// for (int i=0; i<n; i++) {
//     cin >> a[i];
// }

//     int x; cin >> x;
//     int k, flag=0;
//     for (int i=0; i<=n; i++) {
//         if (a[i]==x){
//         flag=1;
//         k=i;
//          break;
//         }
//     }
//     if (flag==1) {
//     cout << x << " xuat hien dau tien tai vi tri thu " << k+1 << " trong mang " << endl;
//     }else cout << "Khong tim thay " << x << endl;
//     return 0;
// }

/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

// #include <iostream>
// #include <math.h>

// using namespace std;

// //###INSERT CODE HERE -
// void inputArray (int a[100], int &na) {
//     cin >> na;
//     for (int i=0; i<na; i++) {
//         cin >> a[i];
//     }
// }
// void outputArray (int a[100], int na) {
//     for (int i=0; i<na; i++) {
//         cout << a[i] << " ";
//     }
// }
// int getPositiveNumber (int a[100], int na, int b[100], int &nb) {
//     nb=0;
//     for (int i=0; i<na; i++) {
//         if (a[i] > 0) {
//         b[nb]= a[i];
//         nb++;
//         }else
//         b[nb]--;
//     }
//     return nb;
// }
// int main()
// {
//     int na, a[100], nb, b[100];
//     inputArray(a,na);
//     cout<<"Array a:"<<endl;
//     outputArray(a,na);
//     cout<<endl;

//     getPositiveNumber(a,na,b,nb);

//     cout<<"Array b:"<<endl;
//     outputArray(b,nb);

//     return 0;
// }

/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

// #include <iostream>
// #include <math.h>

// using namespace std;

// // //###INSERT CODE HERE -

// void inputArray(int a[100], int &n)
// {
//     cin >> n;
//     if (n <= 0 || n > 100)
//     {
//         cout << "Nhap lai ";
//         exit(0);
//     }
//     else
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//     }
// }
// void outputArray(int a[100], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }
// void xoaViTri(int &n, int pos)
// {
//     cout << "\nLoi xoa: Vi tri khong hop le "; exit (0);
// }
// int deleteElement(int a[100], int &n, int pos)
// {
//     if (pos < 0 || pos >= n)
//     {
//         xoaViTri(n, pos);
//     }
//     else
//     {
//         for (int i = pos; i < n - 1; i++)
//         {
//             a[i] = a[i + 1];
//         }
//         n--;
//     }
//     return n;
// }

// int main()
// {
//     int n, a[100], pos;
//     inputArray(a, n);
//     cin >> pos;
//     cout << "Before: ";
//     outputArray(a, n);

//     if (deleteElement(a, n, pos) != -1)
//     {
//         cout << "\nAfter: ";
//         outputArray(a, n);
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// using namespace std;
// int n, a[100];

// void nhap(int x[100], int &n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
// }

// int mangChan(int x[100], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] % 2 != 0)
//             return 0;
//     }
//     return 1;
// }
// int mangLe (int x[100], int n) {
//     for (int i=0; i<n; i++) {
//         if (a[i]%2==0) return 0;
//     }
//     return 1;
// }
// int main()
// {
//     cin >> n;
//     if (n <= 0)
//     {
//        cout << "Mang rong ";
//     }
//     else
//     {
//          nhap(a, n);
//         if (mangChan(a, n)==1)
//         {
//             cout << "Mang chua toan so chan ";
//         }else if (mangLe(a, n)==1) {
//             cout << "Mang chua toan so le ";
//         }else {
//             cout << "Mang khong chua toan so chan hay so le ";
//         }
//     }
//     return 0;
// }

/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

// #include <iostream>
// #include <math.h>

// using namespace std;

// int main()
// {
//     int n, a[100];
//     cin>>n;
//     for (int i=0;i<n;i++)
//         cin>>a[i];
//     cout<<"Mang da nhap:"<<endl;
//     for (int i=0;i<n;i++)
//         cout<<a[i]<<" ";

// //###INSERT CODE HERE -
//     for (int i=0; i<n/2; i++) {
//         int tmp=a[i];
//         a[i]= a[n-i-1];
//         a[n-i-1]= tmp;
//     }
//     cout<<endl<<"Mang sau khi dao:"<<endl;
//     for (int i=0;i<n;i++)
//         cout<<a[i]<<" ";

//     return 0;
// }

/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

// #include <iostream>
// #include <math.h>

// using namespace std;

// //###INSERT CODE HERE -

// void inputArray (int a[100], int &na, int b[100], int &nb) {
//     cin >> na >> nb;
//     for (int i=0; i<na; i++) {
//         cin >> a[i];
//     }
//      for (int i=0; i<nb; i++) {
//         cin >> b[i];
//      }
// }

// void outputArray (int x[100], int n) {
//     for (int i=0; i<n; i++) {
//         cout << x[i] << " ";
//     }
// }
// void  connect (int a[100], int na, int b[100], int nb, int c[100], int &nc) {
//      int cnt=0;
//      nc= nb+na;
//      int i;
//      int tmp= a[i];
//      for (i=0; i<nb; i++) {
//         c[cnt]= b[i];
//         cnt++;
//      }
//      for (int i=0; i<na/2; i++) {
//         int tmp=a[i];
//         a[i]= a[na-i-1];
//         a[na-i-1]= tmp;
//     }
//      for (i=0; i<na; i++) {

//         c[cnt]= a[i];
//         cnt++;
//      }

// }
// int main()
// {
//     int na, a[100], nb, b[100], nc, c[100];
//     inputArray(a,na,b,nb);
//     cout<<"Array a: "   ;outputArray(a,na);
//     cout<<"\nArray b: " ;outputArray(b,nb);

//     connect(a,na,b,nb,c,nc);

//     cout<<"\nArray c: ";outputArray(c,nc);

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int a[100], n;
// void nhap (int a[100], int n, int b[100], int m) {

// }
// int main () {

// }

// #include <bits/stdc++.h>
// using namespace std;
// int a[15], b[15], c[15];
// int n, na, nb, nc;

// void nhap (int a[15], int &na, int b[15], int &nb) {
//     cin >> na >> nb;
//     for (int i=0; i<na; i++) {
//         cin >> a[i];
//     }
//     for (int i=0; i<nb; i++) {
//         cin >> b[i];
//     }
// }

// void xuat (int x[15], int n) {
//     for (int i=0; i<n; i++) {
//         cout << x[i] << " ";
//     }
// }
// void noiMang (int a[15], int na, int b[15], int nb, int c[15], int &nc) {
//     nc= na+nb;
//     int cnt=0;
//     int i;
//     for (i=0; i<na; i++) {
//         c[cnt]= a[i];
//         cnt++;
//     }
//     for (i=0; i<nb; i++) {
//         c[cnt]=b[i];
//         cnt++;
//     }
// }
// int main () {
// nhap (a, na, b, nb);
// noiMang(a, na, b, nb, c, nc);
// xuat (c, nc);
// }
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <math.h>

using namespace std;

// ###INSERT CODE HERE -
 void inputArray(int a[100], int &n) {
     do {
         cin >> n;
     }while (n<=0 || n>100);
     for (int i=0; i<n; i++) {
         cin >> a[i];
     }
 }
 void outputArray (int a[100], int &n) {
     for (int i=0; i<n; i++) {
         cout << a[i] << " ";
     }
 }
 

 void insertElement (int a[100], int &n, int pos, int x) {
     n++;
     for (int i=n-1;i>x; i--) {
         a[i]=a[i-1];
 }
 a[x]=pos;
 }

int main()
{
    int n, a[100],pos,x;
    inputArray(a,n);
    cin>>pos>>x;
    cout<<"Before: ";
    outputArray(a,n);

    insertElement(a,n,pos,x);

    cout<<"\nAfter: ";
    outputArray(a,n);

    return 0;
}