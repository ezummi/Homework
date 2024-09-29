<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Почтовый Бланк</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <img class="tint" src="https://wp-s.ru/wallpapers/9/11/539070987426444/osennij-pejzazh-kraski-oseni.jpg" width="800px"/>
    <div class="centred">
        <form>
            <label for="index">Индекс:</label>
            <input type="text" id="index" name="index" class="input-field" required><br><br>

            <label for="city">Город:</label>
            <input type="text" id="city" name="city" class="input-field" required><br><br>

            <label for="street">Улица:</label>
            <input type="text" id="street" name="street" class="input-field" required><br><br>

            <label for="house">Дом:</label>
            <input type="text" id="house" name="house" class="input-field" required><br><br>

            <label for="apartment">Квартира:</label>
            <input type="text" id="apartment" name="apartment" class="input-field" required><br><br>

            <label for="name">Фамилия и инициалы:</label>
            <input type="text" id="name" name="name" class="input-field" required><br><br>

            <button type="submit" class="submit-button">Отправить</button>
        </form>
    </div>
</body>
</html>
body {
    font-family: Arial, sans-serif;
    margin: 0;
    height: 100vh;
    display: flex;
    justify-content: center;
    align-items: center;
    background-color: #f0f0f0;
}

.form-container {
    background-color: #ffffff;
    padding: 20px;
    border-radius: 10px;
    box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
}

form {
    display: flex;
    flex-direction: column;
}

label {
    margin: 10px 0 5px;
}

.input-field {
    padding: 10px;
    border: 1px solid #ccc;
    border-radius: 5px;
    margin-bottom: 15px;
}

.input-field:focus {
    border-color: #007BFF;
    outline: none;
    box-shadow: 0 0 5px rgba(0, 123, 255, 0.5);
}

button {
    padding: 10px;
    background-color: #007BFF;
    color: #ffffff;
    border: none;
    border-radius: 5px;
    cursor: pointer;
}

button:hover {
    background-color: #0056b3;
}

.centred {
    position: absolute;
    top: 50%;
    left: 50%;
    transform: translate(-50%, -50%);
}

.tint {
    opacity: 40%;
    position: absolute;
    top: 50%;
    left: 50%;
    transform: translate(-50%, -50%);
}

input.test1:focus {
    background-color: orange;
}

input.test2:focus {
    background-color: khaki;
}
