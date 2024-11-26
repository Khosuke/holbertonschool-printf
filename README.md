# project printf

The functions **_printf()** produce output according to a format as described below. The _printf function write output to stdout, the standard output stream. It should always return the length of the format. If an error occured with the format, it will return -1.

## Compilation

the command to compile this program should be :

![Légende](https://i.ibb.co/4ZLLmcj/compilation-command.png)

## Requirements

To **run** this program **properly**, you need : 
* **A text editor** 🤡 (like vi, emacs, vscode...) 
* **Ubuntu 20.04 LTS** or newest 
* **gcc** to compile the program

## Exemple of usage

![Légende](https://i.ibb.co/sjR1nZL/example-of-usage.png)

```#include "main.h"  
_printf("Hello, World!"); /* The output should be : Hello, World! */  
_printf("%c", 'A'); /* The output should be : A */  
_printf("%s", "Hello, World!"); /* The output should be : Hello, World! */  
_printf("%d", 1234); /* The output should be : 1234 */  
_printf("%%"); /* the output should be : % */  
_printf("%i", 1234) /* the output should be : 1234 */```

## Man page

/* Man page */

## Test 

We've tried to push our code to the limit, with some stress test like this :  

![Légende](https://i.ibb.co/LPz7Wtf/test-c.png)

Here you can see that we have the exact **same output** as the **original printf** function.  

![Légende](https://i.ibb.co/YbB8nr7/output-test.png)  
  
  Finally, here is the **result of valgrind**, to see if our code have **memory issues** :
  
![Légende](https://i.ibb.co/HHZLLKw/valgrind.png)

## Flowchart
/* Flowchart */

### Authors

**Frederic Iglesias Montero (Khosuke)**  
**Julien Noailles (Faf-dev)**
