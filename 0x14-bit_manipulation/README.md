Bit manipulation in C
The program you will be working with for the chapter nine assignment on the memory manager needs to do some bit manipulation operations. For those of you who have never done bit manipulation in C, here is a short tutorial on the C language features needed to do this.

The hexadecimal number system
The first thing you will need to know is how to represent sequences of bits. The most widely used method to represent bit sequences in C is to use hexadecimal numbers. The hexadecimal number system is a base 16 number system, in which each digit represents a sequence of four bits. Here is a table of the digits in the hexadecimal number system, along with the binary equivalent for each of these digits.

Digit	Binary
0	0000
1	0001
2	0010
3	0011
4	0100
5	0101
6	0110
7	0111
8	1000
9	1001
a	1010
b	1011
c	1100
d	1101
e	1110
f	1111
The C language allows you write hexadecimal numbers by using the 0x notation. For example, 0xa stands for the hexadecimal number a, whose binary equivalent is 1010.

You can create longer bit sequences by using more hexadecimal digits. For example, if you need to represent the bit sequence

1000010011001110

you first break it into groups of four bits

1000 0100 1100 1110

and then use the table above to convert each bit sequence into its hexadecimal digit equivalent.

0x84ce

C bitwise operators
Once you have set up a bit sequence you will want to be able to access and manipulate individual bits in the bit sequence. To do this, C offers three bit manipulation operators, &, |, ^, and ~.

The ~ operator is the bitwise negation operator, which flips each bit in a sequence to its opposite. For example, if an unsigned char variable x contains 0xb = 1011, ~x evaluates to 0100, which is 0x8.

The & operator is the bitwise logical and operator, which forms the logical and of pairs of bits taken from two numbers. For example, if we have two unsigned char variables x and y containing the values 0xa = 1010 and 0x6 = 0110, x&y will evaluate to (1010)&(0110) = (0010) = 0x2.

Likewise, the | operator forms the bitwise or. x|y would evaluate to (1010)|(0110) = (1110) = 0xe.

The ^ operator forms the exclusive or of bits. The exclusive or of two bits is 0 if the bits are the same and 1 if they are different. x^y would evaluate to (1010)^(0110) = (1100) = 0xc.

Working with individual bits
These bitwise manipulation operators are used to perform bit level manipulations, such as checking the value of individual bits or manipulating individual bits in a bit sequence.

To test the value of a particular bit in a number we use the bitwise and operator &. For example, to determine whether the last bit in a number is a 0 or a 1, we form the bitwise and of the number with a specially constructed mask number. In this case the mask number we would use is the number all of whose digits are 0 except for a 1 in the last position. For example, if we have an unsigned short variable x with the value of 0xa8 = 10101000 and we want to determine whether or not the last bit is a 0, we would use the test

x&0x01 == 0
We can access other bits in the number just by changing the mask that we & against x. For example, to check to see whether or not the third bit is a 1 we would use

x&0x20 == 0x20
To set bits in a number to particular values we use either | or & depending on whether we want to set that bit to be a 1 or a 0. For example, to set the fourth bit in an eight bit variable y to be a 1 we would use

y = y|0x10
To set the fourth bit of y to 0 we would use & with the mask 0xef = 11101111:

y = y&0xef
Another way to do this is to use the ~ operator to help construct the mask:

y = y&(~0x10)