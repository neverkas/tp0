/*
 * main.c
 *
 *  Created on: 28 feb. 2019
 *      Author: utnso
 */

#include "tp0.h"

int main(void)
{
	/*---------------------------------------------------PARTE 2-------------------------------------------------------------*/
	int conexion;
	char* ip;
	char* puerto;
	char* valor;

	t_log* logger;
	t_config* config;

	// creamos una instancia de log
	logger = iniciar_logger();
	// agregamos en el registro de la instancia de logs un mensaje
	log_info(logger, "soy un log");

	// creamos el archivo de configuracion
	config = leer_config();
	// obtenemos el valor de variable "clave"
	char *valor = config_get_string_value(config, "CLAVE");
	// agregamos al registro de logs el valor
	log_info(logger, valor);

	leer_consola(logger);


	/*---------------------------------------------------PARTE 3-------------------------------------------------------------*/

	//antes de continuar, tenemos que asegurarnos que el servidor esté corriendo porque lo necesitaremos para lo que sigue.

	//crear conexion

	//enviar CLAVE al servirdor

	paquete(conexion);

	terminar_programa(conexion, logger, config);

	// destruimos la instancia de logger que creamos al principio
	log_destroy(logger);
	// destruimos el config (es un puntero)
	config_destroy(config);
}

t_log* iniciar_logger(void)
{
	// utilizamos funciones de la biblioteca commons
	// creamos una instancia de logger, indicamos en que archivo se agregarán los logs y de que tipo serán
	return log_create("tp0.log", "TP0", 1, LOG_LEVEL_INFO);
}

t_config* leer_config(void)
{
	return config_create("tp0.config");
}

void leer_consola(t_log* logger)
{
	char* leido;

	//El primero te lo dejo de yapa
	leido = readline(">");


}

void paquete(int conexion)
{
	//Ahora toca lo divertido!

	char* leido;
	t_paquete* paquete;


}

void terminar_programa(int conexion, t_log* logger, t_config* config)
{
	//Y por ultimo, para cerrar, hay que liberar lo que utilizamos (conexion, log y config) con las funciones de las commons y del TP mencionadas en el enunciado
}
