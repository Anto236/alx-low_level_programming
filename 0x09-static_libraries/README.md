#0x09. C - Static libraries
1. move all functions to required directory
2. use gcc -c *c - to convert all files .c to .o
3. ar rcs <file.a> *.o - all object file .o converted to static library
4. create .gitignore file and vi *o and *c - not to load already existing functions to github
5. git add.
6. git status to check which files are commited {README.md, libmy.a, main.h, .gitignore}
