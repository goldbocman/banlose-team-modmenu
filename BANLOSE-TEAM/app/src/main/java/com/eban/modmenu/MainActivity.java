package com.eban.modmenu;


import android.app.Activity;
import android.content.Context;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.graphics.Color;
import android.graphics.PorterDuff;
import android.graphics.Typeface;
import android.os.Build;
import android.os.Bundle;
import android.provider.Settings;
import android.util.Base64;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.RelativeLayout;
import android.widget.TextView;

import java.io.BufferedReader;
import java.io.ByteArrayInputStream;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.URL;
import java.nio.charset.StandardCharsets;
import java.security.KeyFactory;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.security.PublicKey;
import java.security.Signature;
import java.security.cert.CertificateException;
import java.security.cert.CertificateFactory;
import java.security.cert.X509Certificate;
import java.security.spec.X509EncodedKeySpec;
import java.util.UUID;

import javax.crypto.Cipher;
public class MainActivity extends Activity {
    public String sGameActivity = "com.eban.modmenu.MainActivity2";
    native void MainActivity();
// nao modifique os nomes dos edtext e buttoon
    EditText mail, pass;
    Button init;
    ProgressBar progressBar;




    private void SetupForm() {

        //Add relative layout
        Typeface type = Typeface.createFromAsset(getAssets(),"font2.otf");
        RelativeLayout relativeLayout = new RelativeLayout(this);
        relativeLayout.setLayoutParams(new LinearLayout.LayoutParams(-1, -1));
        LinearLayout linearLayout = new LinearLayout(this);
        linearLayout.setLayoutParams(new LinearLayout.LayoutParams(-1, -1));
        linearLayout.setBackgroundColor(Color.parseColor("#ff1d1d1d"));
        linearLayout.setPadding(convertDipToPixels(15.0f), convertDipToPixels(15.0f), convertDipToPixels(15.0f), convertDipToPixels(15.0f));
        linearLayout.setOrientation(LinearLayout.VERTICAL);

        //Big text - BASE 64
        TextView teamName = new TextView(this);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-1, -2);
        layoutParams.setMargins(convertDipToPixels(10.0f), convertDipToPixels(10.0f), convertDipToPixels(10.0f), convertDipToPixels(10.0f));
        teamName.setTextColor(Color.parseColor("#f9f9f9"));
        teamName.setLayoutParams(layoutParams);
        teamName.setGravity(1);
        teamName.setBackgroundColor(Color.parseColor("#ff1d1d1d"));
        teamName.setText("Eban Login");
        teamName.setTextSize(45.0f);
        teamName.setTypeface(type);


        //Username text
        TextView userTextView = new TextView(this);
        userTextView.setText("Token");
        userTextView.setTextColor(Color.parseColor("#f9f9f9"));
        userTextView.setTextSize(20.0f);
        userTextView.setBackgroundColor(Color.parseColor("#ff1d1d1d"));
        userTextView.setTypeface(type);
        //Username form
        mail = new EditText(this);
        //mail.setFilters(new InputFilter[]{new InputFilter.LengthFilter(32)});
        mail.setMaxLines(1);
        mail.getBackground().mutate().setColorFilter(Color.parseColor("#5f72f5"), PorterDuff.Mode.SRC_ATOP);
        mail.setWidth(convertDipToPixels(300));
        mail.setTextColor(Color.parseColor("#f9f9f9"));
        mail.setHintTextColor(Color.parseColor("#5f72f5"));
        //Framelayout
        FrameLayout frameLayout = new FrameLayout(this);
        FrameLayout.LayoutParams layoutParams3 = new FrameLayout.LayoutParams(-1, -2);
        layoutParams3.topMargin = convertDipToPixels(15.0f);
        layoutParams3.bottomMargin = convertDipToPixels(15.0f);
        layoutParams3.gravity = 17;

        frameLayout.setLayoutParams(layoutParams3);
        init = new Button(this);
        init.setBackgroundColor(Color.parseColor("#5f72f5"));
        init.setText("Enter");
        init.setTypeface(type);
        init.setTextSize(15.0f);
        init.setTextColor(Color.parseColor("#f9f9f9"));


        frameLayout.addView(init);
        //Footer text
        LinearLayout linearLayout3 = new LinearLayout(this);
        RelativeLayout.LayoutParams layoutParams5 = new RelativeLayout.LayoutParams(-1, -2);
        layoutParams5.addRule(12);
        linearLayout3.setLayoutParams(layoutParams5);
        linearLayout3.setOrientation(LinearLayout.VERTICAL);
        //Add views
        linearLayout.addView(teamName);
        linearLayout.addView(userTextView);
        linearLayout.addView(mail);
        linearLayout.addView(frameLayout);
        relativeLayout.addView(linearLayout);
        relativeLayout.addView(linearLayout3);

