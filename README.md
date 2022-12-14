# Talleres
Repositorio para las consignas y los sources de los talleres

## Entorno de desarrollo

Para los talleres necesitamos que todo el alumnado use el mismo entorno de desarrollo. Así nos aseguramos de que tengan todas las dependencias necesarias instaladas,  que tengan las versiones correctas del compilador y del sistema operativo. Además, necesitamos que trabajen dentro de una máquina virtual porque, como van a estar trabajando con drivers, al cometer un error podrían fácilmente colgar la máquina en la que trabajen. Cargar los drivers dentro de la VM les permite fácilmente reiniciarla sin perder los archivos con el que venían trabajando.

Pueden usar tanto sus PCs como los laboratorios del 0+i, pero cada caso tiene instrucciones diferentes.

# Talleres 3 y 4

### Para trabajar en las PCs de los labos del 0+inf

Para levantar el entorno de desarrollo **en las PCs de los labos** hay que correr lo siguiente en una terminal:

```bash
wget https://bit.ly/vm-talleres-ssoo -O - | bash
```

Cuando el script termine de ejecutar, va a imprimir por pantalla indicaciones.

### En tu propia PC

Testeado solamente en Linux, MacOS y Windows con arquitectura **Intel**. Si tenés una compu que no tenga arquitectura Intel (por ejemplo las últimas Mac con Apple Silicon), esto NO va a funcionar así que usá una PC de los labos o consultá a la lista de docentes.

Necesitás primero tener algunas dependencias instaladas:

- [VirtualBox](https://www.virtualbox.org/)
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

# Taller 5 (seguridad informática)

## En las PCs de los labos

1. Ejecutar lo siguiente:

```
wget https://bit.ly/tallerseginf -O - | bash

```

2. Abrir el programa VirtualBox y encender la VM llamada so-labo-seginf

## En una PC personal

1. Es necesario tener instalado [VirtualBox](https://www.virtualbox.org/).

2. Descargar el [archivo OVA](https://drive.google.com/drive/folders/1SDX0dZgOsTuJwx6QvnLIXP7_Kla0HbES?usp=sharing).

3. Importar el archivo descargado en VirtualBox (Menú Archivo > Importar servicio virtualizado...).

4. Encender la VM importada.
