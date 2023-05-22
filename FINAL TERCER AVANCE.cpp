#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <wchar.h>
#include <fstream>
#include <stdlib.h>


using namespace std;

struct info
{
	int numart, anio;
	float precio, imp, total;
	string titulo, des, con, clas, cara, gen, status;
};

int contador, alta;

info* Tienda;

void Alta();
void modificar();
void eliminar();
void listas();
void Archivo();

int main()
{
	int opc;

	printf(" \t   Menu De Opciones \n");    //aqui esta el menu principal
	printf("1- Alta \n");
	printf("2- Eliminar \n");
	printf("3- Modificacion \n");
	printf("4- Lista \n");
	printf("5- Limpiar Pantalla \n");
	printf("6-Generar archivo y Salir \n");
	scanf_s("%d", &opc);

	switch (opc)
	{
	case 1:             //se da de alta un juego
	{
		Alta();
		return main();
	}
	break;

	case 2:
	{
		eliminar();
		return main();
		//aqui se modificara un dato de algun articulo
	}
	break;

	case 3:
	{
		modificar();
		return main(); //aqui se dara de baja un articulo
	}
	break;

	case 4:
	{
		listas();
		return main();
		//Aqui aparecera una lista de los articulos 
	}
	break;
	case 5:
	{
		system("cls");
		return main();
		// Aqui se limpiara la pantalla
	}
	break;

	case 6:
	{
		Archivo();
		exit(1);
		return main();
		// Se genera un documento
	}
	break;


	}
}

void Alta()
{

	printf("Cuantos registros desea dar de alta \n");
	scanf_s("%d", &alta);
	Tienda = new info[alta];

	for (int i = 0; i < alta; i++)
	{
		Tienda[i].numart = i + 1;
		cin.ignore();

		printf("Ingrese el titulo del juego \n");
		getline(cin, Tienda[i].titulo);
		cin.ignore();

		printf("Ingrese la clasificacion del videojuego \n");
		getline(cin, Tienda[i].clas);
		cin.ignore();

		printf("ingrese el genero del videojuego \n");
		getline(cin, Tienda[i].gen);
		cin.ignore();

		printf("ingrese una descripción del juego \n");
		getline(cin, Tienda[i].des);
		cin.ignore();

		printf("ingrese la consola en que esta disponible el juego \n");
		getline(cin, Tienda[i].con);
		cin.ignore();

		printf("Ingrese el precio unitario del videojuego \n");
		scanf_s("%f", &Tienda[i].precio);


		Tienda[i].imp = Tienda[i].precio * 16 / 100;

		Tienda[i].total = Tienda[i].precio + Tienda[i].imp;

		printf("ingrese el a%co de salida del videojuego \n", 164);
		scanf_s("%d", &Tienda[i].anio);



	}

}

void eliminar()
{
	int j;
	printf("Ingrese el registro a eliminar \n");
	scanf_s("%d", &j);
	j = j - 1;
	for (int i = j; i == j; i++)
	{
		printf("Eliminando registro ");
		printf("%d \n", j + 1);
		Tienda[i].status = "Eliminado";
		/*
		numart[i]=0;
		titulo[i]=" ";
		clas[i]=" ";
		gen[i]=" ";
		des[i]=" ";
		con[i]=" ";
		precio[i]=0;
		imp[i]=0;
		total[i]=0;
		anio[i]=0;

		*/

	}
}

void modificar()
{
	int j, opcion, opc2;
	do
	{
		printf("ingrese el numero del registro a modificar \n");
		scanf_s("%d", &j);
		j = j - 1;

		for (int i = j; i == j; i++)
		{
			if (Tienda[i].status == "Eliminado")
			{
				printf("Registro eliminado \n");
				printf("ingrese un numero valido \n");
				i + 1;
				opc2 = 1;
			}
			else
			{
				opc2 = 2;
			}
		}
	} while (opc2 == 1);

	printf("Ingrese lo que desea modificar \n");
	printf("1-Titulo \n");
	printf("2-Clasificacion \n");
	printf("3-Genero \n");
	printf("4-Descripcion \n");
	printf("5-Consola \n");
	printf("6-Precio \n");
	printf("7-A%co  ", 164);
	scanf_s("%d", &opcion);
	switch (opcion)
	{
	case 1:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingrese el titulo \n");
			getline(cin, Tienda[i].titulo);
			cin.ignore();
		}
		break;


	case 2:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingrese la clasificacion \n");
			getline(cin, Tienda[i].clas);
			cin.ignore();
		}
		break;


	case 3:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingrese el genero \n");
			getline(cin, Tienda[i].gen);
			cin.ignore();
		}
		break;

	case 4:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingrese una descripcion y caracteristicas \n");
			getline(cin, Tienda[i].des);
			cin.ignore();
		}
		break;

	case 5:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingrese la consola \n");
			getline(cin, Tienda[i].con);
			cin.ignore();
		}
		break;

	case 6:
		for (int i = j; i == j; i++)
		{
			printf("Ingrese el precio \n");
			scanf_s("%f", &Tienda[i].precio);
			cin.ignore();
			Tienda[i].imp = Tienda[i].precio * 16 / 100;
			Tienda[i].total = Tienda[i].precio + Tienda[i].imp;
		}
		break;

	case 7:
		for (int i = j; i == j; i++)
		{
			printf("Ingrese el a%co de salida\n", 164);
			scanf_s("%d", &Tienda[i].anio);
			cin.ignore();
		}
		break;
	}




}

