# Renju Text Viewer
Renju text viewer displays renju board in ASCII text format.

# Supported format
* [a-o] style text

# Usage
./ren_viewer --string ([a-o] style text)

# Example
Run: 
`./ren_viewer --string hhhghjifijigggghjeiiihgjkf`

Output:  
`__A B C D E F G H I J K L M N O  `  
`A + --------------------------+ A`  
`B | . . . . . . . . . . . . . | B`  
`C | . . . . . . . . . . . . . | C`  
`D | . . * . . . . . . . * . . | D`  
`E | . . . . . . . . x . . . . | E`  
`F | . . . . . . . o . x . . . | F`  
`G | . . . . . x o o . . . . . | G`  
`H | . . . . . o x x . . . . . | H`  
`I | . . . . . . . o . . . . . | I`  
`J | . . . . . o x x . . . . . | J`  
`K | . . . . . . . . . . . . . | K`  
`L | . . * . . . . . . . * . . | L`  
`M | . . . . . . . . . . . . . | M`  
`N | . . . . . . . . . . . . . | N`  
`O + --------------------------+ O`  
`__A B C D E F G H I J K L M N O`  

Note:  
  x: black stone  
  o: white stone  

## Requirements
* git lfs 1.5.6 or newer
* C++ compiler
   * clang 3.8 or newer
* CMake 3.5.1 or newer
* boost 1.63 or newer
* ccache 3.3.4 or newer(optional)

## Environment variables
Some shell scripts and CMake require the following environment variables:
* BOOST_DIR: the top directory of the Boost Libraries
* MAKE_JOB_NUMBER: the number of jobs to compile C++ files simultaneously




