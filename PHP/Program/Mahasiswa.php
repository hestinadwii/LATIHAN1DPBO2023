<!-- /* 
    Saya Hestina Dwi Hartiwi NIM 2108077 mengerjakan soal Latihan 1 dalam Praktikum
    mata kuliah Desain dan Pemrograman Berbasis Objek untuk keberkahan-Nya maka 
    saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/ -->

<?php

class Student
{
    // Private attributes
    private $code = '';
    private $name = '';
    private $nim = '';
    private $major = '';
    private $faculty = '';

    // Constructor
    public function __construct($code = '', $name = '', $nim = '', $major = '', $faculty = '')
    {
        $this->code = $code;
        $this->name = $name;
        $this->nim = $nim;
        $this->major = $major;
        $this->faculty = $faculty;
    }
    //---> Getter and Setter <---//
    // Set code (primary key)
    public function setCode($code)
    {
        $this->code = $code;
    }

    // Set Name
    public function setName($name)
    {
        $this->name = $name;
    }

    // Set NIM
    public function setNim($nim)
    {
        $this->nim = $nim;
    }

    // Set Major
    public function setMajor($major)
    {
        $this->major = $major;
    }

    // Set Faculty
    public function setFaculty($faculty)
    {
        $this->faculty = $faculty;
    }

    // Get Code
    public function getCode()
    {
        return $this->code;
    }

    // Get Name
    public function getName()
    {
        return $this->name;
    }

    // Get NIM
    public function getNim()
    {
        return $this->nim;
    }

    // Get Major
    public function getMajor()
    {
        return $this->major;
    }

    // Get Faculty
    public function getFaculty()
    {
        return $this->faculty;
    }
}

?>