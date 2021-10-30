package com.eban.modmenu;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Process;
import android.provider.Settings;

public class MainActivity2 extends Activity {

    public String GameActivity = "com.google.firebase.MessagingUnityPlayerActivity";
    public static void StartMenu(final Context context) {

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M && !Settings.canDrawOverlays(context)) {
            AlertDialog alertDialog = new AlertDialog.Builder(context, 1)
                    .setTitle("No overlay permission")
                    .setMessage("Overlay permission is required in order to display the mod menu on top of the screen. Do you want to open the settings?")
                    .setPositiveButton("Yes", new DialogInterface.OnClickListener() {
                        @Override
                        public void onClick(DialogInterface dialog, int which) {
                            context.startActivity(new Intent("android.settings.action.MANAGE_OVERLAY_PERMISSION",
                                    Uri.parse("package:" + context.getPackageName())));
                            Process.killProcess(Process.myPid());
                        }
                    })
                    .setNegativeButton("No", new DialogInterface.OnClickListener() {
                        @Override
                        public void onClick(DialogInterface dialog, int which) {

                        }
                    }).setCancelable(false)
                    .create();
            alertDialog.show();
        } else {
            // When you change the lib name, change also on Android.mk file
            // Both must have same name
            // System.loadLibrary("MyLibName");

            Handler handler = new Handler();
            handler.postDelayed(new Runnable() {

                @Override
                public void run() {
                    context.startService(new Intent(context, FloatingModMenuService.class));
                }
            }, 1000);
        }
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);



        //To launch mod menu
        StartMenu(this);

        //To load lib only
        //LoadLib.Start(this);

        //To launch game activity
        try {
            MainActivity2.this.startActivity(new Intent(MainActivity2.this, Class.forName(MainActivity2.this.GameActivity)));
            //Start service
        } catch (ClassNotFoundException e) {
            //  Toast.makeText(MainActivity.this, "Error. Game's main activity does not exist", Toast.LENGTH_LONG).show();
            e.printStackTrace();
            return;
        }
    }
}
