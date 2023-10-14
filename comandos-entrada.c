// comandos de entrada 

%d // inteiro 
%f // float 
%lf // double 
%c // um unico caractere 
%s // string/cadeira de caracteres 
%ld // long int-capac.de armazenamento > 
%u // unsigned int (somente int positivos) 

Comando de entrada formatado em C
int var1; 
scanf("%d", &var1);

// tipo int 

	Permite algumas variações no tamanho ou na forma, através de prefixos:
		-short
		-long
		-signed
		-unsigned

// comando de entrada para caractere getchar() 

	-char op;
	-fflush(stdin);//limpar o bufer padrao de entrada - teclado
	-scanf("%c",&op); ou scanf(" %c",&op")

	ou

	char op;
	fflush(stdin);
	op = getchar();
	
	ex:
	
	char nome[30];
	fflush(stdin);
	gets(nome);
	printf("/n Nome: %s, nome")
