# Awesome 42

> A collection of the best ressources and advices for your 42 journey.

### Index

- [Ressources](#ressouces)

  - Subjects

  - Automated tests

- Good practices

- Good to know

## External ressources

### Subjects

#### PDF

- [Binary-Hackers](https://github.com/Binary-Hackers/42_Subjects)

#### Corrections

- [@Hoax017](https://github.com/Hoax017/PDF-Correction-42)

- [@Binary-Hackers](https://github.com/Binary-Hackers/42_Corrections)

- [@rizkyario](https://github.com/rizkyario/42-corrections)

### Automated tests

- [42 File Checker](https://github.com/jgigault/42FileChecker) ❤️: Fillit / Libft / LibftASM / Get_next_line / Ft_ls / Ft_printf / Minishell :

- [@jtoty](https://github.com/jtoty/Libftest): Libft

- [@mguillau42](https://github.com/mguillau42/unit_test_nm_otool) : Nm-otool

### A complete correction

Secure the ft_memdel ft_strdel ft_lst... and others libs fts

Will someday automate most of these

## w

1. `cat -e auteur` prints a $ at the end
2. Norminette
3. Only required files
4. Test the basic makefile rules (delete all the created files)
5. Makefile
6. Required: rules: all clean fclean
7. Required: -Werror -Wall -Wextra
8. Required: no wildcards
9. Check the makefile doesn't recompile when no changes
10. Cat all logins in headers
11. Allowed functions only, use nm exec

    Is it justified ?
12. Secure the calls
    - If malloc, also check for strnew, etc (Define malloc 0 ?)
      - Don't forget the  ft_strnew(), etc
    - open/close + return of open (-1 ?)
    - read returns and errors
    - For mmap

      ```
      ptr = mmap(0, buf.st_size, PROT_READ | PROT_WRITE, MAP_PRIVATE, fd, 0)) == MAP_FAILED
      ```
      11. Check for leaks
13. For official prototypes, check it matches exactly
14. For strings, don't forget the \n
15. Check the libs are clean
16. Check the use of globals
17. Check overflows when using int, check size_t doesn't convert to int

- Check global is allowed
- Check usage message
- Add comment descriptions on top of exported function
- How to use atom shift cmd p command

  rename to libc

  For flags

  ```
  1<<0
  ```

For add modulo

```
size = (size + 15) & ~15;
```

- Remove not shared header and put static on all
- Run tests before

  ## Good practices
- Use good names

  print errors  in the FD error

16. Better code

17. const variables

18. static functions for internal use

19. check includes and if they're needed

20. Check the use of size_t where needed

21. Better variable names



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
