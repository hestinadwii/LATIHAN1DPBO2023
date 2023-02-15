/* 
    Saya Hestina Dwi Hartiwi NIM 2108077 mengerjakan soal Latihan 1 dalam Praktikum
    mata kuliah Desain dan Pemrograman Berbasis Objek untuk keberkahan-Nya maka 
    saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

/* import library */
#include <string>
#include <iostream>

using namespace std;

/*--- Deklarasi Class ---*/
class Mahasiswa {
    /* Private Atributes */
    private:
        int code;
        string name, nim, major, faculty;
    public:
        /* Konstruktor */
        Mahasiswa()
        {
            this->code = '-';
            this->name = "";
            this->nim = "";
            this->major = "";
            this->faculty = "";
        }

        /* Getter and Setter */
        
        // Get Code
        int get_code()
        {
            return this->code;
        }

        // Get name
        string get_name()
        {
            return this->name;
        }

        // Get NIM
        string get_nim()
        {
            return this->nim;
        }

        // Get major
        string get_major()
        {
            return this->major;
        }

        // Get faculty
        string get_faculty()
        {
            return this->faculty;
        }
        
        // Set Code
        void set_code(int code)
        {
            this->code = code;
        }

        // Set name
        void set_name(string name)
        {
            this->name = name;
        }

        // Set NIM
        void set_nim(string nim)
        {
            this->nim = nim;
        }

        // Set Major
        void set_major(string major)
        {
            this->major = major;
        }

        // Set Faculty
        void set_faculty(string faculty)
        {
            this->faculty = faculty;
        }

        /* Destructor */
        ~Mahasiswa()
        {

        }
};








































































































// #include <iostream> //simple input dan output
// #include <fstream> //Membuat, menulis, dan membaca file
// //#include <iomanip>
// #include <conio.h>
// #include <string>
 
// using namespace std;
 
// class Mahasiswa
// {
//     //Data members
//     private:
//         int code;
//         string name;
//         int qty;
//         //member function
//     public:
//         // Mahasiswa()
//         // {
//         //     this->code = 0;
//         //     this->name = "";
//         //     this->qty = 0;
//         // }
        
//         // //return code;
//         // Mahasiswa(int code, string name, int qty)
//         // {
//         //     this->code = code;
//         //     this->name = name;
//         //     this->qty = qty;
//         // }

//         /* Getter and Setter */
//         // get code
//         int get_code() 
//         { 
//             return this->code; 
//         }

//         int update_qty(int num)
//         {
//             qty = qty-num;
//             return qty;
//         }
    
//         void inputCode()
//         {
//             while (!(cin >> code))
//             {
//                 cout << "ERROR: a number must be entered: ";
//                 cin.clear();
//                 cin.ignore(132, '\n');
//             }
//         }

//         void put_Mahasiswa(void);
// void get_Mahasiswa(void);
//         // int get_code (void)
//         // {
//         //     return code;
//         // }
// };
 
// //Member fungtion class Mahasiswa di luar class
 
// //Fuction Prototype
// void addRecord(void);
// void showAll(void);
// void showRecord(void);
// void deleteRecord(void);
// void modifRecord(void);
// void put_Mahasiswa(void);
// void get_Mahasiswa(void);
 
// //Global Declaration
// Mahasiswa it;        //membuat object Mahasiswa
// fstream file;   //membuat object fstream

// void Mahasiswa::get_Mahasiswa(void){
//         cout << "Masukkan Kode Mahasiswa: ";
//         inputCode();
//         //fflush(stdin);
//         cout << "Masukkan Nama Mahasiswa: "; cin >> name;
//         cout << "Masukkan Qty: "; cin >> qty;
//     }
 
// // void Mahasiswa::put_Mahasiswa(void){
// //     cout << setw(6) << code << setw(15) << name << setw(6) << qty << endl; //setup dengan lebar field membutuhkan library iomanip
// // }

// void addRecord(){
//     char ch = 'y';
//     file.open("stock.dat",ios::app|ios::binary);
//     while(ch=='y'||ch=='Y'){
//         it.get_Mahasiswa();
//         //write object into file
//         file.write((char*)&it, sizeof(it));
//         cout<<"Tambah Record lagi ... (y/n)?";
//         cin>>ch;
//     }
//     file.close();
// }
 
// void showAll(){
//     file.open("stock.dat", ios::in|ios::binary);
//     if(!file)
//     {
//         cout <<"File not Found";
//         exit(0);
//     }else{
//         file.read((char*)&it, sizeof(it));
//         while (!file.eof()){
//             it.put_Mahasiswa();
//             file.read((char*)&it, sizeof(it));
//         }
//     }
//     file.close();
// }
 
// void showRecord(void){
//     int no, flag = 0;
//     file.open("stock.dat", ios::in|ios::binary);
//     if (!file){ //Jika file tidak bisa dibuka
//         cout<<"file tidak ditemukan";
//         exit(0);
//     }else{
//         cout<<"Masukkan code yang dicari: ";
//         cin>>no;
//         //Baca record dari file dan dimasukkan ke object
//         while(!file.eof()){ //ketika akhir dari file
//             if(no==it.get_code()){
//                 flag=1;
//                 cout<<"-----------------------------------------\n";
//                 cout<<setw(6)<<"Kode"<<setw(15)<<"Nama"<<setw(6)<<"Qty"<<endl;
//                 cout<<"-----------------------------------------\n";
//                 it.put_Mahasiswa();
//                 cout<<"-----------------------------------------\n";
//                 break;
//             }
//             file.read((char*)&it, sizeof(it));
//         }
//         if (flag==0){
//             cout<<"Mahasiswa tidak ditemukan ....\n";
//         }
//     }
//     file.close();
// }
 
// void deleteRecord(void){
//     int no;
//     cout<<"Masukkan kode Mahasiswa untuk dihapus: "  ;
//     cin>>no;
//     ofstream file2;  //stream object
//     //open new.dat file for write operation
//     file2.open("new.dat",ios::binary);
//     file.open("stock.dat", ios::in|ios::binary);
//     if(!file)    //if open file fails
//     {
//         cout<<"file not found";
//         exit(0);
//     }else{
//         //read record form stock.dat file into object
//         file.read((char*)&it, sizeof(it));
//         while(!file.eof()){
//             if(no != it.get_code()){
//                 file2.write((char*)&it, sizeof(it));
//             }
//             file.read((char*)&it, sizeof(it));
//         }
//     }
//     file2.close();
//     file.close();
//     remove("stock.dat");
//     rename("new.dat","stock.dat");
// }
 
// void modifRecord(void){
//     int no, num;
//     cout<<"Masukkan kode Mahasiswa untuk dirubah: "; cin>>no;
//     cout<<"Masukkan Jumlah Mahasiswa yang akan di keluarkan: "; cin>>num;
//     file.open("stock.dat", ios::in|ios::out|ios::binary);
//     if(!file){
//         cout<<"File not found";
//         exit(0);
//     }
//     while(file.read((char*)&it, sizeof(it))){
//         if(it.get_code()==no){
//             it.update_qty(num);
//             int pos = sizeof(it);
//             file.seekp(-pos, ios::cur);
//             file.write((char*)&it, sizeof(it));
//         }
//     }
//     file.close();
// }