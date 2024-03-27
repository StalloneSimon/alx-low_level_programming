
**Learning C: Compilation, Entry Points, and Text Printing**

This project delves into the fundamentals of C programming, focusing on three key aspects:

  - **Compilation:** The process of transforming human-readable C code into machine-executable instructions. We'll utilize the `gcc` compiler for this purpose.
  - **Entry Point:** The `main` function serves as the starting point for C program execution. Every C program must have a `main` function.
  - **Text Printing:** C provides functions to display text on the console. This project explores `puts` and `printf` for text output.

**Tasks:**

1. **Preprocessing:**
   - A Bash script will be created to execute the C preprocessor on a C file stored in the `$CFILE` variable. The preprocessor's output will be saved in a file named `c.i`.

2. **Compiling (Without Linking):**
   - A Bash script will compile a C file (`$CFILE`) into an object file (`$CFILE.o`) using `gcc`. Linking, which combines object files into executables, will not be performed in this step.

3. **Assembling:**
   - A Bash script will generate assembly code from a C file (`$CFILE`) and save it as `$CFILE.s`. This script will leverage the compiler's ability to produce assembly code as an intermediate step.

4. **"Hello, World" with `puts`:**
   - Create a C program (`4-puts.c`) that prints the exact string "Programming is like building a multilingual puzzle," followed by a newline, using the `puts` function.

5. **"Hello, World" with `printf` (Formatted Output):**
   - Create a C program (`5-printf.c`) that prints the creatively formatted message "with proper grammar, but the outcome is a piece of art," followed by a newline, employing the `printf` function for control over formatting.

6. **Data Type Sizes:**
   - Write a C program (`6-size.c`) that determines and displays the sizes (in bytes) of various fundamental data types on the system where it's compiled and executed.

7. **Intel Assembly Syntax (Optional):**
   - (This task is marked as optional.) Craft a Bash script that generates assembly code in Intel syntax from a C file (`$CFILE`) and stores it as `$CFILE.s`.

8. **Printing to Standard Error (Without `printf` or `puts`):**
   - Develop a C program (`101-quote.c`) that outputs the exact quote "and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a newline, to the standard error stream. This program will refrain from using the `printf` or `puts` functions listed in the `man` page sections 3 (`man(3) printf`) and 3 (`man(3) puts`).

I hope this paraphrased explanation, along with the Markdown formatting, enhances clarity and understanding!
