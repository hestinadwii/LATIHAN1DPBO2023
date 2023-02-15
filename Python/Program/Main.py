# # 
#     Saya Hestina Dwi Hartiwi NIM 2108077 mengerjakan soal Latihan 1 dalam Praktikum
#     mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya maka 
#     saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
# #

#--- Import Class from Mahasiswa.py ---#
from Mahasiswa import Mahasiswa

## Instansiasi object Mahasiswa ke dalam array list
students = []

## method untuk menu
def menu():
    print("1. Display")
    print("2. Insert")
    print("3. Search")
    print("4. Delete")
    print("5. Update")
    print("0. Exit")

## method untuk menampilkan data
def displayData():
    i = 0
    print("\n--------------------------------------------------------------------")
    if len(students) == 0: #---> jika belum ada isi
        print("No Record Can Be Displayed")
    for student in students:
        print(str(i + 1) + ". ", student.get_name())
        print("P. Key  : ", student.get_code())
        print("NIM     : ", student.get_nim())
        print("Major   : ", student.get_major())
        print("Faculty : ", student.get_faculty())
        i += 1
    print("--------------------------------------------------------------------")
        
## method untuk insert data
def insertData():
    code = int(input("\nInsert Primary Key: "))
    name = str(input("Insert Name: "))
    nim = str(input("Insert NIM: "))
    major = str(input("Insert Major: "))
    faculty = str(input("Insert Faculty: "))

    # masukan data ke list objek mahasiswa
    students.append(Mahasiswa(code, name, nim, major, faculty))
    print("\n--------------------------------------------------------------------")
    print("Data Has Been Added Successfully")
    print("--------------------------------------------------------------------")

## method untuk mencari data
def searchData():
    found = False # var buat cek
    searchedCode = int(input("\nEnter the Primary Key You're looking for: "))
    i = 0
    # tampilkan data yang dicari
    print("\n--------------------------------------------------------------------")
    for student in students:
        if student.get_code() == searchedCode:
            print(str(i + 1) + ". ", student.get_name())
            print("P. Key  : ", student.get_code())
            print("NIM     : ", student.get_nim())
            print("Major   : ", student.get_major())
            print("Faculty : ", student.get_faculty())
            found = True
    
    if (found == False): #jika tidak ditemukan 
        print("Sorry, No Data Found")
    print("--------------------------------------------------------------------")

## method untuk menghapus data
def deleteData():
    found = False # var buat cek
    deletedCode = int(input("\nEnter the Primary Key You Want to Delete: "))
    for student in students:
        if student.get_code() == deletedCode: #jika ditemukan, maka hapus
            students.remove(student)
            found = True
    print("\n--------------------------------------------------------------------")
    if (found == False): # jika tidak ditemukan
        print("Sorry, No Data Found")
    else:
        print("Data Has Been Deleted Successfully")
    print("--------------------------------------------------------------------")

## method untuk update data
def updateData():
    found = False # var buat cek
    updatedCode = int(input("\nEnter the Primary Key You Want to Update: "))
    for student in students:
        if student.get_code() == updatedCode: # jika ditemukan, maka input data yang baru
            # masukkan data baru ke list objek mahasiswa menggantikan yang lama
            newName = str(input("\nInsert Updated Name : "))
            student.set_name(newName)
            newNim = str(input("Insert Updated NIM : "))
            student.set_nim(newNim)
            newMajor = str(input("Insert Updated Major : "))
            student.set_major(newMajor)
            newFaculty = str(input("Insert Updated Faculty : "))
            student.set_faculty(newFaculty)
            found = True

    print("\n--------------------------------------------------------------------")
    if (found == False): # jika tidak ditemukan
        print("Sorry, No Data Found")
    else:
        print("Data Has Been Updated Successfully")
    print("--------------------------------------------------------------------")

## Tampilan Awal ##
print("--------------------------------------------------------------------------------")
print("| WELCOME TO THE SIMPLE CRUD SYSTEM DEVELOPED WITH PYTHON PROGRAMMING LANGUAGE |")
print("| Please Enter the Correct Number That Represents the Menu!                    |")
print("--------------------------------------------------------------------------------\n")

# MENU
menu ()
# Masukan angka yang mempresentasikan menu sesuai mau melakukan proses apa
option = int(input("\nEnter the Number: "))

# Perulangan CRUD selama belum exit
while option != 0:
    if option == 1:
        displayData()
    elif option == 2:
        insertData()
    elif option == 3:
        searchData()
    elif option == 4:
        deleteData()
    elif option == 5:
        updateData()
    else:
        print("!!! Invalid Number !!!")
    
    print()
    menu()
    option = int(input("\nEnter the Number: "))

# jika exit dari program
print("\nYou Choose to Exit from the System.")
print("Thank You and Have a Great Day ^^")