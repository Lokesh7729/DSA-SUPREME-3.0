#include<iostream> 
using namespace std;

int main(){
    int n, count = 0; 
    // Yahaan 'n' ek number hai jo user input karega aur 'count' variable hai jo number ke divisors (bhaajak) ki counting karega.

    cout << "Enter a number : "; 
    // Yahaan par user se ek number input karne ke liye bola ja raha hai.

    cin >> n; 
    // User jo number input karega, usko 'n' mein store kiya ja raha hai.

    for (int i = 1; i*i <= n; i++) { 
        // Yeh loop 1 se lekar √n tak chalega, matlab jab tak 'i*i' 'n' se chhota ya barabar ho. 
        // Yeh isliye kiya ja raha hai kyunki agar koi number 'n' ko divide karta hai aur woh √n se bada hai, toh uska ek chhota pair divisor hamesha √n se chhota hoga.
        // Isliye sirf √n tak check karna sufficient hai.

        if (n % i == 0) { 
            // Agar 'n' 'i' se divide ho jata hai (remainder 0 aata hai), toh iska matlab 'i' ek divisor hai.

            count++; 
            // Jab bhi 'i' divisor hota hai, toh 'count' ko 1 se badha diya jaata hai.

            if ((n / i) != i)  
                count++; 
            // Yahaan check kiya ja raha hai ki 'i' aur 'n / i' alag-alag hain ya nahi. 
            // Agar alag hain, toh 'n / i' bhi ek divisor hai, toh 'count' ko fir se 1 se badha dete hain. 
            // Agar dono same hain (jaise perfect square numbers ke case mein), toh ek hi baar count kiya jaata hai.
        }
    }

    if (count == 2) 
        cout << "prime"; 
    else 
        cout << "not prime"; 
    // Agar number ke paas sirf 2 divisors hain (1 aur 'n' khud), toh number prime hai, warna prime nahi hai.
}
