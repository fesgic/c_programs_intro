#### variables
- must start with a letter
- _ underscore counts as a letter
- keywords like if, else, while, int, float, const are reserved

#### Data types and sizes
- char - single byte
- int - integer(natural)
- float - single precision point
- double - double precision point
* In addition, there are a number of qualifiers that can bee applied to the basic types i.e. short and long:
- short int sh;
or
- long int counter;
- The word int above can be omitted in such declarations
- Int is normally used for nautral size for particular machine, **short** for 16 bits long, **int** 16 or 32 bits, and **long**s are atleast 32 bits, and **short** no longer than **int**, and **int** is longer than **long**.
- The qualifier **signed** or **unsigned** may be applied to **char** or any interger.
- unsigned numbers are always positive or zero, and obey laws of arithmetic modulo 2 to power n, where n is the number of bits in the type
- printable characyers are always positive
- **long double** specifies extended-precision floating point.
- Standard headers **<limits.h>** and **<float.h>** contain symbol constants for all of these sizes, along wiht other properties of machine and the compiler