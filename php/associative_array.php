<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="associative_array.php" method="post">
        <input type="text" name="name"><br>
        <input type="submit">
    </form>
    <?php 
    $grades=["ram"=>"A+","sidd"=>"A+","kavi"=>"B+"];
    echo $grades[$_POST["name"]];
    ?>
</body>
</html>