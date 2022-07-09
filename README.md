<div align="center">
<table>
    <theader>
        <tr>
            <th><img src="https://github.com/rescobedoulasalle/git_github/blob/main/ulasalle.png?raw=true" alt="EPIS" style="width:50%; height:auto"/></th>
            <th>
                <span style="font-weight:bold;">UNIVERSIDAD LA SALLE</span><br />
                <span style="font-weight:bold;">CARRERA PROFESIONAL DE INGENIERÍA DE SOFTWARE</span><br />
                <span style="font-weight:bold;">Sistemas Operativos</span>
            </th>            
        </tr>
    </theader>
</table>
</div>
<div align="center">
<span style="font-weight:bold;">GUÍA DE LABORATORIO</span><br />
</div>

<table>
    <theader>
        <tr><th colspan="2">INFORMACIÓN BÁSICA</th></tr>
    </theader>
<tbody>

<tr><td>TÍTULO DE LA PRÁCTICA:</td><td>Productor - Consumidor</td></tr>
</td>
</<tr>
<tr><td colspan="2">DOCENTES:
    <ul>
        <li>Richart Smith Escobedo Quispe  - r.escobedo@ulasalle.edu.pe</li>
    </ul>
</td>
</<tr>
</tdbody>
</table>

# Productor - Consumidor

## OBJETIVOS Y TEMAS

### OBJETIVOS
- Aprender sobre el funcionamiento de Productor - Consumidor, donde nos ayudara a asimlar al momento de trabajar con cualqueir Sistema Operativo

### TEMAS
-   Marco Conceptual
-   Declaración del problema
-   La implementación.
-   La Ejecución.

## MARCO CONCEPTUAL

### Problema del consumidor productor que usa Semáforos
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/C1KfvH36/Captura-de-pantalla-2022-07-09-000603.png" width="600"/></a>
</h1>
-   Semáforos en el sistema operativo, interproceso El problema del consumidor del Productor de Comunicación
es un problema de sincronización clásico. Podemos resolver este problema mediante el uso de semáforos.
Un semáforo S es una variable entera a la que sólo se puede acceder a través de dos operaciones estándar: wait() y signal().
La operación wait() reduce el valor del semáforo en 1 y la operación signal() aumenta su valor en 1.
Los semáforos son de dos tipos:

- Semáforo binario – Esto es similar a mutex lock pero no es lo mismo. Solo puede tener dos valores: 0 y 1. Su valor se inicializa en 1. Se utiliza para implementar la solución del problema de la sección crítica con múltiples procesos.
 
- Conteo de semáforos – Su valor puede variar sobre un dominio sin restricciones. Se utiliza para controlar el acceso a un recurso que tiene varias instancias.


## Declaración del problema
Tenemos un buffer de tamaño fijo. Un productor puede producir un artículo y puede colocarlo en el búfer. Un consumidor puede elegir artículos y consumirlos. Tenemos que asegurarnos de que cuando un productor coloca un artículo en el búfer, al mismo tiempo el consumidor no debe consumir ningún artículo. En este problema, el búfer es la sección crítica.

Para resolver este problema, necesitamos dos semáforos de conteo: Lleno y Vacío. "Lleno" realiza un seguimiento del número de elementos en el búfer en un momento dado y "Vacío" realiza un seguimiento del número de ranuras desocupadas.

<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/TPFvGfrY/Captura-de-pantalla-2022-07-07-223822.png" width="600"/></a>
</h1>
  
  ## El diagrama interpreta:
1. El cliente solicita al Factory la creación de un objeto Flyweight.
2. El Factory verifica si ya existe un objeto identico, si ya existe entonces devuelve como respuesta que hay un objeto existtente, pero en caso contrario crea un nuevo objeto, y asi posteriormente lo utiliza.
3. El objeto Flyweight que ya es creado del cachey lo retorna al cliente.
cliente.
Flyweight es un patrón que almmacena su cache para que despues puede reutilizarlo cuando algun usuario solicite el objeto.
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/2y4PYWwC/Captura-de-pantalla-2022-07-07-225211.png" width="600"/></a>
</h1>
- Fuente: (Blancarte, O.) Ilustración 90: Diagrama de secuencia del patrón Flyweight.


## Implementacion

Al momento crear las clases se peude ver necesitaremos distintas librerias espcialmente para poder llamar al codigo o realizar las funciones, ya que si nos las implementamos nos sera mas dificil al momento de la construccion del codigo.

<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/Hx4TFVMc/Captura-de-pantalla-2022-07-09-001308.png" width="600"/></a>
</h1>
Tendremos que crear metodos privados, donde crearemos un metodo donde nos permitira permitir o bloquear dicho funcionamiento, es donde llamaos la libreria de ctime, que nos va ser util para un mejor funcinamiento y eficacia del codigo.

<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/TwPkvsLV/Captura-de-pantalla-2022-07-09-001710.png" width="600"/></a>
</h1>

Los metodos principales son quienes despeus de crear los metodos privados se encargaran de evaluar y introduci lso datso segun las funciones que llamen, ademas que tambien se efectuara el control de tiempos segun los datos ingresados.
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/J4jSq9b0/Captura-de-pantalla-2022-07-09-002139.png" width="600"/></a>
</h1>


Los verificadores son un control de If donde lo utilizaremos para poder evaluar si los contenedores estan vaciones o no, si su almacenamiento esta lleno, despues devolvemos el dato semaforode del dato informado.
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/Gp6j6pRC/Captura-de-pantalla-2022-07-09-002458.png" width="600"/></a>
</h1>

Indicamos el constructor y el Destructor, que en el sistema sera un buen uso la momento despues de eliminar un dato, ya que el sistema se evaluaria y si no hat datos, pediria datos al iterador del sistema.   
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/bYmZvBGG/Captura-de-pantalla-2022-07-09-002837.png" width="600"/></a>
</h1>


Finalmente tendriamos nuestro main donde llamamos nuestros metodos utilizados, segun la respuesta del menu iterativo que se realizo, donde cada opcion hace que el dato vata a un metodo, retornando el tiempo de ejecucion y el resultado esperado.
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/kG2qGwZ8/Captura-de-pantalla-2022-07-09-003127.png" width="600"/></a>
</h1>



## ENTREGABLES
https://drive.google.com/drive/folders/1_fRyAu5Ymi3CdkDmdV5hA73JX4j1OnGt
https://github.com/Franksall/Producer---Consumer-SO

https://www.youtube.com/watch?v=kdrPz0_pKKI
