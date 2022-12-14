0x19. C - Stacks, Queues - LIFO, FIFO

#The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.


#Opcodes
monty executes the following opcodes:

push -	Pushes an element to the stack
pall -	Prints all the values on the stack
pint - 	Prints the value at the top of the stack
pop - 	Removes the top element of the stack
swap -	Swaps the top two elements of the stack
queue -	Sets the format of the data to a queue (FIFO)
stack -	Sets the format of the data to a stack (LIFO)
nop -	Doesn't do anything
add -	Adds the top two elements of the stack
sub -	Subtracts the top element of the stack from the second top element of the stack
mul -	Multiplies the second top element of the stack with the top element of the stack
div -	Divides the second top element of the stack by the top element of the stack
mod -	Computes the rest of the division of the second top element of the stack by the top element of the stack
pchar -	Prints the char at the top of the stack
pstr -	Prints the string starting at the top of the stack
rotl -	Rotates the stack to the top
rotr -	Rotates the stack to the bottom

Task 0 - Implement the push and pall opcodes.

Task 1 - Implement the pint opcode.

Task 2 - Implement the pop opcode.

Task 3 - Implement the swap opcode.

Task 4 - Implement the add opcode.

Task 5 - Implement the nop opcode.

Authors:

Naomi Kleinhans
