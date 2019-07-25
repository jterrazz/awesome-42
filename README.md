# 42 helpers

Makefile -j18

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

> A collection of tips and tools for your 42 journey.

All subject corrections : https://github.com/Binary-Hackers/42_Corrections

- C

  - Testing

  - [Correction](#a-perfect-correction)

## Copy a symbolink
```
cp -a ../../awesome-42/inc/*.h .
```

Use free but not for nothing

https://stackoverflow.com/questions/12479476/c-how-to-free-malloced-memory-when-program-can-encounter-error-and-exit-at-diff

## Testing: no mistake allowed

- libft

  - [42 file checker](https://github.com/jgigault/42FileChecker)

  - [libft test](https://github.com/jtoty/Libftest)

## A perfect correction

Secure the ft_memdel ft_strdel ft_lst... and others libs fts

Will someday automate most of these

## w

1. `cat -e auteur` prints a $ at the end
2. Norminette
3. Only required files
2. Test the basic makefile rules (delete all the created files)
3. Makefile
- Required: rules: all clean fclean
- Required: -Werror -Wall -Wextra
- Required: no wildcards
- Check the makefile doesn't recompile when no changes
5. Cat all logins in headers
8. Allowed functions only, use nm exec
10. Secure the calls
    - If malloc, also check for strnew, etc (Define malloc 0 ?)
    - open/close + return of open (-1 ?)
    - read returns and errors
    - For mmap
      ```
      ptr = mmap(0, buf.st_size, PROT_READ | PROT_WRITE, MAP_PRIVATE, fd, 0)) == MAP_FAILED
      ```
      11. Check for leaks
12. For official prototypes, check it matches exactly
13. For strings, don't forget the \n
14. Check the libs are clean
15. Check the use of globals
222. Check overflows when using int, check size_t doesn't convert to int


- Check global is allowed
- Check usage message
+ Add comment descriptions on top of exported function
+ How to use atom shift cmd p command
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
7. Use good names
print errors  in the FD error

16. Better code

17. const variables

18. static functions for internal use

19. check includes and if they're needed

20. Check the use of size_t where needed
21. Better variable names
