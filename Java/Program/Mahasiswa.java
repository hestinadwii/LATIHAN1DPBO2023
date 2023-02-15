/* 
    Saya Hestina Dwi Hartiwi NIM 2108077 mengerjakan soal Latihan 1 dalam Praktikum
    mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya maka 
    saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

/*--- Deklarasi Class ---*/
public class Mahasiswa 
{
    /* Private Atributes */
    private int code;       //---> untuk primary key
    private String name;    //---> untuk nama
    private String nim;     //---> untuk NIM
    private String major;   //---> untuk program studi
    private String faculty; //---> untuk fakultas

    /* Konstruktor */
    public Mahasiswa(int code, String name, String nim, String major, String faculty) {
        this.code = code;
        this.name = name;
        this.nim = nim;
        this.major = major;
        this.faculty = faculty;
    }

    /* Getter and Setter */
    
    //--- Get Code ---//
    public int getCode() {
        return this.code;
    }

    //--- Get Name ---//
    public String getName() {
        return this.name;
    }

    //--- Get NIM ---//
    public String getNim() {
        return this.nim;
    }

    //--- Get Major ---//
    public String getMajor() {
        return this.major;
    }

    //--- Get Faculty ---//
    public String getFaculty() {
        return this.faculty;
    }

    //--- Set Code ---//
    public void setCode(int code)
    {
        this.code = code;
    }

    //--- Set Name ---//
    public void setName(String name)
    {
        this.name = name;
    }

    //--- Set NIM ---//
    public void setNim(String nim)
    {
        this.nim = nim;
    }

    //--- Set Major ---//
    public void setMajor(String major)
    {
        this.major = major;
    }

    //--- Set Faculty ---//
    public void setFaculty(String faculty)
    {
        this.faculty = faculty;
    }
}