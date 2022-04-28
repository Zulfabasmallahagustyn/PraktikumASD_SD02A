#include <iostream>

using namespace std;

int main() {
    char beforeTransform, afterTransform, *beforeTransformPtr;
    beforeTransformPtr = &beforeTransform;

	cout<<" Inputlah Sebuah Huruf Kecil           : ";
	cin >> beforeTransform;
	cout<<" Setelah Dirubah Menjadi Huruf Kapital : ";
    afterTransform = *beforeTransformPtr - 32;
    cout << afterTransform << endl;

    return 0;
}
