# tp1
2a-Investigar el archivo .gitignore ¿Por qué es conveniente incluirlo?
¿Cuándo se debe hacer?¿Cómo configuraría el archivo .gitignore?

El archivo .gitignore es un archivo de texto que se usa para indicar a Git qué archivos y directorios ignorar. Es conveniente incluirlo para mantener el repositorio limpio y organizado, lo que facilita la colaboración y el control de versiones

¿Cuándo se debe usar?
Cuando se quiere evitar que ciertos tipos de archivos se envíen al repositorio 
Cuando se quiere mantener fuera todos los archivos que no se necesitan controlar con Git 
Cuando se quiere optimizar el repositorio y mantener un control más eficiente sobre el proyecto 

¿Como se usa?
Para crear un archivo .gitignore local, crea un archivo de texto y asígnale el nombre ".gitignore" . Luego, se edita este archivo según sea necesario. Cada nueva línea debe incluir un archivo o carpeta adicional que se quiera que Git lo ignore.
Las entradas de este archivo también pueden seguir un patrón coincidente:
*- se utiliza como una coincidencia comodín.
/- se usa para ignorar las rutas relativas al archivo .gitignore.
#- es usado para agregar comentarios


3c- Revise los archivos subidos en su repositorio de github. ¿Qué archivos
vé?¿Cuál cree que no hace falta que esté?

Los archivos que se ven son los archivos README.md .c y los .exe, los que no harian falta que esten son los .exe

4g- Si resolvió correctamente los apartados 2 y 3 del punto anterior notará
que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el
punto 4? ¿Es igual a los anteriores? ¿Por qué? Responder en el archivo
readme.md 

Porque en ambos casos se está accediendo a la dirección de memoria de la variable var.
En el punto 2 se muestra el contenido del puntero pvar, que fue inicializado con &var, por lo tanto almacena la dirección de esa variable.
En el punto 3 se accede directamente a la dirección de var con &var.
Ambos apuntan al mismo lugar, por eso el valor es igual.

En el punto 4 se imprime la dirección de memoria del puntero pvar, es decir, dónde está almacenado el puntero en sí como variable.
Esto es distinto de la dirección de la variable a la que apunta, porque el puntero también ocupa un espacio independiente en memoria.

No, la dirección del puntero (&pvar) es distinta de la dirección almacenada por el puntero (pvar) o de la dirección de la variable (&var).
Esto se debe a que son ubicaciones distintas en la memoria:
&var: dirección de la variable var.
pvar: contiene esa dirección.
&pvar: dirección donde está guardado el puntero en memoria.
Cada una tiene un rol diferente y ocupa un espacio propio.
