void guardarClientes(char clientes[][2][40]);
void leerClientes(char clientes[][2][40]);
void ingresarCliente(char clientes[][2][40]);
void imprimirClientes(char clientes[][2][40]);
//
//
void guardarPeliculas(char peliculas[][4][40]);
void leerPeliculas(char peliculas[][4][40]);
void buscarPorNombreConPuntero(char peliculas[][4][40], int *indicePelicula);
void buscarporGenero(char peliculas[][4][40]);
void listarPeliculas(char peliculas[][4][40]);
void comprarTicket(char peliculas[][4][40], int precio[3], char clientes[5][2][40], int reserva[][4], int *indicePelicula, int *indiceCliente);
void verCompras(int reserva[][4], char peliculas[][4][40], char clientes[][2][40]);
void guardarReservas(int reserva[][4]);
void leerReservas(int reserva[][4]);