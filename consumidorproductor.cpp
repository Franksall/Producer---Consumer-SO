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
