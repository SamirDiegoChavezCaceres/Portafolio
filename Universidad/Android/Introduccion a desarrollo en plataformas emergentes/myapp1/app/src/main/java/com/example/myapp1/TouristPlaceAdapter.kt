package com.example.myapp1
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView

class TouristPlaceAdapter(private val places: List<TouristPlace>) :
    RecyclerView.Adapter<TouristPlaceAdapter.ViewHolder>() {

    class ViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val placeNameTextView: TextView = itemView.findViewById(R.id.text)
        val placeDescriptionTextView: TextView = itemView.findViewById(R.id.desc)
        val placeImageView: ImageView = itemView.findViewById(R.id.img)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): ViewHolder {
        val view =
            LayoutInflater.from(parent.context).inflate(R.layout.item_tourist_place, parent, false)
        return ViewHolder(view)
    }

    override fun onBindViewHolder(holder: ViewHolder, position: Int) {
        val place = places[position]
        with(holder) {
            placeNameTextView.text = place.name
            placeDescriptionTextView.text = place.description
            placeImageView.setImageBitmap(place.imageResId)
        }
    }

    override fun getItemCount(): Int = places.size
}


