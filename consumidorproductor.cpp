#include <iostream>
// random
#include <random>
#include <ctime>
// Para usar el sleep enWindows/Linux:
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif 


class ConsumerProducer_Class{
private:
	std::string container[20]; // almacena
	int container_counter = 0; // utilizado por el productor
	int consumer_counter = 0; // usa consumido

	// funcionamiento interno
	bool advancing_semaphore = true; // true = procede
	bool empty_semaphore = true;
	bool full_semaphore = false;
	void checkFull(); 
	void checkEmpty(); 
	// Bloqueo / PErmiso
	void wait(); // bbloquear
	void signal(); // permitir
	// metodoso principales
	void Producer(std::string item);
	void Consumer();

	// check
	bool isAvailable(); // si
public:
	// Constructor/Destructor
	ConsumerProducer_Class();
	~ConsumerProducer_Class();

	// Interfaz
	void useProducer(std::string item); //productor y sconsu
	void useConsumer();
};
// -------- Metodos privado--------

// Procesos de permitir o bloquear
void ConsumerProducer_Class::wait(){
	// Se generar un nuemror andom
	std::srand(std::time(nullptr));
	int timing = rand() % 6;

	sleep(timing);
	advancing_semaphore = false;
}
void ConsumerProducer_Class::signal(){
	advancing_semaphore = true;
}
// Metodos princiaples
void ConsumerProducer_Class::Producer(std::string item){
	if(isAvailable() != true)	return;
	std::cout << "Estado del productor: Comprobando si el buffer está lleno..." << std::endl;
	wait();
	checkFull();
	if(full_semaphore == true){
		std::cout << "[Error]: El búfer está lleno, es necesario utilizar el consumidor." << std::endl;
		signal();
		return;
	}

	std::cout << "Estado del productor: [trabajando >:v]" << std::endl;
	wait(); 

	std::cout << "[trabajando ando :D]: Accediendo al contenedor..." << std::endl;
	wait();


	std::cout << "[trabajando]: Guardando elemento..." << std::endl;
	container[container_counter] = item;
	container_counter++;
		
	// Esto hace que sea circular
	if (container_counter == 20){ 
		container_counter = 0; 
	}

	std::cout << "[trabajando]: Elemento guardado." << std::endl;
	std::cout << "[trabajando]: Proceso terminado." << std::endl;

	std::cout << "Estado del productor: [durmiendo]" << std::endl;

	signal(); // desbloquea advance_semaphore
}

void ConsumerProducer_Class::Consumer(){
	if(isAvailable() != true) return;
	checkEmpty();
	if(empty_semaphore == true){
		std::cout << "Estado del consumidor: [Error]: No hay artículos para consumir. Usar productor." << std::endl;
		return;
	}

	std::cout << "Estado del consumidor: [trabajando]" << std::endl;
	wait(); // bloquea advancing_semaphore

	std::cout << "[trabajando]: Accediendo al contenedor..." << std::endl;

	std::cout << "[trabajando]: Consumiendo elemento..." << std::endl;
	std::string deleted_item = container[consumer_counter];
	container[consumer_counter] = "";
	consumer_counter++;
	

	if (consumer_counter == 20){ 
		consumer_counter = 0; 
	}

	std::cout << "[trabajando]: Elemnto [ " << deleted_item << " ] consumido." << std::endl;
	std::cout << "[trabajando]: Proceso terminado." << std::endl;

	std::cout << "Estado del consumidor: [durmiendo]" << std::endl;

	signal(); // desbloquea advance_semaphore
}
