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
