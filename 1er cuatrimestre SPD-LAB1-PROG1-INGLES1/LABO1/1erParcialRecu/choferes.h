#include <string.h>

#define LIBRE -1
#define OCUPADO 1
typedef struct
{
    int idNacionalidad;
    char pais[20];
  char idioma[20];
  char descripcion[20];


} eNacionalidad;
typedef struct
{
    char nombre[20];
  char apellido[20];
  char dni[20];
  int legajo;
  int idNacionalidad;
  char telefono[20];
  int edad;
  char sexo;
  int estado;
  int id;


} eChofer;
void hardCodearNscionalidad(eNacionalidad listado[],int tam);
void hardCodearChofer(eChofer listado[],int tam);
void mostrarUnChofer (eChofer listado, eNacionalidad nacionalidad[],int tamN);
void mostrarTodosLosChofer (eChofer listado[], int tam,eNacionalidad listadoN[],int tamN);
eChofer buscarChoferId(eChofer lista[],int tam, int idChofer);
void mostrarNombreChofer(eChofer listado);
int cargarChofer(eChofer listado[],int tam);
int buscarLibreChofer(eChofer listado[],int tam);
int inicializarChofer(eChofer listado[], int tam);
int generadorDeIdChofer(eChofer listado[],int tam);

void guardarChofer(eChofer listado[],char nombre[],char apellido[],char dni[],int legajo, int idNacionalidad,char telefono[],int edad,char sexo,int estado,int indice,int id);
int buscarChofer(eChofer listado[],int tam,int id);
int modificarChofer(eChofer listado[],int tam,eNacionalidad listadoN[],int tamN);
float promedioEdad(eChofer listado[],int tam);
void mostrarPromedio(eChofer listado[],int tam);
float promedioMasculino(eChofer listado[],int tam);
float promedioFemenino(eChofer listado[],int tam);
void mostrarPromedioMyF(eChofer listado[],int tam);
void mostrarMismaNacio(eChofer listado[],int tam,eNacionalidad listadoN[],int tamN);
void ordenarChoferNacYNom(eChofer listado[],int tam,eNacionalidad listadoN[],int tamN);
void mostrarChoferNacYNom(eChofer listado[],int tam,eNacionalidad listadoN[],int tamN);
//funciones de pedir datos
void pedirCadena(char mensaje[], char mensajeError[], char laCadena[]);
int pedirFlotante(char mensaje[]);
int pedirEntero(char mensaje[]);
char pedirCaracter(char mensaje[]);


int pedirNumero1(char texto[],int* numero);
int validarNumero(char texto[]);
int guardarNumero(int* numero,char texto[],char textoError[],int min,int max);

int pedirFlotante1(char mensaje[],float* numero);
int validarFlotante(char cadena[]);
int guardarFlotante(float* numero,char mensaje[],char mensajeError[],int min,int max);

int pedirCadena1(char cadena[],char mensaje[]);
int validarCadenaSoloLetras(char cadena[]);
int guardarCadenaSoloLetras(char cadena[],char mensaje[],char mensajeError[],int tam);


int pedirCadenaLetras_Num(char cadena[],char mensaje[]);
int validarCadenaLetras_Num(char cadena[]);
int guardarCadenaletras_Num(char cadena[],char mensaje[],char mensajeError[],int tam);

int pedirCadenaSoloNumeros(char cadena[],char mensaje[]);
int validarCadenaSoloNumeros(char cadena[]);
int guardarCadenaSoloNumeros(char cadena[],char mensaje[],char mensajeError[],int tam);

int pedirSexo(char cadena[],char mensaje[]);
int validarSexo(char cadena[]);
int guardarSexo(char cadena[],char mensaje[],char mensajeError[]);
