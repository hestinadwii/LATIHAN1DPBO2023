/* 
    Saya Hestina Dwi Hartiwi NIM 2108077 mengerjakan soal Latihan 1 dalam Praktikum
    mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya maka 
    saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

/* import library */
import java.util.Scanner;
import java.util.ArrayList;

/* Main */
public class Main
{
    public static void main(String[] args)
    {
        // Instansiasi object Mahasiswa ke dalam array list
        ArrayList<Mahasiswa> list = new ArrayList<>();
        
        // attribute declarations
        int code, option;                 //---// code = primary key, option = menu              
        String name, nim, major, faculty; //---// untuk input
        boolean found;                    //---// untuk cek

        // Get input from user
        Scanner scanInt = new Scanner(System.in); //---> integer input
        Scanner scanStr = new Scanner(System.in); //---> string input

        // Tampilan Awal //
        System.out.println('\n' + "------------------------------------------------------------------------------");
        System.out.println("| WELCOME TO THE SIMPLE CRUD SYSTEM DEVELOPED WITH JAVA PROGRAMMING LANGUAGE |");
        System.out.println("| Please Enter the Correct Number That Represents the Menu!                  |");
        System.out.println("------------------------------------------------------------------------------");

        // Perulangan CRUD selama belum exit
        do
        {
            /* MENU */
            System.out.print('\n');
            System.out.println("1. Display");
            System.out.println("2. Insert");
            System.out.println("3. Search");
            System.out.println("4. Delete");
            System.out.println("5. Update");
            System.out.println("0. Exit");
            System.out.print('\n');

            /* Masukan angka yang mempresentasikan menu sesuai mau melakukan proses apa */
            System.out.print("Enter the Number : ");
            option = scanInt.nextInt();
            if (option > 5 || option < 0) //---> jika input angka yang tidak sesuai
            {
                System.out.println('\n' + "!!! Invalid Number !!!");
            }
            else if (option == 0) //---> jika exit dari program
            {
                System.out.println('\n' + "You Choose to Exit from the System.");
                System.out.println("Thank You and Have a Great Day ^^");
            }

            switch(option)
            {
                /* method untuk menampilkan data */
                case 1:
                    System.out.print('\n');
                    System.out.println("--------------------------------------------------------------------");
                    for (int i = 0; i <list.size(); i++)
                    {
                        System.out.println(Integer.toString(i + 1) + ". " + list.get(i).getName());
                        System.out.println("P. key  : " + list.get(i).getCode());
                        System.out.println("NIM     : " + list.get(i).getNim()); 
                        System.out.println("Major   : " + list.get(i).getMajor());
                        System.out.println("Faculty : " + list.get(i).getFaculty());
                    }

                    if (list.size() == 0) //---> jika belum ada isi
                    {
                        System.out.print("No Record Can Be Displayed" + '\n');
                    }
                    System.out.println("--------------------------------------------------------------------");
                break;

                /* method untuk insert data */
                case 2:
                    System.out.print('\n' + "Insert Primary Key : ");
                    code = scanInt.nextInt();
                    /* ihhh try catch nya bikin error, jadinya yang integer input biasa aja gk pake try catch deh hiksss :( */
                    // try {
                    //     code = scanInt.nextInt();
                    // }
                    // catch (Exception e)
                    // {
                    //     System.out.println("Primary Key Error! Must be Integer Value");
                    // }
                    System.out.print("Insert Name : ");
                    name = scanStr.next();
                    System.out.print("Insert NIM : ");
                    nim = scanStr.next();
                    System.out.print("Insert Major : ");
                    major = scanStr.next();
                    System.out.print("Insert Faculty : ");
                    faculty  = scanStr.next();

                    // masukan data ke list objek mahasiswa
                    list.add(new Mahasiswa(code, name, nim, major, faculty));
                    System.out.print('\n' + "--------------------------------------------------------------------");
                    System.out.println('\n' + "Data Has Been Added Successfully");
                    System.out.println("--------------------------------------------------------------------");
                break;

                /* method untuk mencari data */
                case 3:
                    found = false; //---// var buat cek
                    System.out.print('\n' + "Enter the Primary Key You're Looking For : ");
                    int searchedCode = scanInt.nextInt();
                    
                    // tampilkan data yang dicari
                    System.out.print('\n' + "--------------------------------------------------------------------" + '\n');
                    for (int i = 0; i <list.size(); i++)
                    {
                        if(list.get(i).getCode() == searchedCode)
                        {
                            System.out.println(Integer.toString(i + 1) + ". " + list.get(i).getName());
                            System.out.println("P. Key  : " + list.get(i).getCode());
                            System.out.println("NIM     :" + list.get(i).getNim()); 
                            System.out.println("Major   :" + list.get(i).getMajor());
                            System.out.println("Faculty :" + list.get(i).getFaculty());
                            found = true;
                        }
                    }

                    if (!found) //---> jika tidak ditemukan 
                    {
                        System.out.println("Sorry, No Data Found");
                    }
                    System.out.println("--------------------------------------------------------------------");
                break;

                /* method untuk menghapus data */
                case 4:
                    found = false; // var buat cek
                    System.out.print('\n' + "Enter the Primary Key You Want to Delete: ");
                    int deletedCode = scanInt.nextInt();
                    System.out.print('\n' + "--------------------------------------------------------------------");
                    for (int i = 0; i <list.size(); i++)
                    {
                        if(list.get(i).getCode() == deletedCode) //---> jika ditemukan, maka hapus
                        {
                            list.remove(i);
                            found = true;
                        }
                    }

                    if (!found) //---> jika tidak ditemukan
                    {
                        System.out.println('\n' + "Sorry, No Data Found");
                    }
                    else
                    {
                        System.out.println('\n' + "Data Has Been Deleted Successfully");
                    }
                    System.out.println("--------------------------------------------------------------------");
                break;

                /* method untuk update data */
                case 5:
                    found = false; //---// var buat cek
                    System.out.print('\n' + "Enter the Primary Key You Want to Update: ");
                    int checkCode = scanInt.nextInt();
                    for (int i = 0; i <list.size(); i++)
                    {
                        if(list.get(i).getCode() == checkCode) //---> jika ditemukan, maka input data yang baru
                        {
                            int updatedCode = checkCode;
                            System.out.print('\n' + "Insert Updated Name : ");
                            String updatedName = scanStr.next();
                            System.out.print("Insert Updated NIM : ");
                            String updatedNim = scanStr.next();
                            System.out.print("Insert Updated Major : ");
                            String updatedMajor = scanStr.next();
                            System.out.print("Insert Updated Faculty : ");
                            String updatedFaculty = scanStr.next();

                            // masukkan data baru ke list objek mahasiswa menggantikan yang lama
                            list.set(i, new Mahasiswa(updatedCode, updatedName, updatedNim, updatedMajor, updatedFaculty));
                            found = true;
                        }
                    }
                    System.out.print('\n' + "--------------------------------------------------------------------");
                    if (!found) //---> jika tidak ditemukan
                    {
                        System.out.println('\n' + "Sorry, No Data Found");
                    }
                    else //---> jika berhasil
                    {
                        System.out.println('\n' + "Data Has Been Updated Successfully");
                    }
                    System.out.println("--------------------------------------------------------------------");
                break;
            }
        } while (option != 0);
    }
}