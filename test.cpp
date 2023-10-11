// /*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
// define
// include
// using
// ###End banned keyword*/
// #include <iostream>

// using namespace std;


// //###INSERT CODE HERE -
// int isSumOfConsecutive(int n) {
//     int a, b, cnt=0;
//     for (int i=1; i<=n/2; i++) {
//         b=((2*n)-i*(i+1))%(2*(i+1));
//         a=((2*n)-i*(i+1))/(2*(i+1));
//         if (b==0 && a > 0) {
//             cnt++;
//         }
//     }
//     return cnt;
// }
// int main()
// {
//     int n;cin>>n;
//     cout <<isSumOfConsecutive(n)<< endl;
//     return 0;
// }


/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
ucln
%
###End banned keyword*/

// #include <iostream>
// using namespace std;

// int ucln (int a, int b){

//     //###INSERT CODE HERE -
//     if (a == 0 && b == 0)
//         return -1;
//     while (a != b)
//     {
//         if (a < 0 && b < 0)
//         {
//             if (a > b)
//             {
//                 a = a - b;
//             }
//             else
//             {
//                 b = b - a;
//             }
//         }
//         if (a == 0 || b == 0)
//         {

//             if (a == 0 && b > 0)
//             {
//                 a = a + b;
//             }
//             else
//             {
//                 a = a - b;
//             }
//             if (b == 0 && a > 0)
//             {
//                 b = b + a;
//             }
//             else
//             {
//                 b = b - a;
//             }
//         }

//         if (a > b)
//         {
//             if (b > 0)
//             {
//                 a = a - b;
//             }
//             else
//             {
//                 b = a + b;
//             }
//         }

//         else if (b > a)
//         {
//             if (a > 0)
//             {
//                 b = b - a;
//             }
//             else
//             {
//                 a = b + a;
//             }
//         }
//     }
//     return a;

// }

// int main (){
// 	int n,m ;
// 	cin >> n >> m;
//     if (ucln(n,m)==-1) cout <<n<<" va "<<n<<" khong co UCLN";
// 	else cout<<"UCLN cua "<<n<<" va "<<m<<" la "<<ucln(n,m);

// 	return 0;
// }

/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

// #include <iostream>

// ###INSERT CODE HERE -
// #include <iomanip>
// #include <math.h>
// using namespace std;

// float calculate (int n) {
//     float s=0;
//     int i=1;
//     while (i<=n) {
//         s=sqrt(i+s);
//         i++;
//     }
//     return s;
// }


// int main() {
// 	int n;
// 	cin >> n;
//     cout << setprecision(3) << calculate(n);
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main () {
//     int a, b;
//     cin >> a >> b;
//     double x;
//     if(a == 0) {
//         if (b == 0||b==-0) {
//             cout << "Phuong trinh " << a << "x+" << b << "=0 co vo so nghiem " << endl;
//         } else {
//             if (b>0)
//             cout << "Phuong trinh " << a << "x+" << b << "=0 vo nghiem" << endl;
//             else 
//             cout << "Phuong trinh " << a << "x" << b << "=0 vo nghiem" << endl;
//         }
//     } else {
//         x = (double)-b/a;
//         if (a<0 && (b==0 || b==-0)) {
//             cout << "Phuong trinh " << a <<"x+" << b << "=0 co 1 nghiem x = " << abs(x) << endl;
//     }else 
//         if (b>=0) 
//         cout << "Phuong trinh " << a << "x+" << b << "=0 co 1 nghiem x = " << x << endl;
//         else
//          cout << "Phuong trinh " << a << "x" << b << "=0 co 1 nghiem x = " << x << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main () {
// int a, b, c;
// cin >> a >> b >> c;
// if (a< b+c && b< a+c && c< a+b) {
//     if (a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
//         cout << "VUONG " << endl;
//     else if (a==b && b==c)
//         cout << "DEU " << endl;
//     else if (a==c || a==b || b==c)
//         cout << "CAN " << endl;
//     else if (a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)
//         cout << "TU " << endl;
//     else
//         cout << "NHON " << endl;

// }else {
//         cout << "KHONG " << endl;
//     }
// return 0;
// }

//Góc phần tư
// #include <bits/stdc++.h>
// using namespace std;
// int main () {
//     int n, a;
//     cin >> n;
//     a=n/90;
//     if (n%90==0) 
//     if (a%4==0) cout << "1 " << endl;
//     else if (a%4==1) cout << "4 " << endl;
//     else if (a%4==2) cout << "3 " << endl;
//     else cout << "2 " << endl;
//     else 
//     if (a%4==0) cout << "4 " << endl;
//     else if (a%4==1) cout << "3 " << endl;
//     else if (a%4==2) cout << "2 " << endl;
//     else cout << "1 " << endl;
//     return 0;
// }

//Kt doi xung
//#include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   bool check = true;
//   long n, temp, temp1 = 0, m;
//   cin >> n;
//   m = n;
//   while(n > 0)
//   {
//     temp = n%10;
//     temp1 = temp1*10 + temp;
//     n /=10;
//   }
//   if(temp1 == m)
//   {
//     check = false;
//   }
//   cout << check;
//   return 0;
// }

//b5


//kt tinh chat mang
// viet ham 
// vd bai chan:
//giai nhanh: duyet truoc pt nao vp tra ve 0 ngc lai ve 1

// int chan (int a[], int n) {
//     for (int i=0; i<n; i++) {
//         if (a[i]%2!=0) return 0;
//     }
//     return 1;
// }
// khi ycbt ko cho dung ham:
//cach xu li:
//van kiem tra mang co toan so chan ko
//neu gap le thi: break; 
//dat co hieu: int flag=0
//khai bao int i=0; vi neu chay het toi n nghia la mang toan so chan
//if (i==n) cout << "YES " << endl;

