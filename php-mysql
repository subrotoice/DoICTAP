// Create connection
$conn = mysqli_connect("localhost", "root", "");

// Check connection
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}
echo "Connected successfully";
---------Start Working-----------------------------------------
// Create database
$sql = "CREATE DATABASE ictap";

if ($conn->query($sql) === TRUE) {
    echo "DB ictap created successfully";
}

// sql to create table
$sql = "CREATE TABLE student (
id INT(6) AUTO_INCREMENT PRIMARY KEY,
firstname VARCHAR(30) NOT NULL,
lastname VARCHAR(30) NOT NULL,
DOB DATE
)";

// Show Data
$conn = new mysqli('localhost', 'root', '', 'ictap');
$sql= "SELECT * FROM student";
$result = $conn->query($sql);
$row = $result->fetch_assoc();

// Insert Data
$sql = "insert into student (name, age) values ('$_GET[name]', '$_GET[age]')";
$conn->query($sql);

// Delete
$sql = "delete from student where age=44";
$conn->query($sql);
