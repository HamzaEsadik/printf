# Printf
```` c
int printf ( const char * format, ... );
````
This represents our initial group project at ALX SE program, wherein we are tasked with creating our version of the 'printf' function from the C programming language, which will be named '_printf'.

The 'printf' function is a standard library feature and requires the inclusion of the <stdio.h> header file to be utilized.

Its main function is to write the C string pointed to by the 'format' parameter to the standard output (stdout). If the 'format' includes format specifiers (beginning with '%'), any additional arguments provided after the 'format' will be formatted accordingly and inserted into the resulting string, replacing their respective specifiers as needed.
### Parameters
 > **format** -> A sequence of characters in C that holds the text intended to be written to the standard output.

The most crucial part is the specifier character at the end as it determines both the type of data and how its corresponding argument should be interpreted.
 Specifier | Output | Example
------------ | ------------- |-----------
 c | Character | A
 s | String of characters | helloworld
 % | A % followed by another % character will write a single % to the stream| %
  i and d | Signed decimal integer | 98 
 b | Unsigned binary | 10101
 
 ## [Flowchart](https://drive.google.com/file/d/1WifeCZBo-Gv2Ms5sse6a9_5qKeI-5hE6/view?usp=sharing)

 ## Contributors
- [Hamza Esadik](https://github.com/HamzaEsadik)
- [Yassine Amgarou](https://github.com/Gnomedebian)
