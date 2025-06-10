# Sistema de adopción de mascotas

## Introducción

### Descripción general del sistema
Este sistema está diseñado para el Refugio "Patas y Colitas" con el fin de optimizar y centralizar la gestión de solicitudes de adopción y el seguimiento de las mascotas adoptadas. Permitirá al refugio llevar un control eficiente de los animales disponibles para adopción, los interesados en adoptar y el estado de las adopciones, mejorando así la eficiencia de sus procesos y el bienestar de los animales.

### Objetivo General
Gestionar de manera eficiente y centralizada las solicitudes de adopción de mascotas y realizar el seguimiento post-adopción para el Refugio "Patas y Colitas", asegurando un proceso transparente y organizado que beneficie tanto a las mascotas como a sus futuros adoptantes.

### Objetivos específicos
-Registrar y mantener actualizada la información de las mascotas disponibles para adopción.

-Permitir a los usuarios interesados en adoptar registrar sus solicitudes y facilitar su revisión.

-Implementar un sistema de seguimiento para monitorear el bienestar de las mascotas una vez adoptadas.

## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 1

HU-01: Como personal del refugio quiero registrar una nueva mascota para que su información esté disponible para posibles adoptantes.

Criterios de aceptación:
-El sistema permite ingresar todos los datos requeridos (nombre, especie, raza, edad, estado de salud, descripción, fotos) y los guarda correctamente.
-Si falta algún campo obligatorio, el sistema muestra un mensaje de error y no permite el registro.

HU-02: Como personal del refugio quiero modificar la información de una mascota existente para mantener sus datos al día.

Criterios de aceptación:
-El sistema permite editar cualquier campo de la mascota y guardar los cambios exitosamente.
-Si se intenta modificar una mascota que no existe, el sistema muestra un mensaje de "mascota no encontrada".

HU-03: Como personal del refugio quiero marcar una mascota como "adoptada" para retirarla de la lista de disponibles.

Criterios de aceptación:
-El estado de la mascota cambia a "adoptada" y ya no aparece en las búsquedas de adopción.
-Si se intenta marcar como "adoptada" una mascota que ya está en ese estado, el sistema indica que la mascota ya no está disponible.

HU-04: Como personal del refugio quiero buscar mascotas por criterios (ej. especie, edad) para encontrar rápidamente la información deseada.

Criterios de aceptación:
-El sistema muestra una lista filtrada de mascotas que coinciden con los criterios de búsqueda.
-Si no hay mascotas que coincidan con los criterios, el sistema muestra un mensaje indicando "no se encontraron resultados".

HU-05: Como personal del refugio quiero añadir múltiples fotos a una mascota para dar una mejor visualización a los posibles adoptantes.

Criterios de aceptación:
-El sistema permite cargar varias imágenes y las asocia correctamente a la mascota.
-Si el formato de la imagen no es compatible , el sistema muestra un error y no permite la carga.

HU-06: Como personal del refugio quiero eliminar una mascota del sistema para borrar registros erróneos o duplicados.

Criterios de aceptación:
-El sistema muestra una confirmación antes de eliminar y, al aceptar, la mascota es eliminada de la base de datos.
-Si se intenta eliminar una mascota que tiene solicitudes de adopción pendientes, el sistema advierte que no se puede eliminar hasta resolver las solicitudes.

## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 2

HU-07: Como posible adoptante quiero registrarme en el sistema para poder enviar solicitudes de adopción.

Criterios de aceptación:
-El sistema permite crear una cuenta de usuario con los datos necesarios (nombre, email, teléfono, etc.).
-Si el email ya está registrado, el sistema muestra un mensaje de "email ya en uso".

HU-08: Como posible adoptante quiero enviar una solicitud de adopción para una mascota específica para iniciar el proceso.

Criterios de aceptación:
-El sistema registra mi solicitud asociada a la mascota y me envía una confirmación.
-Si intento enviar una solicitud para una mascota que ya ha sido adoptada, el sistema me informa que la mascota ya no está disponible.

HU-09: Como personal del refugio quiero ver todas las solicitudes de adopción pendientes para gestionarlas.

Criterios de aceptación:
-El sistema muestra una lista clara de todas las solicitudes pendientes, incluyendo el nombre del solicitante y la mascota.
-Si no hay solicitudes pendientes, el sistema indica que no hay solicitudes para revisar.

HU-10: Como personal del refugio quiero aprobar una solicitud de adopción para avanzar con el proceso.

Criterios de aceptación:
-El sistema cambia el estado de la solicitud a "aprobada" y notifica al solicitante.
-Si la solicitud ya está en estado "rechazada", el sistema no permite aprobarla y muestra un mensaje.

HU-11: Como personal del refugio quiero rechazar una solicitud de adopción para informar al solicitante.

Criterios de aceptación:
-El sistema cambia el estado de la solicitud a "rechazada" y permite incluir una razón para la decisión.
-Si se intenta rechazar una solicitud que ya ha sido aprobada, el sistema lo impide.

HU-12: Como posible adoptante quiero ver el estado de mis solicitudes de adopción para saber si han sido procesadas.

Criterios de aceptación:
-El sistema me muestra el estado actual de cada una de mis solicitudes (pendiente, aprobada, rechazada).
-Si no he enviado ninguna solicitud, el sistema indica que no tengo solicitudes en curso.

## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 3

HU-13: Como personal del refugio quiero programar recordatorios de seguimiento para las mascotas adoptadas para asegurar su bienestar.

Criterios de aceptación:
-El sistema permite establecer fechas para seguimientos y asocia el recordatorio a la mascota adoptada.
-Si se intenta programar un seguimiento para una mascota que no ha sido adoptada, el sistema muestra un error.

HU-14: Como personal del refugio quiero registrar los resultados de un seguimiento para documentar el estado de la mascota.

Criterios de aceptación:
-El sistema permite añadir notas y observaciones sobre la visita de seguimiento o la conversación telefónica.
-Si se intenta registrar un seguimiento para una mascota que no tiene un registro de adopción, el sistema lo impide.

HU-15: Como personal del refugio quiero ver el historial de seguimientos de una mascota para revisar su evolución post-adopción.

Criterios de aceptación:
-El sistema muestra un historial cronológico de todos los seguimientos realizados para una mascota específica.
-Si la mascota no tiene seguimientos registrados, el sistema indica que no hay historial disponible.

HU-16: Como personal del refugio quiero generar un listado de mascotas con seguimientos pendientes para organizar mi trabajo.

Criterios de aceptación:
-El sistema produce una lista de mascotas cuya fecha de seguimiento ha llegado o está próxima.
-Si no hay seguimientos pendientes, el sistema muestra una lista vacía.

HU-17: Como personal del refugio quiero adjuntar documentos (ej. informes veterinarios) al seguimiento de una mascota para tener información completa.

Criterios de aceptación:
-El sistema permite subir archivos (PDF, imágenes) y los asocia al registro de seguimiento correspondiente.
-Si el archivo excede el tamaño máximo permitido, el sistema muestra un mensaje de error y no permite la carga.

HU-18: Como personal del refugio quiero actualizar el estado de una mascota adoptada (ej. si se extravió o fue devuelta) para mantener los registros precisos.

Criterios de aceptación:
-El sistema permite cambiar el estado post-adopción de la mascota y registra la fecha del cambio.
-Si se intenta cambiar el estado de una mascota que no ha sido adoptada, el sistema muestra un error.