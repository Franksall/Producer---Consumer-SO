<div align="center">
<table>
    <theader>
        <tr>
            <th><img src="https://github.com/rescobedoulasalle/git_github/blob/main/ulasalle.png?raw=true" alt="EPIS" style="width:50%; height:auto"/></th>
            <th>
                <span style="font-weight:bold;">UNIVERSIDAD LA SALLE</span><br />
                <span style="font-weight:bold;">CARRERA PROFESIONAL DE INGENIERÍA DE SOFTWARE</span>
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

<tr><td>TÍTULO DE LA PRÁCTICA:</td><td>PATRONES DE DISEÑO: FLYWEIGHT</td></tr>
<tr><td colspan="2">RECURSOS:
    <ul>
    <li>Oscar J Blancarte Iturralde. Introducción a los patrones de diseño. Un enfoque práctico (Spanish Edition. CreateSpace Independent Publishing Platform (2016)</li>
    </ul>
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

# PATRONES DE DISEÑO: FLYWEIGHT

## OBJETIVOS Y TEMAS

### OBJETIVOS
- Aprender el patrón FLYWEIGHT.

### TEMAS
-   El Patrón FLYWEIGHT
-   Los componentes que conforman el patrón.
-   Estructura del patrón del patrón FLYWEIGHT
-   Diagrama de secuencia del patrón FLYWEIGHT
-   El Escenario.
-   La implementación.
-   La Ejecución.

## CONTENIDO DE LA GUÍA

### MARCO CONCEPTUAL

-   PATRONES DE DISEÑO: FLYWEIGHT
    -   Flyweight o peso ligero, también conocido como Caché, es un patrón de diseño estructural que permite encajar más objetos en la cantidad de RAM disponible compartiendo partes de su estado entre múltiples objetos en lugar de mantener toda la información en cada objeto.
NOTA: Flyweight se apoya en el patrón Factory Method para su implementación.
<h1 align="center">
  <a href="https://animejs.com"><img src="https://refactoring.guru/images/patterns/content/flyweight/flyweight.png?id=e34fbacb847dd609b5e68aaf252c4db0"  width="400"/></a>
</h1>




## Los componentes que conforman el patrón son:
- Client: Objeto que dispara la ejecución.
- FlyweightFactory: Fábrica que utilizaremos para crear los objetos Flyweight u objetos ligeros.
- Flyweight: Corresponde a los objetos que deseamos reutilizar

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


## El escenario:

Tenemos unas Listas de reproducción sin utilizar Flyweight, que para poder esuchar los ultimos hits del momento escucharemso reptetivamente algunas canciones, esto pasa ya que mas del 80% de las canciones estan guardadas en distintas copias de la misma lsita de reproduccion. Lo que no queremos es que el programa ppueda consumir memoria, mas de lo que se esta consumiendo ahora.
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/0QgMj6mz/Captura-de-pantalla-2022-07-07-231059.png" width="600"/></a>
</h1>
- Fuente: (Blancarte, O.) Ilustración 91: Listas de reproducción sin utilizar Flyweight.

## La solución:


El patrón de diseño Flyweight, que nos ayudará a reutilizar los objetos de las listas. Donde en vez de que las listas de musica las dividamos en distintas memorias, nosotrs vamos a agruparlas donde los elemnetos comunes se unificaran, asi consumiremos menos cache, ademas de que sera mas facil para algun usuario al momento de elegir la musica, y no habra el 80% de repeticiones de canciones que existen.
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/xTNwycbf/Captura-de-pantalla-2022-07-07-231551.png" width="600"/></a>
</h1>
- Fuente: (Blancarte, O.) Ilustración 92: Lista de reproducción utilizando el patrón Flyweight.

# Creacion del 1er Proyecto

## La solución:


Las clases van a estar divididas en 4. Donde se vera cada parte de la implementacion de dichas estas. 
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/B6HR2zzq/Captura-de-pantalla-2022-07-07-233632.png" width="600"/></a>
</h1>
- Fuente: (Blancarte, O.) Ilustración 94: Diagrama de clases del proyecto Flyweight.

## Creacion de proyecto
Este proyecto esta divido en en 4 partes. Donde tenemos 4 carpetas creadas



En cada una de estas tendremos las diferentes clases:




##Clase PlayItem:
En esta clase se utiliza para poder identificar la canciones, estas tienen un ID, a la vez se puede saber atravezde un arreglo los byte, y asi controlar el espacio de memoria que podemos dar.
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/Qtsx9vN3/Captura-de-pantalla-2022-07-08-000530.png" width="600"/></a>
</h1>

## Clase PlayItemFactory:
Se puede que en esta calse es donde nace el Playthem, donde sirve para evaluar si la cancion estae xistiendo, o se hace una busqueda acerca de estta cancion en el map PLAY_ITEMS.
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/N0GQQmds/Captura-de-pantalla-2022-07-08-000814.png" width="600"/></a>
</h1>
## Clase PlayList:
En esta clase donde encontramos la aprte extrinseca, osea que podemos ver la reutilizacion de objetos de Playtem.
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/nc15p5gm/Captura-de-pantalla-2022-07-08-001015.png" width="600"/></a>
</h1>

## Clase FlyweightMain:

Es la clase principal donde llamamos a cada uno de las clases para poder utilizar sus metodos, asi al momento de ejecutar podremos simular las canciones que se pueden reproducir.

<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/cLnnQyWg/Captura-de-pantalla-2022-07-08-001255.png" width="600"/></a>
</h1>



## Ejecucion:

Como se puede ver en la imagen, se ve que creamos 174 listas de reproduccion, donde el maximo de mb es 2116, pero la ultima linea nos dice que solo se utilizo 1827.
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/cLrVhhk8/Captura-de-pantalla-2022-07-08-001508.png" width="600"/></a>
</h1>



# Creacion del 2do Proyecto


## Clase principal
La clase principal es donde vamos a llamar a todas las clases, practicamente se utiliza tambien para poder generar un random acerca de las variables que se van insertando. 
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/BvYVYCTn/Captura-de-pantalla-2022-06-27-091108.png" width="600"/></a>
</h1>



## Clase Empleado
La clase empleado es una interfz donde añadimos los metodos que vamos a utilizar.
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/MTJdrrcx/Captura-de-pantalla-2022-06-27-092006.png" width="600"/></a>
</h1>


## Clase FactoryEmpleado
En FactoryEmpleado tenemos los tipos de empleos que se vana asignando dependiendo del random que se obtenga.
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/QCQtJC2h/Captura-de-pantalla-2022-06-27-092314.png" width="600"/></a>
</h1>


## Clase Desarrollador
Esta clase vemos su privita final es intrisenco, ya que no cambiara su variable, donde tambien muestra en pantalla las hbailidades y el trabajo del tester.
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/j5Vt3KQ5/Captura-de-pantalla-2022-06-27-092409.png" width="600"/></a>
</h1>

## Clase Tester
Esta clase con el clase de desarrollador es donde se conectan mutuamente. y asi puden retornar el mismo resultado
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/52TVj1r3/Captura-de-pantalla-2022-06-27-092446.png" width="600"/></a>
</h1>


## Clase Director
Esta clase tiene los datos practicamente de todos los estudiantes, incluido el profe, donde en esta llamamos a las demas clases para poder asignar als habiliades y la informacion
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/YqycyMtH/Captura-de-pantalla-2022-06-27-092522.png" width="600"/></a>
</h1>

## Ejecucion
Como se puede en la imagen ahi se tiene la creacion del codigo con el Patron FLYWEIGHT.
<h1 align="center">
  <a href="two"><img src= "https://i.postimg.cc/JhDNnD6X/Captura-de-pantalla-2022-07-08-003641.png" width="600"/></a>
</h1>
## EJERCICIOS PROPUESTOS

-   Se han creado estructuras complejas con objetos más pequeños.
    -   Modificamos la línea 16 y establecemos el tamaño del arreglo playListNames en
    174, lo que significa que crearemos este número de listas de reproducción.
    Modificamos la línea 28 para que quede de la siguiente manera:
    
    
-   Elabore los ejemplos y analice los resultados.


## REFERENCIAS
-   Oscar J Blancarte Iturralde. Introducción a los patrones de diseño_ Un enfoque práctico (Spanish Edition. CreateSpace Independent Publishing Platform (2016)


## ENTREGABLES
https://drive.google.com/drive/folders/1S5wlaQm66TdT_QAa0zISRGw_tS5ATxqP?usp=sharing


https://github.com/Franksall/Patron-Flyweight


https://www.youtube.com/watch?v=kdrPz0_pKKI
