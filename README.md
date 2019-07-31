# Awesome 42

> A collection of the best ressources for your 42 school journey. Please feel free to fork it / contribute to it.

### Index

- [Ressources](#ressources)
  - [Subjects](#subjects)
  - [Automated tests](#automated-tests)
- [Good to know](#good-to-know)
  - [How to make a perfect correction / project](#how-to-make-a-perfect-correction-/-project)
  - [Useful code snippets](#useful-code-snippets)
- [Good practices](#good-practices)

## Ressources

### Subjects

- PDF
  - [Binary-Hackers](https://github.com/Binary-Hackers/42_Subjects)
- Corrections
  - [@Hoax017](https://github.com/Hoax017/PDF-Correction-42)
  - [@Binary-Hackers](https://github.com/Binary-Hackers/42_Corrections)
  - [@rizkyario](https://github.com/rizkyario/42-corrections)

### Automated tests

- [42 File Checker](https://github.com/jgigault/42FileChecker) ❤️: Fillit / Libft / LibftASM / Get_next_line / Ft_ls / Ft_printf / Minishell
- [@jtoty](https://github.com/jtoty/Libftest): Libft
- [@mguillau42](https://github.com/mguillau42/unit_test_nm_otool) : Nm-otool

### Learning

Go check out my [medium stories here 🥰](https://medium.com/a-42-journey)

## Good to know

### How to make a perfect correction / project

*On the newly cloned project*
- `cat -e auteur` must show the login followed by a `\n` (print as `$` with `cat -e`).
- `norminette | grep 'Error'` should print nothing. 
- `cat */*.c | grep "By: "` should print the student login (it can print <marvin@42.fr> for the mail).

**The makefile**

- should have the basic rules: `all` , `$(NAME)`, `clean`, `fclean` and `re`.
- should clean the entire project with `fclean` .
- should compile with `-Werror -Wextra -Wall`.
- should not have any `*`.
- should compile only modified files using `.io` temporary object files.

**No cheating allowed**

- `nm -u <exec | lib.a>` should print the allowed functions for the subject. Take into account only the functions  starting with one _.
- In case other functions are used for bonuses, it must be justified (for example, `printf` for laziness is not allowed).

**No crash allowed**

-  `malloc` return should be secure. Don't forget to check for libft return too (ft_strnew()` for example`).
-  `malloc` should not leak. Each `malloc` must match with a `free`, see why [here](https://stackoverflow.com/questions/32966125/is-it-really-important-to-free-allocated-memory-if-the-programs-just-about-to-e).
  -  However, no need to free the entire program when you use exit() on an error.
  -  You can use `valgrind --leak-check=full <./ft_exec>` to search leaks. In case the program outputs data, you can redirect valgrind output with  `--log-fd=9 9>>val.log`.
- Check for double `free`.
- `open` , `read` return should be secure (returns -1 for errors). When opening or reading, you should test with folders and not allowed files (`chmod 000`).
- `open` must be followed by `close`.
- `mmap` return must be secure.

  ```
  ptr = mmap(0, buf.st_size, PROT_READ | PROT_WRITE, MAP_PRIVATE, fd, 0)) == MAP_FAILEDCheck for leaks
  ```

**Other**

- When implementing existing methods, check their prototype matches exactly.
- When implementing existing commands, check it diplays the exact same return. Use `diff <(./ft_x) <(x)`
- Check if globals are allowed. Use `nm <./ft_x>` to display them.
- Check your overflows.
- When the program expects arguments, check with empty strings.
- For executables, create a usage message.

### Useful code snippets

#### Save flags

```c
typedef enum	e_flag {
	FLAG_N = 1 << 0, // 0b00000001
	FLAG_R = 1 << 1, // 0b00000010
	FLAG_G = 1 << 2, // 0b00000100
}				t_flag;

// Use uint_64t for more than 8 flags
int flags = 0;              // flags = 0b00000000

// Activate the flag N
flags |= FLAG_N             // flags = 0b00000001

// Compare it with
if (flags & FLAG_N) // TRUE
    ...
```

#### Round x to a multiple of y

```c
int x = (x + (y-1)) & ~(y-1);
```

### Good practices

#### Project file structure

```bash
/project
  /inc # Put all your includes here (from libs + src)
  /libs # Put you libft + other already made projects
  /src
  Makefile # Will call the makefile of libs
  auteur
```

#### Code

- Use `static` on local functions and `const` for constants variables.
- Describe exported functions using comments
- Add comment descriptions on top of exported function
- Print errors  in the FD error
- Don't use `if (ptr) free(ptr)`, it does it for you.
- Stop thinking the norm is bad, 25 lines per function will make you code better and generic functions
- Use real variable / function names 😢
- You can use `makefile -j18` for compiling using multithread.
