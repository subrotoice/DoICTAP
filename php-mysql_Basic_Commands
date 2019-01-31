// Create connection
$conn = mysqli_connect("localhost", "root", "");

// Check connection
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}
echo "Connected successfully";
---------Start Working-----------------------------------------
// Create database
$sql = "CREATE DATABASE ictap"; //CREATE DATABASE IF NOT EXISTS DBName

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

================Some Modify Command============
alter table students add dist varchar(255);
alter table students drop dist;
alter table students modify dist int;
alter table students change dist dist3 date;

============HTML==========
<html>
	<head>
		<title>
			Insert Recore using PHP 1:47pm - 2:55
		</title>
	</head>
	
	<body>
		<?php
			//error_reporting(0);
			$conn=mysqli_connect("localhost","root","","megla");
			if(!$conn){
				die("Error: " . $conn->error);
			}
			
			if(isset($_GET['name'])){
				var_dump($_GET);
				$sql="insert into user_records (name, id, designation, dbo) values ('$_GET[name]','$_GET[id]','$_GET[designation]','$_GET[dob]')";
				if($conn->query($sql)){
					echo "Ensert Record";
				} else {
					echo "Error: " . $conn->error;
				}
			}
			

			
		?>
		<h1>Enter Values name,idno,designation,data of birth</h1>
		<form action="index.php" method="get">
			<input type="text" name="name" placeholder="Name...">
			<input type="text" name="id" placeholder="Id...">
			<input type="text" name="designation" placeholder="Designation...">
			<input type="date" name="dob" placeholder="data of birth" value="1990-12-05" >
			<input type="submit" value="Send">
		</form>
		
		<h2>All Data</h2>
			<?php
				$sql="Select * from user_records";
				$result = $conn->query($sql);
				while($row=$result->fetch_assoc()){
					var_dump($row);
				}
				
				$conn->close();
			?>
	</body>
</html>


=============Connection and Table Create======================
<?php
	$conn=mysqli_connect("localhost","root","");
	if(!$conn){
		die("Connection Error" . mysqli_connect_error());
	} else {
		echo "Connect Succefully";
	}
	
	$sql="CREATE DATABASE IF NOT EXISTS megla";
	if($conn->query($sql)){
		echo "Database created";
	} else {
		echo "Error" . $conn->error;
	}
	
	mysqli_select_db($conn,"megla");
	$sql="create table user_records (
			name varchar(225),
			id varchar(225) PRIMARY KEY,
			designation varchar(225),
			dbo date)";
	if($conn->query($sql)===true){
		echo "Table Created";
	} else{
		echo "Error: ". $conn->error;
	}
?>
