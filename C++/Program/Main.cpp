/* 
    Saya Hestina Dwi Hartiwi NIM 2108077 mengerjakan soal Latihan 1 dalam Praktikum
    mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya maka 
    saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

/* import library */
#include <bits/stdc++.h>
#include "Mahasiswa.cpp"

/* Main */
int main()
{
    // Instansiasi object
    Mahasiswa dataMahasiswa;

    // deklarasi list
    list<Mahasiswa> llist;

    // attribute declarations
    int i, code, option;                //---// i = iterator, code = primary key, option = menu
    string name, nim, major, faculty;   //---// untuk input
    bool found;                         //---// untuk cek

     // Tampilan Awal //
    cout << "-----------------------------------------------------------------------------" << endl;
    cout << "| WELCOME TO THE SIMPLE CRUD SYSTEM DEVELOPED WITH C++ PROGRAMMING LANGUAGE |" << endl;
    cout << "| Please Enter the Correct Number That Represents the Menu!                 |" << endl;
    cout << "-----------------------------------------------------------------------------" << '\n' << endl;
    
    // Perulangan CRUD selama belum exit
    do
    {
        /* MENU */
        cout << "1. Display" << endl;
        cout << "2. Insert" << endl;
        cout << "3. Search" << endl;
        cout << "4. Delete" << endl;
        cout << "5. Update" << endl;
        cout << "0. Exit" << endl;

        /* Masukan angka yang mempresentasikan menu sesuai mau melakukan proses apa */
        cout << '\n' << "Enter the Number : ";
        cin >> option;
        if (option > 5 || option < 0) //---> jika input angka yang tidak sesua
        {
            cout << "!!! Invalid Number !!!" << endl;
        }
        else if (option == 0) //---> jika exit dari program
        {
            cout << '\n' << "You Choose to Exit from the System." << endl;
            cout << "Thank You and Have a Great Day ^^" << endl;
        }

        switch (option)
        {
        /* method untuk menampilkan data */
        case 1:
            i = 0;
            cout << '\n' << "--------------------------------------------------------------------" << endl;
            for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it ++) 
            {
                cout << (i + 1) << ". " << it->get_name() << endl;
                cout << "P. Key  : " << it->get_code() << endl;
                cout << "NIM     : " << it->get_nim() << endl;
                cout << "Major   : " << it->get_major() << endl;
                cout << "Faculty : " << it->get_faculty() << endl;
                i++;
            }
            if (llist.size() == 0) //---> jika belum ada isi
            {
                cout << "No Record Can Be Displayed" << endl;
            }
            cout << "--------------------------------------------------------------------" << '\n' << endl;
            break;

        /* method untuk insert data */
        case 2:
            cout << '\n' << "Insert Primary Key : ";
            cin >> code;
            cout << "Insert Name : ";
            cin >> name;
            cout << "Insert NIM : ";
            cin >> nim;
            cout << "Insert Major : ";
            cin >> major;
            cout << "Insert Faculty : ";
            cin >> faculty;

            // masukan data ke list objek mahasiswa
            dataMahasiswa.set_code(code);
            dataMahasiswa.set_name(name);
            dataMahasiswa.set_nim(nim);
            dataMahasiswa.set_major(major);
            dataMahasiswa.set_faculty(faculty);
            llist.push_back(dataMahasiswa);
            cout << '\n' << "--------------------------------------------------------------------" << endl;
            cout << "Data Has Been Added Successfully" << endl;
            cout << "--------------------------------------------------------------------" << '\n' << endl;
            break;

        /* method untuk mencari data */
        case 3:
            i = 0;
            found = false; // var buat cek
            int searchedCode;
            cout << '\n' << "Enter the Primary Key You're Looking For : ";
            cin >> searchedCode;
            // tampilkan data yang dicari
            cout << '\n' << "--------------------------------------------------------------------" << endl;
            for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it ++) 
            {
                if(it->get_code() == searchedCode)
                {
                    cout << (i + 1) << ". " << it->get_name() << endl;
                    cout << "P. Key  : " << it->get_code() << endl;
                    cout << "NIM     : " << it->get_nim() << endl;
                    cout << "Major   : " << it->get_major() << endl;
                    cout << "Faculty : " << it->get_faculty() << endl;
                    found = true;
                    i++;
                }
            }

            if (! found) //---> jika tidak ditemukan 
            {
                cout << "Sorry, No Data Found" << endl;
            }
            cout << "--------------------------------------------------------------------"<< '\n' << endl;
            break;
        
        /* method untuk menghapus data */
        case 4:
            found = false; // var buat cek
            cout << '\n' << "Enter the Primary Key You Want to Delete: ";
            int deletedCode;
            cin >> deletedCode;
            for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it ++) 
            {
                if(it->get_code() == deletedCode) //---> jika ditemukan, maka hapus
                {
                    llist.erase(it);
                    found = true;
                    break;
                }
            }

            cout << '\n' << "--------------------------------------------------------------------" << endl;
            if (! found) //---> jika tidak ditemukan
            {
                cout << "Sorry, No Data Found" << endl;
            }
            else
            {
                cout << "Data Has Been Deleted Successfully" << endl;
            }
            cout << "--------------------------------------------------------------------" << '\n' << endl;
            break;

        /* method untuk update data */
        case 5:
            found = false; // var buat cek
            int updatedCode;
            string updatedName, updatedNim, updatedMajor, updatedFaculty;
            cout << '\n' << "Enter the Primary Key You Want to Update: ";
            cin >> updatedCode;
            for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it ++) 
            {
                if(it->get_code() == updatedCode) //---> jika ditemukan, maka input data yang baru
                {
                    // masukkan data baru ke list objek mahasiswa menggantikan yang lama
                    cout << '\n' << "Insert Updated Name : ";
                    cin >> updatedName;
                    it->set_name(updatedName);
                    cout << "Insert Updated NIM : ";
                    cin >> updatedNim;
                    it->set_nim(updatedNim);
                    cout << "Insert Updated Major : ";
                    cin >> updatedMajor;
                    it->set_major(updatedMajor);
                    cout << "Insert Updated Faculty : ";
                    cin >> updatedFaculty;
                    
                    it->set_faculty(updatedFaculty);
                    found = true;
                }
            }

            cout << '\n' << "--------------------------------------------------------------------" << endl;
            if (!found) //---> jika tidak ditemukan
            {
                cout << "Sorry, No Data Found" << endl;
            }
            else //---> jika berhasil
            {
                cout << "Data Has Been Updated Successfully" << endl;
            }
            cout << "--------------------------------------------------------------------" << '\n' << endl;

            break;
        }
    } while (option != 0);
    
    return 0;
}