/*
 ============================================================================
 Name        : SherlockCode.c
 Author      : Yelson Monge
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "JavaFileReader.cpp"

int main() {
	JavaFileReader * j = new JavaFileReader();
	j->printHola();
	return 0;
}
