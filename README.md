# 42 helpers

> A collection of tips and tools for your 42 journey.

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

1. Check the author file

Test all make file rules

print errors  in the FD error

2. Cat all logins in headers

2. Code formatting: norminette

   - Check header with name and 42

3. Analyse the makefile

   - Required: rules: all clean fclean
   - Required: -Werror -Wall -Wextra
   - Required: no wildcards
   - Check: printed messages
   - Check: every code is usefull

4. Structure

5. Check all files are used

6. Check only C and .h file at start

7. Use good names

8. Allowed functions only

9. Check no printf()

10. Secure the calls

    - For malloc (Also things like strnew())

        Define malloc 0
    - Free: Check for leaks
    - open/close + return of open (-1 ?)
    - read returns and errors
    - For mmap

      ```
      ptr = mmap(0, buf.st_size, PROT_READ | PROT_WRITE, MAP_PRIVATE, fd, 0)) == MAP_FAILED
      ```

11. Check the syntax

12. For official prototypes, check it matches exactly

13. For strings, don't forget the \n

14. Check the libs are clean

15. Check the use of globals

16. Better code

17. const variables

18. static functions for internal use

19. check includes and if they're needed

20. Check the use of size_t where needed

21. Better variable names

222. Check overflows when using int, check size_t doesn't convert to int

22. ft_putstr_fd for errors (with 2 in FD)

23. Test all errors possible

24. Read the subject ffs
