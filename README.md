# Talleres
Repositorio para las consignas y los sources de los talleres

## Entorno de desarrollo

Para los talleres necesitamos que todo el alumnado use el mismo entorno de desarrollo. Así nos aseguramos de que tengan todas las dependencias necesarias instaladas,  que tengan las versiones correctas del compilador y del sistema operativo. Además, necesitamos que trabajen dentro de una máquina virtual porque, como van a estar trabajando con drivers, al cometer un error podrían fácilmente colgar la máquina en la que trabajen. Cargar los drivers dentro de la VM les permite fácilmente reiniciarla sin perder los archivos con el que venían trabajando.

Pueden usar tanto sus PCs como los laboratorios del 0+i, pero cada caso tiene instrucciones diferentes.

### Para trabajar en las PCs de los labos del 0+inf

Para levantar el entorno de desarrollo **en las PCs de los labos** hay que correr lo siguiente en una terminal:

```bash
wget https://bit.ly/vm-talleres-ssoo -O - | bash
```

### En tu propia PC

Testeado solamente en Linux, MacOS y Windows con arquitectura **Intel**. Si tenés una compu que no tenga arquitectura Intel (por ejemplo las últimas Mac con Apple Silicon), esto NO va a funcionar así que usá una PC de los labos o consultá a la lista de docentes.

Necesitás primero tener algunas dependencias instaladas:

- [VirtualBox](https://www.virtualbox.org/) (si tu procesador no es arquitectura x86_64, como por ejemplo Apple M1, usá una PC de los labos)
- [Vagrant](https://www.vagrantup.com/)
- En Linux y MacOS también instalar:
  - [curl](https://curl.se/) (`sudo apt install curl` en Ubuntu)
  - [bsdtar](https://github.com/libarchive/libarchive) (`sudo apt install bsdtar` en Ubuntu)

Luego, alcanza con ubicarse con la terminal en el mismo directorio que este archivo y ejecutar:

```
vagrant up
```

Y cuando eso termine (tarda un rato, porque descarga una imagen de VM, instala paquetes en ella y la inicia), ejecutar:

```
vagrant ssh
```

Y eso nos deja con la terminal abierta **dentro** de la VM. Si van al directorio `/vagrant` encontrarán los archivos del directorio actual allí montados, con lo cual pueden abrir y editar los archivos del taller con una IDE o editor de textos gráfico en su PC y compilar y ejecutar dentro de la VM.
