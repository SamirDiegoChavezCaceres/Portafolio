package com.example.myapplication

import android.content.BroadcastReceiver
import android.content.ComponentName
import android.content.Context
import android.content.Intent
import android.content.ServiceConnection
import android.os.IBinder
import android.util.Log
import android.widget.Toast


class ChronometerReceiver : BroadcastReceiver() {
    private var chronometerService: ChronometerService? = null
    private var isServiceBound = false
//    private val connection = object : ServiceConnection {
//        override fun onServiceConnected(name: ComponentName?, service: IBinder?) {
//            val binder = service as ChronometerService.LocalBinder
//            chronometerService = binder.getService()
//            isServiceBound = true
//        }
//
//        override fun onServiceDisconnected(name: ComponentName?) {
//            isServiceBound = false
//        }
//    }
    override fun onReceive(context: Context, intent: Intent) {
        val binder = peekService(context, Intent(context, ChronometerService::class.java)) as ChronometerService.LocalBinder
        chronometerService = binder.getService()

        if (binder == null) Log.d(
            "ServiceSSCCE.MyReceiver",
            "I just received a null binder."
        ) else Log.d("ServiceSSCCE.MyReceiver", "Awesome, let's get this **** done!")
        Toast.makeText(context,"recieved", Toast.LENGTH_SHORT).show();

        when (intent!!.getStringExtra("action")) {
            "start" -> {
                Log.d("Hola","Start")
                startChronometer()
            }
            "stop" -> {
                Log.d("Hola","Stop")
                stopChronometer()
            }
            else -> {
                Log.d("Hola","Reset")
                resetChronometer()
            }
        }
    }

    private fun startChronometer() {
        chronometerService?.startChronometer()
    }

    private fun stopChronometer() {
        chronometerService?.stopChronometer()
    }

    private fun resetChronometer() {
        chronometerService?.resetChronometer()
    }
}