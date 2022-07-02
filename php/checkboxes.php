<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="checkboxes.php" method="post">
        apples:<input type="checkbox" name="fruits[]" value="apples"><br>
        orange:<input type="checkbox" name="fruits[]" value="oranges"><br>
        water melon:<input type="checkbox" name="fruits[]" value="water melon"><br>
        <input type="submit">
    </form>
    <?php
    $fruits = $_POST["fruits"];
    echo $fruits[2];
    ?>
</body>
</html>