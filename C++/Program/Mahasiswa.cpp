/* 
    Saya Hestina Dwi Hartiwi NIM 2108077 mengerjakan soal Latihan 1 dalam Praktikum
    mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya maka 
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