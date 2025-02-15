// #include <iostream>  
// using namespace std;
// int main() {

//     int nums [] = 10 20 30 40
//     cout << " Integer tanpa ilai bebas " << num << endl;  
//     cout << "elemen aray menggunakan pointer tanpa index" << &ptr << endl;  
//     cout << "nilai minimm dan maksimum tanpa index" << &num << endl;  
//     cout << "jumlah dan rata rata aray " << ptr << endl;  
//     cout << "Nilai dari num melalui ptr: " << *ptr << endl;  
    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int nums[] = {30, 20, 40, 10};  
//     int *ptr = nums;  
//     int min = *ptr;  
//     int max = *ptr;  
//     for(int i = 1; i < 4; i++) {
//         ptr++;  
//         if(*ptr < min) {
//             min = *ptr;  
//         }
//         if(*ptr > max) {
//             max = *ptr;  
//         }
//     }

    
//     cout << "Nilai minimum: " << min << endl;
//     cout << "Nilai maksimum: " << max << endl;

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int nums[] = {30, 20, 40, 10};  
    int *ptr = nums;  
    int min = *ptr;  
    int max = *ptr;  
    int sum = 0;  
    int count = 4;  

  
    for(int i = 0; i < count; i++) {
        sum += *ptr;  
        if(*ptr < min) {
            min = *ptr;  
        }
        if(*ptr > max) {
            max = *ptr;  
        }
        ptr++;  
    }

   
    double average = static_cast<double>(sum) / count;

   
    cout << "Jumlah: " << sum << endl;
    cout << "Rata-rata: " << average << endl;
    cout << "Nilai minimum: " << min << endl;
    cout << "Nilai maksimum: " << max << endl;

    return 0;
}


