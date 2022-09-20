# Talleres
Repositorio para las consignas y los sources de los talleres

## Entorno de desarrollo

### En los labos

Para levantar el entorno de desarrollo **en las PCs de los labos** hay que correr lo siguiente en una terminal:

```bash
wget https://bit.ly/vm-talleres-ssoo -O - | bash
```

### En tu propia PC

Testeado solamente en Linux y MacOS con arquitectura Intel. Si tenés Windows o MacOS con Apple Silicon, usá una PC de los labos.

Necesitás primero tener algunas dependencias instaladas:

- [VirtualBox](https://www.virtualbox.org/) (si tu procesador no es arquitectura x86_64, como por ejemplo Apple M1, usá una PC de los labos)
- [Vagrant](https://www.vagrantup.com/)
- [curl](https://curl.se/)
- [bsdtar](https://github.com/libarchive/libarchive)

Luego, alcanza con ubicarse con la terminal en el mismo directorio que este archivo y ejecutar:

```
vagrant up
```

Y cuando eso termine (tarda un rato, porque descarga una imagen de VM, instala paquetes en ella y la inicia), ejecutar:

```
vagrant ssh
```

Y eso nos deja con la terminal abierta **dentro** de la VM. Si van al directorio `/vagrant` encontrarán los archivos del directorio actual allí montados, con lo cual pueden abrir y editar los archivos del taller con una IDE o editor de textos gráfico en su PC y compilar y ejecutar dentro de la VM.
