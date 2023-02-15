<!-- /* 
    Saya Hestina Dwi Hartiwi NIM 2108077 mengerjakan soal Latihan 1 dalam Praktikum
    mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya maka 
    saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/ -->

<?php
    // import file
    require ('Mahasiswa.php');

    // buat array
    $arrayStudent = array();

    // input data ke array secara hard code
    $student1 = new Student('1', 'Jeon Jungkook', '970901', 'English Language and Literature', 'Faculty of Languages and Literatures');
    $student2 = new Student('2', 'Kim Taehyung', '951230', 'Civil Engineering', 'Faculty of Engineering', 'Faculty of Engineering');
    $student3 = new Student('3', 'Park Jimin', '951013', 'Computer Science', 'Faculty of Mathematic and Computer Science');
    
    // Push data ke array students
    array_push($arrayStudent, $student1);
    array_push($arrayStudent, $student2);
    array_push($arrayStudent, $student3);
    
    // Judul untuk tampilan di localhost
    echo '<hr>';
    echo '<hr>';
    echo "<h2><b><center>Top 3 Students in BigHit Music University</center></b></h2>";
    echo '<hr>';
    echo '<hr>';

    // Menampilkan array
    for ($i = 0; $i < count($arrayStudent); $i++) 
    {
        echo "<h3>" . $arrayStudent[$i]->getCode() . "." . " " . $arrayStudent[$i]->getName() . "</h3>";
        echo "<h3>" . "NIM      : " . $arrayStudent[$i]->getNim() . "</h3>";
        echo "<h3>" . "Major    : " . $arrayStudent[$i]->getMajor() . "</h3>";
        echo "<h3>" . "Faculty  : " . $arrayStudent[$i]->getFaculty() . "</h3>";
        echo "<br />";
        echo '<hr>';
    }

?>