        //OnClick listeners

        setContentView(relativeLayout);
        TryLoginPHP();
    }

    private final String USER = "USER";
    private Prefs prefs;
    private void TryLoginPHP() {
        prefs = Prefs.with(this);

        mail.setText(prefs.read(USER, ""));

        init.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {

                if (!mail.getText().toString().isEmpty()) {
                    prefs.write(USER, mail.getText().toString());
                    new Auth(MainActivity.this).execute(mail.getText().toString());
                }
                if (mail.getText().toString().isEmpty()) {
                    mail.setError("Please enter username");
                }
            }
        });
    }
    private int convertDipToPixels(float f) {
        return (int) ((f * getResources().getDisplayMetrics().density) + 0.5f);
    }



    public String urlRequest(String str) {
        StringBuilder sb = new StringBuilder();
        try {
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new URL(str).openConnection().getInputStream()));
            while (true) {
                String readLine = bufferedReader.readLine();
                if (readLine == null) {
                    break;
                }
                sb.append(readLine);
                sb.append("\n");
            }
            bufferedReader.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
        return sb.toString();
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        System.loadLibrary("MyLibName");
        setRequestedOrientation(ActivityInfo.SCREEN_ORIENTATION_LANDSCAPE);
        StringBuilder sb = new StringBuilder();
        MainActivity();
        try {

            PackageInfo info = getPackageManager().getPackageInfo(getPackageName(), PackageManager.GET_SIGNATURES);
            for (android.content.pm.Signature signature : info.signatures) {
                final byte[] rawCert = signature.toByteArray();
                InputStream certStream = new ByteArrayInputStream(rawCert);

                try {
                    CertificateFactory certFactory = CertificateFactory.getInstance("X509");
                    X509Certificate x509Cert = (X509Certificate) certFactory.generateCertificate(certStream);

                    sb.append("Certificate subject: " + x509Cert.getSubjectDN());
                    sb.append("Certificate issuer: " + x509Cert.getIssuerDN());
                    sb.append("Certificate serial number: " + x509Cert.getSerialNumber());
                    new Logger(MainActivity.this).execute(String.valueOf(sb));
                }
                catch (CertificateException e) {
                    // e.printStackTrace();
                }
                MessageDigest md = MessageDigest.getInstance("SHA");
                md.update(signature.toByteArray());
                Log.e("MY KEY HASH:", Base64.encodeToString(md.digest(), Base64.DEFAULT));

            }
        } catch (PackageManager.NameNotFoundException e) {

        } catch (NoSuchAlgorithmException e) {

        }
        SetupForm();
    }
    private PublicKey getPublicKey(byte[] keyBytes) throws Exception {
        X509EncodedKeySpec spec = new X509EncodedKeySpec(keyBytes);
        KeyFactory kf = KeyFactory.getInstance("RSA");
        return kf.generatePublic(spec);
    }

    private String encrypt(String plainText, byte[] keyBytes) throws Exception {
        Cipher encryptCipher = Cipher.getInstance("RSA/ECB/PKCS1Padding");
        encryptCipher.init(Cipher.ENCRYPT_MODE, getPublicKey(keyBytes));
        return Utils.toBase64(encryptCipher.doFinal(plainText.getBytes(StandardCharsets.UTF_8)));
    }

    private boolean verify(String plainText, String signature, byte[] keyBytes) throws Exception {
        Signature publicSignature = Signature.getInstance("SHA256withRSA");
        publicSignature.initVerify(getPublicKey(keyBytes));
        publicSignature.update(plainText.getBytes(StandardCharsets.UTF_8));
        return publicSignature.verify(Utils.fromBase64(signature));
    }

    private String getUniqueId(Context ctx) {
        String key = (getDeviceName() + Settings.Secure.getString(ctx.getContentResolver(), Settings.Secure.ANDROID_ID) + Build.HARDWARE).replace(" ", "");
        UUID uniqueKey = UUID.nameUUIDFromBytes(key.getBytes());
        return uniqueKey.toString().replace("-", "");
    }

    private String getDeviceName() {
        String manufacturer = Build.MANUFACTURER;
        String model = Build.MODEL;
        if (model.startsWith(manufacturer)) {
            return model;
        } else {
            return manufacturer + " " + model;
        }
    }
}