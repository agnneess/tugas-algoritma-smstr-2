#include<iostream>;                                                                        //Header, memasukkan pustaka iostream kedalam program
using namespace std;                                                                       //Berfungsi pada cout agar didepannya tidak menggunakan std
void swap(int arr[] , int pos1, int pos2){                                                //Membuat fungsi asli
int temp;                                                                                //Membuat variabel bernama temp dengan tipe data int untuk bilangan bulat
temp = arr[pos1];                                                                       //Nilai pada arr[pos1] dimasukkan pada var temp
arr[pos1] = arr[pos2];                                                                 //Nilai pada arr[pos2] dimasukkan pada var arr[pos1]
arr[pos2] = temp;                                                                     //Nilai pada temp dimasukkan pada var arr[pos2]
}
int partition(int arr[], int low, int high, int pivot){                             //Membuat fungsi asli
int i = low;                                                                       //Var i bernilai low / nilai low dimasukkan pada var i
int j = low;                                                                      //Var j bernilai low / nilai low dimasukkan pada var i
while( i <= high){                                                               //Situasi ketika i lebih besar sama dengan high
if(arr[i] > pivot){                                                             //Jika arr[i] lebih besar dari pada pivot
i++;                                                                           //Jik syarat terpenuhi akan terjadi inklemer / penambahan nilai sebanyak 1 pada var i
} else {                                                                      //Situasi lain jika tidak memenuhi if
swap(arr,i,j);                                                               //Memanggil fungsi swap
i++;                                                                        //inklemer / penambahan nilai sebanyak 1 pada var i
j++;                                                                       //inklemer / penambahan nilai sebanyak 1 pada var j
}
}
return j-1;                                                              //Mengembalikan nilai j tetapi nilai tersebut dikurangi 1
}
void quickSort(int arr[], int low, int high){                          //Membuat fungsi asli
if(low < high){                                                       //Jika nilai var low lebih kecil dari high
int pivot = arr[high];                                               //Memasukkan nilai arr[high] pada var pivot
int pos = partition(arr, low, high, pivot);                         //Memasukkan nilai fungsi partition pada var pos
quickSort(arr, low, pos-1);                                        //Memanggil fungsi quickSort tetapi pos nya dikurangi 1
quickSort(arr, pos+1, high);                                      //Memanggil fungsi quickSort tetapi pos nya ditambah 1
}
}
int main(){                                                     //Membuat fungsi utama
int n;                                                         //Membuat var n dengan tipe data int untuk bilangan bulat
cout << "Tentukan panjang array : ";                          //Menampilkan kalimat yang ada didalam tanda (“)
cin>>n;                                                      //Menginput nilai n secara manual
int arr[n];                                                 //Membuat var arr[n] dengan tipe data int
for( int i = 0 ; i < n; i++){                              //Membuat perulangan dari 0 sampai nilai kurang dari n dengan var i
cin >> arr[i];                                            //Menginput nilai arr[i] secara manual sebanyak kurang dari n
}
quickSort(arr, 0 , n-1);                                 //Memanggil fungsi tetapi nilai var n dikurangi 1
cout<<"Berikut adalah array yang telah di sortir: ";    //Menampilkan kalimat didalam (“)
for( int i = 0 ; i < n; i++){                          //Membuat perulangan dari 0 sampai nilai kurang dari n dengan var i
cout<< arr[i]<<"\t";                                  //Menampilkan semua nilai arr[i] dan diberi jarak cukup jauh karena \t
}
}                                                    //Program selesai