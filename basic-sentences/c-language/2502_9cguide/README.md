## Introduction
This directory is to practice C language code.

https://9cguide.appspot.com/index.html

## Geting start
This explanation assume on Windows environment.

### Initial setting
You need to install gcc compilers such as MinGW.
In Windows, you need to configure PATH.

```sh
# install https://github.com/niXman/mingw-builds-binaries/releases
gcc --version
```

### After gcc installed
To compile and execute, type this command.
`.exe` extension can skip.

```sh
# compile
$ gcc -o hello hello.c

# execute
$ hello
Hello, World!
```

If you want to use japanese characters, type this command.

```sh
gcc -o test.exe test.c -fexec-charset=CP932
```