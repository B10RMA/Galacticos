/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/

#include <iostream>
using namespace std;
int main()
{
//###INSERT CODE HERE -
int n; cin >> n;
int *a= new int[n];
for (int i=0 ;i<n; i++) {
	cin >> a[i];
}
int x;
int m; cin >> m;
for (int i=0; i<m; i++) {
	cin >> x;
	for (int i=0; i<n; i++) {
		if (a[i]==x){
			cout << i << endl;
			break;
		}
    }
        if (i==n)
			cout << "-1" << endl;
		

}
    return 0;
}