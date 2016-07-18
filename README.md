# caesar-cipher-algorithm

In cryptography, a Caesar cipher, also known as Caesar's cipher, the shift cipher, Caesar's code or Caesar shift, is one of the simplest and most widely known encryption techniques.

The encryption can also be represented using modular arithmetic by first transforming the letters into numbers, according to the scheme, A = 0, B = 1,..., Z = 25. 

Encryption of a letter is performed as: 
E(x) = (x + n) mod 26.

Decryption is performed similarly: 
D(x) = (x - n) mod 26.

where n = cipher key...(any number between 1 to 26.)
(There are different definitions for the modulo operation. In the above, the result is in the range 0...25. I.e., if x+n or x-n are not in the range 0...25, we have to subtract or add 26.)
