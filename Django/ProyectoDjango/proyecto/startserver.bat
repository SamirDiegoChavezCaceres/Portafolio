cmd /k "cd C:\CarpetaDeTrabajo\RepositorioLocal\ProyectoDjango\proyecto\inventarioProyecto && docker build -t devrrior/docker-django . && docker run -d -v C:/CarpetaDeTrabajo/RepositorioLocal/ProyectoDjango/proyecto/inventarioProyecto/:/app\" -p 8000:8000 devrrior/docker-django"

