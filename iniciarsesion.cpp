void iniciarsesion()
{
	char nombre[20];
	char contrasena[20];

	printf("Ingrese el nombre de usuario: ");
	gets(nombre);

	verificarusuario(nombre);

	printf("Ingrese la contraseña");
	gets(contrasena);

	verificarcontrasena(contrasena);
}

void verificarusuario(char nombre)
{
	FILE *f;
	f = fopen("Usuarios.dat", "r");

	fgets(nombre, 20, f);

	while (!feof(f))
	{
		fgets(nombre, 20, f);

		if (strcmp(nombre, usuario.user) == 0)
		{
			printf("Usuario correcto\n");
		}
		else
		{
			printf("Usuario Incorrecto\n");
		}
	}

	fclose(f);
}

void verificarcontrasena(char contrasena)
{
	FILE *f;
	f = fopen("Usuarios.dat", "r");

	fgets(contrasena, 20, f);

	while (!feof(f))
	{
		fgets(contrasena, 20, b);

		if (strcmp(contrasena, usuario.contra) == 0)
		{
			printf("Contraseña Correcta\n");
		}
		else
		{
			printf("Contraseña Incorrecta\n");
		}
	}

	fclose(f);
}