## Tools

1. C Language
2. Draw.io [https://github.com/jgraph/drawio-desktop/releases/tag/v22.0.0]
3. Visual Studio Code [https://code.visualstudio.com/download]
4. Git [https://git-scm.com/downloads]
5. Github [https://github.com]
6. MinGw [https://sourceforge.net/projects/mingw/files/latest/download]
7. Code Runner (Visual Studio Code Extension)
8. C/C++ (Visual Studio Code Extension)
9. Terminal (Powershell, Iterm, Command Prompt (CMD), Bash, Zsh, Fish, etc)
10. Windows Subsystem for Linux (optional for Windows user)

## Basic Git

I assume you already installing git in your computer, then you can clone this repository by typing this command in your terminal:

```bash
$ git clone https://github.com/praktikum-alprog-unud-2023/Dasar-Bahasa-C.git
```

You should change your directory to this repository by typing this command:

```bash
$ cd Dasar-Bahasa-C
```

If you already have this repository in your computer, but you don't have the latest version (i.e. your teammate already push their own work), you can update it by typing this command:

```bash
$ git pull
```

If you want to add your own work to this repository, you can add your own file by typing this command:

```bash
$ git add .
```

Then you can commit your own work by typing this command:

```bash
$ git commit -m "your commit message"
```

Finally you can push your own work to this repository by typing this command:

```bash
$ git push
```

## How to Run C Code

If you already have the gcc compiler (MinGw) installed on your computer, you can compile the C program by typing this command:

```bash
$ gcc main -o main.c
```

You can run your compiled program by typing this command:

```bash
$ ./main
```

Or you can compile and run it directly by typing this command:

```bash
$ gcc main -o main.c && ./main
```

## Project Structure

The following is the project structure that must be used during the Practicum project.

```bash
.
├── README.md
├── modul-<1>
│   ├── <1>-<Kalkulator>
│   │   ├── question.md
│   │   ├── main.c
│   │   └── main.exe
│   ├── ...
│   ...
...
```
