<?php include_once("connect.php"); ?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="style.css">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <h2>Autor: Jakub Kiecok</h2>
    <hr>
    <div class="counter">
        <?php
            $counter_records = $conn->query("SELECT COUNT(baza1.ID) as 'ile' FROM baza1 WHERE baza1.Wiek BETWEEN 10 AND 18;");
            list($ile)=mysqli_fetch_row($counter_records);
            echo"<h4>$ile rekordów </h4>";
        ?>
    </div>
    <nav>
        <ul>
            <li><a href="index.php">Home</a></li>
            <li><a href="all.php">Wszystkie osoby</a></li>
            <li><a href="Osoby10-18.php">Osoby od 10 do 18</a></li>
            <li><a href="Osoby19-50.php">Osoby od 19 do 50</a></li>
        </ul>
    </nav>
    <div class="osoby10-18">
        <ul>
            <?php
                $all_records = $conn->query("SELECT baza1.ID, baza1.Imie, baza1.Nazwisko, baza1.Wiek FROM baza1 WHERE baza1.Wiek BETWEEN 10 AND 18;");
                while(list($ID, $Imie, $Nazwisko, $Wiek)=mysqli_fetch_row($all_records)){
                    echo("<li><b>$ID, </b><i>$Imie, $Nazwisko, $Wiek</i></li>");
                }
            ?>
        </ul>
    </div>
</body>
</html>
<?php $conn->close(); ?>