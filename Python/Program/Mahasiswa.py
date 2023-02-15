# # 
#     Saya Hestina Dwi Hartiwi NIM 2108077 mengerjakan soal Latihan 1 dalam Praktikum
#     mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya maka 
#     saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
# #

#--- Deklarasi Class ---#
class Mahasiswa:

    ## Private Attributes 
    __code = ""
    __name = ""
    __nim = ""
    __major = ""
    __faculty = ""

    ## Constructors
    def __init__(self, code, name, nim, major, faculty):
        self.__code = code
        self.__name = name
        self.__nim = nim
        self.__major = major
        self.__faculty = faculty
    
    # Getter and Setter #
    # Get Code
    def get_code (self):
        return self.__code

    # Get Name
    def get_name (self):
        return self.__name
    
    # Get NIM
    def get_nim (self):
        return self.__nim
    
    # Get Major
    def get_major (self):
        return self.__major

    # Get Faculty
    def get_faculty (self):
        return self.__faculty
    
    # set Code
    def set_code (self, code):
        self.__code = code
    
    # Set Name
    def set_name (self, name):
        self.__name = name
    
    # set NIM
    def set_nim (self, nim):
        self.__code = nim
    
    # set Major
    def set_major (self, major):
        self.__code = major

    # set Faculty
    def set_faculty (self, faculty):
        self.__code = faculty