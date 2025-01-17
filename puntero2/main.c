#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {
    int peliculaSeleccionada = -1;
    int *peliculaPuntero;

    peliculaPuntero = &peliculaSeleccionada;
    

    int clienteSeleccionado = -1;
    int *clientepuntero;

    clientepuntero = &clienteSeleccionado;

    
    
    char peliculas[10][4][40]={
                                {"1","Avatar","10:20","Fantasia"},
                                {"2","Avengers","11:30","Accion"},
                                {"3","Ted","12:00","Comedia"},
                                {"4","Shrek","12:30","Animacion"},
                                {"5","Megamente","9:00","Animacion"},
                                {"6","Intensamente","8:00","Animacion"},
                                {"7","Transformers","8:00","Accion"},
                                {"8","Donde esta el fantasma","$4:20","Comedia"},
                                {"9","Pitufos","14:00","Animacion"},
                                {"10","Titanic","12:00","Suspenso"}};
    int precio[3]={700,350,300};//normal , ninos y 3ra edad
    char clientes[5][2][40]={{"",""},
                             {"Luis","123456788"},
                             {"",""},
                             {"",""},
                             {"",""}};

    int reserva[10][4]={{-1,-1,-1,-1},//pelicula 0, cliente 1, 3 tickets, precio 4 (en centavos)
                         {-1,-1,-1,-1},
                         {-1,-1,-1,-1},
                         {-1,-1,-1,-1},
                         {-1,-1,-1,-1},
                         {-1,-1,-1,-1},
                         {-1,-1,-1,-1},
                         {-1,-1,-1,-1},
                         {-1,-1,-1,-1},
                         {-1,-1,-1,-1}};


    int opcion1=0,opcion2=0,opcion3=0;
    int i=0;
    // for (i = 0; i < 5; i++){
    
    // }
    // printf("valor de i %d",i);
    guardarPeliculas(peliculas);  // Guarda las películas predefinidas en el archivo al inicio del programa.
    leerPeliculas(peliculas);     // Lee las películas desde el archivo (por si ya hay datos guardados).
    leerReservas(reserva);
    leerClientes(clientes);
    
    do
    {
        printf("Escoja una opcion:\n1.Ingresar Cliente\n2.Ver Peliculas\n3.Buscar Pelicula\n4.Comprar Ticket\n5.Ver Compras\n>>");
        scanf("%d",&opcion2);
        switch (opcion2)
        {
        case 1:
            ingresarCliente(clientes);
            break;
        case 2:
            listarPeliculas(peliculas);
            break;
        case 3:{
            printf("1.Por nombre\n2.Por Genero\n>>");
            scanf("%d",&opcion3);
            switch (opcion3)
            {
            case 1:
                buscarPorNombreConPuntero(peliculas,peliculaPuntero);
                break;
            case 2:
                buscarporGenero(peliculas);
                break;
            default:
                break;
            }
            break;
        }
        case 4:
            comprarTicket(peliculas,precio,clientes,reserva,peliculaPuntero,clientepuntero);
            break;
        case 5:
            verCompras(reserva , peliculas , clientes);
            break;
        case 6:
            imprimirClientes(clientes);
            break;
        default:

            break;
        }
        printf("Desea escoger una nueva opcion: 1.Si/2.No\n>>");
        scanf("%d",&opcion1);
    } while (opcion1==1);
    


    return 0;
}