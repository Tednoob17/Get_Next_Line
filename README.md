
 <img src="./imgs/jumps.jpg" width="855" />

##  Jump_Next_Line 
###	Because read a line on a  fd sucks


The objectif of this project is to make you code a function that 
**returns a line ending with a newline, read from a file descriptor.**
This project will not only allow  to add a very convenient function to 
our collection,but it will also allow  to learn a highly interest contest to Alx program (If you want)

### Function 🐧
```c
int	*jump_next_line(int fd);
```


### Return value

| Value | Description         |
 |-----------|----------------------|
|  Read line| correct behavior |
|  NULL| nothing else to read or an error has occured |

### Functions Used

**External Functions**

| Function | Description         |
 |-----------|----------------------|
|  read() | A line has been read |
|  malloc() | EOF has been reached |
|  free() | An error happened |


## Compilation 💽

**JNL Mandatory Part**

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89    src/get_next_line.c include/get_next_line.h src/main.c src/get_next_line_utils.c 
```


