# Калькулятор

## Краткое описание

- Это примитивный калькулятор, работающий в терминале, написанный на C++, поддерживающий только `+`, `-`, `*`, `/`, `%`.

## Подготовка к использованию

### На Linux

- Необходимо установить компилятор g++ и git

``` bash
sudo apt install g++ git   # Debian, Ubuntu
sudo pacman -S gcc git     # Arch
```

- Клонировать репозиторий

``` bash
git clone https://github.com/rakuen-isu/laboratory-ISRPO-2
cd laboratory-ISRPO-2
```

- Собрать и запустить код.

``` bash
g++ calculator.cpp functions.cpp -o calculator
./calculator
```

### На Windows

- Необходимо установить компилятор (в примере [MSYS2](https://www.msys2.org/))
1. Скачать установщик https://www.msys2.org/
2. Открыть `MSYS2 UCRT64`
3. Выполнить

   ``` bash
   pacman -S mingw-w64-ucrt-x86_64-gcc
   ```

4. Далее скачать архив из репозитория и перейти в терминале `MSYS2 UCRT64` в папку проекта, где будут [`calculator.cpp`](calculator.cpp) и [`functions.cpp`](functions.cpp) и выполнить

    ``` bash
    g++ calculator.cpp functions.cpp -o calculator.exe
    ./calculator.exe
    ```

## Руководство к использованию

- В качестве ввода калькулятор принимает два числа типа `int` и оператор из списка: `+`, `-`, `*`, `/`, `%`
- [Подробнее о работе функций](docs/functions.md)
- Вводить числа и оператор нужно в определённой последовательности:

```
число оператор число
```

### Примеры

```
18 + 3
21
```

```
81 - 34
47
```

```
4 * 21
84
```

```
7 / 2
3
```

```
92 % 5
2
```

## Документация

1. [Общее описание решения](docs/overview.md)
2. [Описание функций и примеры вызова](docs/functions.md)
3. [История изменений проекта](docs/history.md)

## Лицензия

MIT, см. [лицензия](LICENSE)
