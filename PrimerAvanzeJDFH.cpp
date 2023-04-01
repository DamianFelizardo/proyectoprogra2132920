#include <iostream>


using namespace std;

int main()

{
	int opc, prec, mod, imp, año, total;

	char titu[20], cla[20], cat[20], numart[20], con[20], des[40];
	cout << "\t   Menu De Opciones" << endl;    //aqui esta el menu principal

	cout << "1- Alta" << endl;
	cout << "2- modificación" << endl;
	cout << "3- Baja" << endl;
	cout << "4- Lista" << endl;
	cout << "5- Limpiar Pantalla" << endl;
	cout << "6- Salir" << endl;
	cin >> opc;

	switch (opc)
	{
	case 1:             //se da de alta un juego
	{
		cout << "Ingrese el número de articulo" << endl;
		cin >> numart;

		cout << "Ingrese el titulo del videojuego" << endl;
		cin >> titu;

		cout << "Ingrese año de lanzamiento" << endl;
		cin >> año;

		cout << "Ingrese genero del videojuego" << endl;
		cin >> cat;

		cout << "ingrese la clasificacion del videojuego" << endl;
		cin >> cla;

		cout << "ingrese la consola en la que esta disponible" << endl;
		cin >> con;

		cout << "ingrese una descripcion para el  videojuego" << endl;
		cin >> des;

		cout << "Ingrese el precio unitario del videojuego" << endl;
		cin >> prec;

		cout << "ingrese el impuesto del producto" << endl;
		cin >> imp;
		
		cout << "ingrese el precio total del producto" << endl;
		cin >> total;

		cout << "Desea regresar al menu 1 si, 2 no" << endl;
		cin >> opc;
		if (opc == 1)
		{
			return main();
			system("pause");
		}

		{
			exit(1);
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
