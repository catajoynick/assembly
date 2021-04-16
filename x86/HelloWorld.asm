;Programmer: Nickskiejoi
;This program will print hello world to the screen.

global _start


section .text

_start:

	;This will print hello world on the screen

	mov eax, 0x4
	mov ebx, 0x1
	mov ecx, message
	mov edx, mlen
	int 0x80


	;this will make the program exit
	mov eax, 0x1
	mov ebx, 0x5
	int 0x80

section .data

	message: db "Hello World!"
	mlen equ $-message
