#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <wchar.h>

using namespace std;

struct info
{
	int numart, anio, precio, imp, total;
	string titulo, des, con, clas, cara, gen;
};


int main()
{

	info alta[3];

	int opc, mod;

	do
	{
		cout << "\t   Menu De Opciones" << endl;    //aqui esta el menu principal

		cout << "1- Alta" << endl;
		cout << "2- modificación" << endl;
		cout << "3- Baja" << endl;
		cout << "4- Lista" << endl;
		cout << "5- Limpiar Pantalla" << endl;
		cout << "6- Salir" << endl;
		cin >> opc;
		cin.ignore();
		switch (opc)
		{
		case 1:             //se da de alta un juego
		{
			for (int i = 0; i < 3; i++)
			{
				printf("Ingrese el numero de articulo \n");
				scanf_s("%d", &alta[i].numart);
				cin.ignore();

				printf("Ingrese el titulo del juego \n");
				getline(cin, alta[i].titulo);
				cin.ignore();

				printf("Ingrese la clasificacion del videojuego \n");
				getline(cin, alta[i].clas);
				cin.ignore();

				printf("ingrese el genero del videojuego \n");
				getline(cin, alta[i].gen);
				cin.ignore();

				printf("ingrese una descripción del juego \n");
				getline(cin, alta[i].des);
				cin.ignore();

				printf("ingrese la consola en que esta disponible el juego \n");
				getline(cin, alta[i].con);
				cin.ignore();

				printf("Ingrese el precio unitario del videojuego \n");
				scanf_s("%d", &alta[i].precio);
				cin.ignore();

				printf("ingrese el impuesto del videojuego \n");
				scanf_s("%d", &alta[i].imp);
				cin.ignore();

				printf("Ingrese el precio total del videojuego \n");
				scanf_s("%d", &alta[i].total);
				cin.ignore();

				printf("ingrese el anio de salida del videojuego \n");
				scanf_s("%d", &alta[i].anio);
				cin.ignore();

			}
		}

		break;



		case 2:
		{
			cout << " modificara la lista? 1 si, 2 no" << endl;
			cin >> mod;
			if (mod == 1)
			{
				return main();
				system("pause");
			}

			else
			{
				exit(1);
			}


			break;  //aqui se modificara un dato de algun articulo
		}

		case 3:
		{
			break;  //aqui se dara de baja un articulo
		}


		case 4:
		{
			for (int i = 0; i < 3; i++)
			{
				printf("numero de articulo: %d\n", alta[i].numart);
				printf("Titulo del videojuego: %s \n", alta[i].titulo.c_str);
				printf("clasificacion: %s \n", alta[i].clas.c_str);
				printf("genero: %s \n", alta[i].gen.c_str);
				printf("descripcion: %s \n", alta[i].des.c_str);
				printf("consola: %s \n", alta[i].con.c_str);
				printf("precio:%d \n", alta[i].precio);
				printf("impuesto : %d \n", alta[i].imp);
				printf("total: %d \n", alta[i].total);
				printf("anio: %d \n", alta[i].anio);

				system("pause");
			}



			break; //Aqui aparecera una lista de los articulos 



		}
		case 5:
		{
			system("cls");
			return main();
			break;  // Aqui se limpiara la pantalla
		}


		case 6:
		{
			exit(1);
			break;  // Se cierra el programa
		}

		}
	}
	while (opc != 6);
}