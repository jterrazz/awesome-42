# Awesome 42

> A collection of the best ressources for your 42 school journey.

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

- [42 File Checker](https://github.com/jgigault/42FileChecker) ❤️: Fillit / Libft / LibftASM / Get_next_line / Ft_ls / Ft_printf / Minishell :

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

The makefile

- should have the basic rules: `all` , `$(NAME)`, `clean`, `fclean` and `re`.

- should clean the entire project with `fclean` .

- should compile with `-Werror -Wextra -Wall`.

- should not have any `*`.

- should compile only modified files using `.io` temporary object files.

No cheating allowed

- `nm -u <exec | lib.a>` should print the allowed functions for the subject. Take into account only the functions  starting with one _.

- In case other functions are used for bonuses, it must be justified (for example, `printf` for laziness is not allowed).

No crash allowed

-  `malloc` return should be secure. Don't forget to check for libft return too (`ft_strnew()` for example).
- `malloc` should not leak. Each `malloc` must match with a `free`. Use `valgrind --leak-check=full <./ft_exec>` to search leaks.

- `open` , `read` return should be secure (returns -1 for errors).

- `open` must be followed by `close`.
- `mmap` return must be secure.

  ```
  ptr = mmap(0, buf.st_size, PROT_READ | PROT_WRITE, MAP_PRIVATE, fd, 0)) == MAP_FAILEDCheck for leaks
  ```

Other

- When implementing existing methods, check their prototype matches exactly.

- When implementing existing commands, check it diplays the exact same return. Use `diff <(./ft_x) <(x)`

- Check if globals are allowed. Use `nm <./ft_x>` to show them.

- Check your overflows with int/size_t.

- Create a usage message.

### Useful code snippets

- - For flags

  

  ```
  1<<0
  ```

  ## 

  For add modulo

  ```
  size = (size + 15) & ~15;
  ```


  Remove not shared header and put static on all

  Add comment descriptions on top of exported function
- Use good names

  print errors  in the FD error

16. const variables for example with main

17. static functions for internal use

18. Stop thinking the  norm is bad, and use smart variable names



Secure the ft_memdel ft_strdel ft_lst... and others libs fts

## Good to know

### Copy a symbolink

```
cp -a ../../awesome-42/inc/*.h .
```

Use free but not for nothing Wy: https://stackoverflow.com/questions/32966125/is-it-really-important-to-free-allocated-memory-if-the-programs-just-about-to-e

You Should free. Don't use if (ptr) free(ptr), free do it for you.

https://stackoverflow.com/questions/12479476/c-how-to-free-malloced-memory-when-program-can-encounter-error-and-exit-at-diff

### TODO

Write default basic structure
Makefile -j18
Makefile test update like the guy

ASM
-
Add the 0 after all asm strings

When opening a file, check if it segfault when only have read rights

Check the makefile and refactor
If using VSCODE, need to redo the 42 headers

Remove comments if no norm when in tests

// Usual errors when parsing argv
// Test with multiple combinaisons of flags
// Test with multiple files args
// Test with flags after the file
// directory is a file

- Globales en static

- Add others test from github

- Test for leaks

- Complete the usage

- doubvle free

- Usage

- valgrind --leak-check=full --log-fd=9 9>>tmp.log ./ft_nm
