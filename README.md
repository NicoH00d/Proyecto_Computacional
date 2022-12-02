# Proyecto_Computacional_DreamTeam

# Contexto
Este programa esta diseñado para el tiempo de ocio de aquellos aficionados por el futbol o los que deseen aprender de el, en el cual es posible crear tu propio club con diferentes atributos como el país, metodos de juego; establecer el estadio y los jugadores estrella.

De esta manera, el usuario podra crear su dream team sin restricción alguna


# Funcionalidad
Creacion del club: Nombre, país, nombre del creador (es importante el reconocimiento), y el metodo de juego (alineacion).

El programa perimtira dar de alta el jugador estrella deseado con sus caracteristicas: Nombre, posicion, pais, y atributos de modo de juego.

También permite dar de alta el estadio que sea, con su ubicación y capacidad maxima.


# Consideraciones
Este es un programa realizado en c++ mediante Visual Studio code.

Compilar con: "g++ Jugador.h Estadio.h Club.h Ultimate.h Defensa.h Mediocampista.h Delantero.h proyecto.cpp"

# Actualizaciones

17/11/2022

-Creación del diagrama UML del codigo.

-Se creo una nueva clase madre llamada Ultimate.

-Para crear la nueva clase se modifico la clase "Club", eliminando atributos de nombreclub y nombrecreador, y añadiendo el atributo de presupuesto.

28/11/2022

-Se actualizo el diagrama UML conforme a los respectivos cambios:

-Se crearon 3 clases nuevas: Delantero, Mediocampista y Defensa, para establecer la clase Jugador como clase madre de las tres.

-Implementación de herencia en codigo de la clase jugador a las clases nuevas: Delantero, Mediocampsita, Defensa.

-Implementación de composición en codigo de la claase Jugador, a la clase Club mediante el uso de vectores conforme a la cantidad de jugadores.

-Se eliminaron atibutos de la clase Jugador: Media, Tiro, Regate, Fuerza.

# Correcciones

No se realizaron correcciones
