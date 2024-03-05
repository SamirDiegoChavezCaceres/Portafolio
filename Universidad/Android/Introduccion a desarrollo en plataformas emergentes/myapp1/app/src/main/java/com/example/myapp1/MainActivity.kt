package com.example.myapp1

import android.content.Context
import android.graphics.Bitmap
import android.graphics.BitmapFactory
import android.net.Uri
import android.os.Bundle
import android.os.Environment
import android.provider.MediaStore
import android.util.Log
import androidx.activity.ComponentActivity
import androidx.recyclerview.widget.RecyclerView
import androidx.recyclerview.widget.StaggeredGridLayoutManager
import java.io.File
import java.io.FileInputStream
import java.io.IOException


class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val touristPlaces = listOf(
//            TouristPlace("Machu Picchu", "Historical site", R.drawable.peru),
//            TouristPlace("The Inca Trail", "The famous Inca Trail is a four-day hike,", R.drawable.inca_trail),
//            TouristPlace("Cusco's Architectural Treasures", "Historical site", R.drawable.cusco_wall),
//            TouristPlace("Lake Titicaca", "Highest navigable lake", R.drawable.lake),
//            TouristPlace("Colca Canyon", "Historical site", R.drawable.colca),
            TouristPlace("Nazca Lines", "Highest navigable lake", leerImagenDesdeAlmacenamientoExternoCompartido(applicationContext, "nazca")),
//            TouristPlace("The Sacred Valley", "Historical site", R.drawable.valley),
//            TouristPlace("Ollantaytambo ", "Highest navigable lake", leerImagenDesdeAlmacenamientoExternoCompartido(applicationContext, "ollantaytambo.jpg")),
            TouristPlace("Arequipa's Historical City Center", "Historical site", leerImagen(applicationContext, "DCIM/arequipa.jpg")),
            TouristPlace("Puerto Maldonado and the Amazon", "Highest navigable lake", leerImagenDesdeAlmacenamientoExterno(applicationContext,"puerto.jpg")),

            )

        val recyclerView: RecyclerView = findViewById(R.id.recyclerView)

        val layoutManager = StaggeredGridLayoutManager(2, StaggeredGridLayoutManager.VERTICAL)
        recyclerView.layoutManager = layoutManager
        recyclerView.adapter = TouristPlaceAdapter(touristPlaces)


        val mAlbumsList = ArrayList<ImageItem>()
        val uri = MediaStore.Files.getContentUri("external");
        val projection = arrayOf( MediaStore.Files.FileColumns._ID,
            MediaStore.Files.FileColumns.DATA,
            MediaStore.Files.FileColumns.DATE_ADDED,
            MediaStore.Files.FileColumns.MEDIA_TYPE,
            MediaStore.Files.FileColumns.MIME_TYPE,
            MediaStore.Files.FileColumns.TITLE)
        val selection = "${MediaStore.Files.FileColumns.MEDIA_TYPE} = " +
                "${MediaStore.Files.FileColumns.MEDIA_TYPE_IMAGE} OR " +
                "${MediaStore.Files.FileColumns.MEDIA_TYPE} = " +
                "${MediaStore.Files.FileColumns.MEDIA_TYPE_VIDEO}"

        val cursor = contentResolver.query(uri, projection, selection, null,
            MediaStore.Files.FileColumns.DATE_ADDED + " DESC");

        mAlbumsList.clear();
        if (cursor != null) {
            Log.d("AUA",mAlbumsList.toString())
            val image_column_index: Int = cursor
                .getColumnIndex(MediaStore.Files.FileColumns._ID)
            val type_column_index: Int =
                cursor.getColumnIndex(MediaStore.Files.FileColumns.MIME_TYPE)
            val count: Int = cursor.getCount()
            for (i in 0 until count) {
                cursor.moveToPosition(i)
                val id: Int = cursor.getInt(image_column_index)
                val mime_type: String = cursor.getString(type_column_index)
                val imageItem = ImageItem()
                imageItem.id = id
                //lastId = id;
                if (!mime_type.contains("video")) imageItem.uriString = Uri.withAppendedPath(
                    MediaStore.Images.Media.EXTERNAL_CONTENT_URI,
                    id.toString()
                ).toString() else imageItem.uriString =
                    Uri.withAppendedPath(MediaStore.Video.Media.EXTERNAL_CONTENT_URI, id.toString())
                        .toString()
                mAlbumsList.add(imageItem)
            }
            cursor.close()
        }

        Log.d("AU",mAlbumsList.toString())
    }


    fun leerImagen(context: Context, nombreArchivo: String): Bitmap? {
        var fileInputStream: FileInputStream? = null
        try {
            // Obtén el directorio específico de la aplicación en el almacenamiento interno
            val directorioAlmacenamiento = context.filesDir
            Log.d("Ho",directorioAlmacenamiento.path)

            // Crea un objeto File con el directorio y el nombre del archivo
            val archivo = File(directorioAlmacenamiento, nombreArchivo)

            // Abre un FileInputStream para leer el archivo
            fileInputStream = FileInputStream(archivo)

            // Decodifica el archivo en un objeto Bitmap
            return BitmapFactory.decodeStream(fileInputStream)
        } catch (e: Exception) {
            e.printStackTrace()
        } finally {
            // Asegúrate de cerrar el FileInputStream al finalizar
            try {
                fileInputStream?.close()
            } catch (e: Exception) {
                e.printStackTrace()
            }
        }
        return null
    }
    private val PERMISSIONS_STORAGE = arrayOf<String>(
        "Manifest.permission.READ_EXTERNAL_STORAGE",
        "Manifest.permission.WRITE_EXTERNAL_STORAGE"
    )
    fun leerImagenDesdeAlmacenamientoExterno(context: Context, nombreArchivo: String): Bitmap? {
        var fileInputStream: FileInputStream? = null
        try {
            if (isExternalStorageReadable()) {
                // Obtén el directorio de almacenamiento externo público (por ejemplo, Environment.DIRECTORY_PICTURES)
                val directorioAlmacenamientoExterno = context.getExternalFilesDir("Pictures")
                Log.d("Hol",directorioAlmacenamientoExterno!!.path)
                // Crea un objeto File con el directorio y el nombre del archivo
                val archivo = File(directorioAlmacenamientoExterno, nombreArchivo)

//                 Abre un FileInputStream para leer el archivo
                fileInputStream = FileInputStream(archivo)
                // Decodifica el archivo en un objeto Bitmap
                return BitmapFactory.decodeStream(fileInputStream)
            }
        } catch (e: Exception) {
            e.printStackTrace()
        } finally {
            // Asegúrate de cerrar el FileInputStream al finalizar
            try {
                fileInputStream?.close()
            } catch (e: Exception) {
                e.printStackTrace()
            }
        }
        return null
    }

    // Verifica si el almacenamiento externo está disponible y es legible
    private fun isExternalStorageReadable(): Boolean {
        val estado = Environment.getExternalStorageState()
        return Environment.MEDIA_MOUNTED == estado || Environment.MEDIA_MOUNTED_READ_ONLY == estado
    }

    fun leerImagenDesdeAlmacenamientoExternoCompartido(context: Context, nombreArchivo: String): Bitmap? {
        var bitmap: Bitmap? = null
        try {
            val uri = MediaStore.Images.Media.EXTERNAL_CONTENT_URI
            val projection = arrayOf(
                MediaStore.Images.Media.DATA,
                MediaStore.Images.Media.DISPLAY_NAME
            )
            val selection = "${MediaStore.Images.Media.DISPLAY_NAME} = ?"
            val selectionArgs = arrayOf(nombreArchivo)
            val sortOrder = "${MediaStore.Images.Media.DATE_ADDED} DESC"
            context.contentResolver.query(
                uri,
                projection,
                selection,
                selectionArgs,
                sortOrder
            )?.use { cursor ->
                Log.d("Hola",cursor.moveToFirst().toString())
                if (cursor.moveToFirst()) {
                    val filePathColumn = cursor.getColumnIndexOrThrow(MediaStore.Images.Media.DATA)
                    val filePath = cursor.getString(filePathColumn)
                    Log.d("Hola",filePath)
                    bitmap = MediaStore.Images.Media.getBitmap(context.contentResolver, uri)
                }
            }
        } catch (e: IOException) {
            e.printStackTrace()
        }

        return bitmap
    }
}

class ImageItem {
    var id: Int = 0
    var uriString: String = ""
    var coverID: Long = 0
    var count: Int = 1  // Inicializado a 1 para la primera imagen del álbum
}