void listas()
{
	int opc4;
	string consola, gene, clasificacionowo;


	printf("Como desea buscar el videojuego \n 1.Consola \n 2.Genero \n 3.Clasificacion \n");
	scanf_s("%d", &opc4);
	cin.ignore();
	switch (opc4)
	{
	case 1:
	{
		string consola;
		printf("ingrese la consola \n");
		getline(cin, consola);
		cin.ignore();
		int i = 0;
		do
		{


			if (Tienda[i].con.compare(consola) == 0)
			{
				if (Tienda[i].status == "VIDEOJUEGO ELIMINADO")
				{
					printf("\n VIDEOJUEGO ELIMINADO DE LA LISTA \n");
					i + 1;
				}
				else
				{
					printf("videojuego %d \n", Tienda[i].numart);
					printf("Nombre del videojuego %s \n", Tienda[i].titulo.c_str());
					printf("Consola del videojuego %s \n", Tienda[i].con.c_str());
					printf("Desacripcion del videojuego %s \n", Tienda[i].des.c_str());
					printf("Genero del videojuego %s \n", Tienda[i].gen.c_str());
					printf("Clasificacion del videojuego %s \n", Tienda[i].clas.c_str());
					printf("Anio del videojuego %d \n", Tienda[i].anio);
					printf("Precio unitario del videojuego %f \n", Tienda[i].precio);
					printf("Impuesto del videojuego %f \n", Tienda[i].imp);
					printf("precio total del videojuego %f \n", Tienda[i].total);
				}

			}
			i = i + 1;

		} while (i < alta);
	}
	break;

	case 2:
	{
		string gene;
		printf("ingrese el genero \n");
		getline(cin, gene);
		cin.ignore();
		int i = 0;
		do
		{


			if (Tienda[i].gen.compare(gene) == 0)
			{
				if (Tienda[i].status == "VIDEOJUEGO ELIMINADO")
				{
					printf("\n VIDEOJUEGO ELIMINADO DE LA LISTA \n");
					i + 1;
				}
				else
				{
					printf("videojuego %d \n", Tienda[i].numart);
					printf("Nombre del videojuego %s \n", Tienda[i].titulo.c_str());
					printf("Consola del videojuego %s \n", Tienda[i].con.c_str());
					printf("Desacripcion del videojuego %s \n", Tienda[i].des.c_str());
					printf("Genero del videojuego %s \n", Tienda[i].gen.c_str());
					printf("Clasificacion del videojuego %s \n", Tienda[i].clas.c_str());
					printf("Anio del videojuego %d \n", Tienda[i].anio);
					printf("Precio unitario del videojuego %f \n", Tienda[i].precio);
					printf("Impuesto del videojuego %f \n", Tienda[i].imp);
					printf("precio total del videojuego %f \n", Tienda[i].total);
				}

			}
			i = i + 1;

		} while (i < alta);

	}
	break;

	case 3:
	{
		string clasi;
		printf("ingrese la Clasificacion \n");
		getline(cin, clasi);
		cin.ignore();
		int i = 0;
		do
		{


			if (Tienda[i].clas.compare(clasi) == 0)
			{
				if (Tienda[i].status == "VIDEOJUEGO ELIMINADO")
				{
					printf("\n VIDEOJUEGO ELIMINADO DE LA LISTA \n");
					i + 1;
				}
				else
				{
					printf("videojuego %d \n", Tienda[i].numart);
					printf("Nombre del videojuego %s \n", Tienda[i].titulo.c_str());
					printf("Consola del videojuego %s \n", Tienda[i].con.c_str());
					printf("Desacripcion del videojuego %s \n", Tienda[i].des.c_str());
					printf("Genero del videojuego %s \n", Tienda[i].gen.c_str());
					printf("Clasificacion del videojuego %s \n", Tienda[i].clas.c_str());
					printf("Anio del videojuego %d \n", Tienda[i].anio);
					printf("Precio unitario del videojuego %f \n", Tienda[i].precio);
					printf("Impuesto del videojuego %f \n", Tienda[i].imp);
					printf("precio total del videojuego %f \n", Tienda[i].total);
				}

			}
			i = i + 1;

		} while (i < alta);
	}
	break;
	}

}


void Archivo()
{
	ofstream archivo;
	string informacion;
	int texto;
	string texto2;

	informacion = "infotienda.txt";

	archivo.open(informacion.c_str(), ios::out);

	if (archivo.fail())
	{
		printf("No se pudo crear el archivo");
		exit(1);
	}

	archivo << "Numero de articulo" << "\t";
	archivo << "Titulo" << "\t";
	archivo << "Clasificaion" << "\t";
	archivo << "Genero" << "\t";
	archivo << "Descripcion y caracteristicas" << "\t";
	archivo << "Consola" << "\t";
	archivo << "Precio" << "\t";
	archivo << "Impuesto" << "\t";
	archivo << "Total" << "\t";
	archivo << "Año" << "\n";

	for (int i = 0; i < alta; i++)
	{
		if (Tienda[i].status == "Eliminado")
		{
			texto2 = "Registro eliminado";
			texto = i;
			archivo << texto2 << texto << "\n";
		}
		else
		{
			texto = Tienda[i].numart;
			archivo << texto << "\t" << "\t";

			texto2 = Tienda[i].titulo;
			archivo << texto2 << "\t" << "\t";

			texto2 = Tienda[i].clas;
			archivo << texto2 << "\t" << "\t";

			texto2 = Tienda[i].gen;
			archivo << texto2 << "\t" << "\t";

			texto2 = Tienda[i].des;
			archivo << texto << "\t" << "\t";

			texto2 = Tienda[i].con;
			archivo << texto2 << "\t" << "\t";

			texto = Tienda[i].precio;
			archivo << texto << "\t" << "\t";

			texto = Tienda[i].imp;
			archivo << texto << "\t" << "\t";

			texto = Tienda[i].total;
			archivo << texto << "\t" << "\t";

			texto = Tienda[i].anio;
			archivo << texto << "\t" << "\n";
		}
	}
	archivo.close();
}