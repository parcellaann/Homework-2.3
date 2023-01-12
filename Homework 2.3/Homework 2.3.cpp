// Homework 2.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	long int id1 = 1516, id2 = 1514, id3=1515, login;
	long int password1 = 123456789, password2 = 987654321, password3 = 1234, password;
    printf("Hello! \nEnter your ID, please:\n");
	scanf("%i", &login);
	printf("Password:\n");
	scanf("%i", &password);

	if (((login == id1) && (password == password1)) || ((login == id2) && (password == password2)) || ((login == id3) && (password == password3)))
	{
		printf("Ok!\n");
	}
	else
	{
		printf("ERROR!\n");
	}
}
