# console examples

**SGR-w** terminal escape sequences wide characters  
**SGR-u8** terminal escape sequences 8 bit characters  
**SGR2** terminal escape sequences window drawing  
**MessageBox** show a MessageBox containing unicode chars

The above examples set the `ENABLE_VIRTUAL_TERMINAL_PROCESSING` flag.
Applications that do not set this flag will require ansicon to enable
the processing of terminal escape sequences.  
Install ansicon and enable it within a command prompt by typing:
```
C:\> ansicon -p
```

Choose a true type font so that unicode characters will display properly.  
For unicode characters to display from some appications, you may need to
change the current code page to the unicode code page 65001.
```
C:\> chcp 65001
```

**home-w** clear the screen using an escape sequence and print a unicode char (wide)  
**home-u8** clear the screen using an escape sequence and print a unicode char
(compile with `/utf-8` flag)
