package com.eban;

import android.annotation.TargetApi;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.provider.Settings;
import android.view.View;
import android.widget.Toast;

import com.eban.modmenu.FloatingModMenuService;

import static com.eban.modmenu.Preferences.context;

public class MainActivity extends Activity {
    public String TAG = "EbanRoot";
    private int pid;
    public String GameActivity = "com.unity3d.player.UnityPlayerActivity";
    Process process;
    public static native void Toast(Context context);
    static {
        System.loadLibrary("MyLibName");
        // When you change the lib name, change also on Android.mk file
        // Both must have same name
    }

    

    // Shows the system bars by removing all the flags
// except for the ones that make the content appear under the system bars.

    @TargetApi(Build.VERSION_CODES.M)
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        context = this;
        Start(this);
        //Use getApplicationContext() to fix dark background of Toast message
        CallToast(getApplicationContext());
        //To launch game actievity
        try {
            //Start service
            MainActivity.this.startActivity(new Intent(MainActivity.this, Class.forName(MainActivity.this.GameActivity)));
        } catch (ClassNotFoundException e) {
            //Uncomment this if you are following METHOD 2 of CHANGING FILES
            //Toast.makeText(MainActivity.this, "Error. Game's main activity does not exist", Toast.LENGTH_LONG).show();
            e.printStackTrace();
            return;
        }
    }
    //Load mod menu
    public static void Start(final Context context) {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M && !Settings.canDrawOverlays(context)) {
            Toast.makeText(context.getApplicationContext(), "Overlay permission is required in order to show mod menu", Toast.LENGTH_LONG).show();
            Toast.makeText(context.getApplicationContext(), "Restart the game after you allow permission", Toast.LENGTH_LONG).show();
            context.startActivity(new Intent("android.settings.action.MANAGE_OVERLAY_PERMISSION",
                    Uri.parse("package:" + context.getPackageName())));
        } else {
            final Handler handler = new Handler();
            handler.postDelayed(new Runnable() {
                @Override
                public void run() {
                    context.startService(new Intent(context, FloatingModMenuService.class));
                }
            }, 500);
        }
    }

    public static void CallToast(final Context context) {
        new Handler().postDelayed(new Runnable() {
            public void run() {
                Toast(context);
            }
        }, 500);
    }
}
