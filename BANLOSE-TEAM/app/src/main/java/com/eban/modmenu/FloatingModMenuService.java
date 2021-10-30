 package com.eban.modmenu;

import static android.view.View.GONE;
import static android.view.ViewGroup.LayoutParams.MATCH_PARENT;
import static android.view.ViewGroup.LayoutParams.WRAP_CONTENT;

import android.animation.ArgbEvaluator;
import android.animation.ValueAnimator;
import android.annotation.TargetApi;
import android.app.ActivityManager;
import android.app.ActivityManager.RunningAppProcessInfo;
import android.app.AlertDialog;
import android.app.Service;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.res.AssetManager;
import android.content.res.ColorStateList;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.Typeface;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.media.MediaPlayer;
import android.net.Uri;
import android.os.Build;
import android.os.Handler;
import android.os.IBinder;
import android.text.Html;
import android.text.InputFilter;
import android.text.InputType;
import android.text.TextUtils;
import android.text.method.DigitsKeyListener;
import android.util.Base64;
import android.util.TypedValue;
import android.view.Gravity;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.WindowManager;
import android.view.animation.LinearInterpolator;
import android.view.inputmethod.InputMethodManager;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.RelativeLayout;
import android.widget.ScrollView;
import android.widget.SeekBar;
import android.widget.Spinner;
import android.widget.Switch;
import android.widget.TextView;

import java.io.IOException;
import java.io.InputStream;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Objects;

public class FloatingModMenuService extends Service {
    Paint mStrokePaint;
    Paint mFilledPaint;
    Paint mTextPaint;
    Thread mThread;
    boolean PlayerMenu = true,VisualMenu = true,WeaponMenu = true,AboutMenu = true;
    public static final String TAG = "EBAN4IK";
    int MenuType = 1;
    final int TEXT_COLOR = Color.parseColor("#f9f9f9");
    final int TEXT_COLOR_2 = Color.parseColor("#f9f9f9");
    int MENU_STROKEa = 255;
    int MENU_STROKEb = 227;
    int MENU_STROKEg = 0;
    int MENU_STROKEr = 151;
    int MenuAlpha = 125;
    GradientDrawable MENU_STROKE = new GradientDrawable();
    int BTN_COLOR = Color.parseColor("#1C191F");
    int MENU_BG_COLOR = Color.argb(MenuAlpha,0,0,0);
    int MENU_FEATURE_BG_COLOR = Color.parseColor("#ff1f1f1f");
    GradientDrawable MENU_FEATURE_BG_COLOR_GRADIENT = new GradientDrawable();
    int NOCOLOR = Color.parseColor("#00000000");
    final int MENU_WIDTH = 550;
    final int MENU_HEIGHT = 210;

    int InitMenu = 0;
    final float MENU_CORNER = 10f;
    final int ICON_SIZE = 70;
    final float ICON_ALPHA = 1f; //Transparent
    int CurrectMenu;
    int HintTxtColor = Color.parseColor("#FF171E24");
    TextView title2,title31;
    boolean ColoAnimation = false;
    int BtnON = Color.parseColor("#5f72f5");
    int BtnOFF = Color.parseColor("#262626");
    int RadioColor =  Color.parseColor("#FFFFFF");
    int colormenu = Color.argb(MENU_STROKEa, MENU_STROKEr, MENU_STROKEg, MENU_STROKEb);
    String NumberTxt = "#41c300";
    LinearLayout PlayerM,Visual,About,Weapon,ScrollLayoutOne,ScrollLayoutTwo,ProfileUser,ProfileUserText,MenuCustom;
    GradientDrawable gdMenuBody,gdMenuBody1 = new GradientDrawable();
    RelativeLayout mCollapsed, mRootContainer;
    LinearLayout mExpanded, linearLayout221,dualscroll;
    LinearLayout.LayoutParams scrlLL,dualparams,scrlLLTwo,ProfileUsers,ProfileUsersText;
    WindowManager mWindowManager;
    WindowManager.LayoutParams params,paramsq,paramsq1;
    String URLMusic;
    ImageView startimage,ProfilePhoto;
    FrameLayout rootFrame;
    AlertDialog alert;
    EditText edittextvalue;
    ScrollView scrollView,scrollViewTwo;
    GradientDrawable OnMenu;

    TextView inputFieldTextView;
    String inputFieldFeatureName;
    int inputFieldFeatureNum;
    EditTextValue inputFieldTxtValue;

    boolean stopChecking;
    int RED = 255;
    int GREEN = 0;
    int BLUE = 0;
    int me = 0;
    native String Title();
    String NumberTxtColor = "#41c300";
    native String Heading();

    native String Icon();
    native String myacc();
    native String IconWebViewData();

    native String[] getPlayerList();
    native String[] getVisualList();
    native String[] getAboutList();
    native String[] getWeaponList();
    int I = Color.argb(125,95,114,245);
    int II = Color.argb(125,153,33,232);

    native String[] getG22List();
    native String[] getUSPList();
    native String[] getP350List();
    native String[] getDeagleList();
    native String[] getTec9List();
    native String[] getFiveSevenList();
    native String[] getUMP45List();
    native String[] getMP7List();
    native String[] getP90List();
    native String[] getMP5List();
    native String[] getAKRList();
    native String[] getAKR12List();
    native String[] getM4List();
    native String[] getM16List();
    native String[] getFAMASList();
    native String[] getFnFalList();
    native String[] getAWMList();
    native String[] getM40List();
    native String[] getM110List();
    native String[] getSM1014List();
    native String[] getFabMList();
    native String[] getKnifeBayonetList();
    native String[] getKnifeKarambitList();
    native String[] getjKommandoList();
    native String[] getKnifeButterflyList();
    native String[] getFlipKnifeList();
    native String[] getKunaiKnifeList();
    native String[] getScorpionKnifeList();
    native boolean isGameLibLoaded();
    MediaPlayer mediaPlayer = new MediaPlayer();
    GradientDrawable gdMenuStroke = new GradientDrawable();

    GradientDrawable gdMenuStroke1 = new GradientDrawable();
    public static native void DrawOn(ESPView espView, Canvas canvas);
    private ESPView overlayView;


    @Override
    public void onCreate() {
        super.onCreate();
        try {
            //mediaPlayer.setDataSource("https://whataudio.ru/mp3r?size=2210630&cd=Drabusheyka%20Gimihermetiq%20Young%20Kai%20-%20MIAMI_%28WHATAUDIO.RU%29&range=0-2210629/2210630&url=https://cs4-9v4.vkuseraudio.net/p3/454e83736406ff.mp3?extra=NofvKsq1OtlwN6eKJGCnvTpy48Ua69jyxvcKrspGEhNHPuyN0y0QUsoFLrm6alsHH6kQeGyQ_uG3DthVmgj54lnu5amF1Su8Vc8jvcOauhdixd4eOFTFtM9G8xqm36-Sdcv-pc24mVVkxXaEdnrIvVKeYQ&long_chunk=1");
            //mediaPlayer.prepare();
        }catch (Exception exception){

        }
        CurrectMenu = 1;
        OnMenu = new GradientDrawable();
        mWindowManager = (WindowManager) getSystemService(WINDOW_SERVICE);
        overlayView = new ESPView(this);
        Preferences.context = this;
        initFloating();
        initAlertDiag();
        mCollapsed.setVisibility(GONE);
        mExpanded.setVisibility(View.VISIBLE);
        startAnimation();
        final Handler handler = new Handler();
        handler.post(new Runnable() {
            public void run() {
                Thread();
                handler.postDelayed(this, 1000);
            }
        });
    }


    private void initFloating() {
        if (InitMenu == 0) {
            InitMenu = 1;
            // Главный слой
            FrameLayout frameLayout = new FrameLayout(this);
            rootFrame = frameLayout;
            frameLayout.setOnTouchListener(onTouchListener());
            // Второстепенный НАХУЙ НЕ НУЖЕН
            mRootContainer = new RelativeLayout(this);
            //Слой с иконкой
            RelativeLayout relativeLayout = new RelativeLayout(this);
            mCollapsed = relativeLayout;
            relativeLayout.setVisibility(View.VISIBLE);
            //Ватермарка
            //Основной слой

            LinearLayout linearLayout = new LinearLayout(this);
            mExpanded = linearLayout;
            mCollapsed.setAlpha(ICON_ALPHA);
            linearLayout.setVisibility(GONE);
            mExpanded.setGravity(Gravity.CENTER);
            mExpanded.setOrientation(LinearLayout.VERTICAL);
            mExpanded.setLayoutParams(new LinearLayout.LayoutParams(dp(MENU_WIDTH), WRAP_CONTENT));
            //ПЛЮШКИ
            GradientDrawable gradientDrawable = new GradientDrawable();
            gdMenuBody = gradientDrawable;
            gradientDrawable.setCornerRadius(MENU_CORNER);
            gdMenuBody.setColor(MENU_BG_COLOR);
            gradientDrawable = new GradientDrawable();
            gdMenuBody1 = gradientDrawable;
            gradientDrawable.setCornerRadius(MENU_CORNER);
            gdMenuBody1.setColor(MENU_BG_COLOR);
            MENU_FEATURE_BG_COLOR_GRADIENT.setColor(Color.parseColor("#44474e")); //цвет фона кнопки info
            MENU_FEATURE_BG_COLOR_GRADIENT.setCornerRadius(5.0f);
            OnMenu.setColor(Color.parseColor("#2c2e33")); //цвет фона кнопки info
            OnMenu.setCornerRadius(5.0f);
            MENU_STROKE.setColor(colormenu); //цвет полосок
            MENU_STROKE.setCornerRadius(10.0f);
            gdMenuStroke.setOrientation(GradientDrawable.Orientation.TOP_BOTTOM);
            gdMenuStroke.setColor(MENU_BG_COLOR);














            ImageView imageView = new ImageView(this);
            startimage = imageView;
            imageView.setLayoutParams(new RelativeLayout.LayoutParams(-2, -2));
            int applyDimension = (int) TypedValue.applyDimension(1, (float) ICON_SIZE, getResources().getDisplayMetrics());
            startimage.getLayoutParams().height = applyDimension;
            startimage.getLayoutParams().width = applyDimension;
            startimage.requestLayout();
            startimage.setScaleType(ImageView.ScaleType.FIT_XY);
            byte[] decode = Base64.decode(Icon(), 0);
            startimage.setImageBitmap(BitmapFactory.decodeByteArray(decode, 0, decode.length));
            ((ViewGroup.MarginLayoutParams) startimage.getLayoutParams()).topMargin = convertDipToPixels(10);
            startimage.setOnTouchListener(onTouchListener());
            startimage.setOnClickListener(new View.OnClickListener() {
                public void onClick(View view) {
                    params.width = dp(MENU_WIDTH);
                    mWindowManager.updateViewLayout(rootFrame, params);
                    mCollapsed.setVisibility(GONE);
                    mExpanded.setVisibility(View.VISIBLE);
                }
            });

            WebView wView = new WebView(this);
            wView.loadData("<html><head></head><body style=\"margin: 0; padding: 0\"><img src=\"" + IconWebViewData() + "\" width=\"" + ICON_SIZE + "\" height=\"" + ICON_SIZE + "\"</body></html>", "text/html", "utf-8");
            wView.setBackgroundColor(0);
            wView.setAlpha(ICON_ALPHA);
            wView.getSettings().setAppCachePath("/data/data/" + getPackageName() + "/cache");
            wView.getSettings().setAppCacheEnabled(true);
            wView.getSettings().setCacheMode(WebSettings.LOAD_CACHE_ELSE_NETWORK);
            wView.setOnTouchListener(onTouchListener());
            wView.requestLayout();

            RelativeLayout titleText1 = new RelativeLayout(this);
            titleText1.setVerticalGravity(16);


            LinearLayout titleText = new LinearLayout(this);
            titleText.setPadding(0, 20, 30, 20);
            titleText.setVerticalGravity(16);
            titleText.setBackground(gdMenuBody);
            LinearLayout.LayoutParams rl3e = new LinearLayout.LayoutParams(dp(MENU_WIDTH), -2);
            //rl3.addRule(17);
            //titleText.setPadding(1000, 0, 1000, 0);
            titleText.setLayoutParams(rl3e);

            //LinearLayout.LayoutParams titleText = new LinearLayout.LayoutParams(-2, -2);
            TextView title22 = new TextView(this);
            title2 = title22;
            CharSequence charSequence = "                                                                                                                                                ";
            title2.setText(charSequence);
            title2.setBackground(MENU_STROKE);
            title2.setTextColor(TEXT_COLOR);
            title2.setTextSize(3.0f);
            title2.setGravity(48);

            RelativeLayout.LayoutParams rl2 = new RelativeLayout.LayoutParams(dp(MENU_WIDTH), -2);
            rl2.addRule(17);
            title2.setLayoutParams(rl2);
            TextView title4 = new TextView(this);
            title4.setText(charSequence);
            title4.setBackground(gdMenuStroke1);
            title4.setTextColor(TEXT_COLOR);
            title4.setTextSize(10.0f);
            title4.setGravity(48);

            LinearLayout.LayoutParams rl3 = new LinearLayout.LayoutParams(-2, -2);
            //rl3.addRule(17);
            title4.setPadding(1000, 0, 1000, 0);
            title4.setLayoutParams(rl3);

            TextView title = new TextView(this);
            title.setPadding(20, 0, 20, 0);
            title.setText(Html.fromHtml(Title()));
            title.setTextColor(TEXT_COLOR);
            title.setTextSize(15.0f);
            title.setGravity(3);

            RelativeLayout.LayoutParams rl = new RelativeLayout.LayoutParams(-2, -2);
            rl.addRule(17);
            title.setLayoutParams(rl);

            TextView heading = new TextView(this);
            heading.setText(Html.fromHtml(Heading()));
            heading.setEllipsize(TextUtils.TruncateAt.MARQUEE);
            heading.setMarqueeRepeatLimit(-1);
            heading.setSingleLine(true);
            heading.setSelected(true);
            heading.setTextColor(TEXT_COLOR);
            heading.setTextSize(10.0f);
            heading.setGravity(17);
            heading.setPadding(0, 0, 0, 5);
            LinearLayout dualscroll = new LinearLayout(this);
            dualparams = new LinearLayout.LayoutParams(MATCH_PARENT, dp(MENU_HEIGHT));
            dualscroll.setLayoutParams(dualparams);


            AssetManager assetManager = getAssets();
            InputStream istr = null;
            try {
                istr = assetManager.open("photo.jpg");
            } catch (IOException e) {
                e.printStackTrace();
            }
            Bitmap bitmap = BitmapFactory.decodeStream(istr);
            Drawable d = new BitmapDrawable(getResources(),blur(bitmap,8,false));
            dualscroll.setBackground(d);

            scrollView = new ScrollView(this);
            //Auto size. To set size manually, change the width and height example 500, 500
            scrlLL = new LinearLayout.LayoutParams(dp((int) (MENU_HEIGHT/1.25)), MATCH_PARENT);
            scrlLL.weight = 1;
            scrollView.setLayoutParams(scrlLL);


            scrollViewTwo = new ScrollView(this);
            //Auto size. To set size manually, change the width and height example 500, 500
            scrlLLTwo = new LinearLayout.LayoutParams(dp((int) (MENU_HEIGHT/2.25)), MATCH_PARENT);
            scrlLLTwo.weight = 1;
            scrollViewTwo.setLayoutParams(scrlLLTwo);

            relativeLayout = new RelativeLayout(this);
            relativeLayout.setPadding(0, -20, 0, -20);
            relativeLayout.setVerticalGravity(17);
            relativeLayout.setBackground(gdMenuBody1);

            ProfileUser = new LinearLayout(this);
            ProfileUser.setOrientation(LinearLayout.HORIZONTAL);
            ProfileUser.setBackgroundColor(NOCOLOR);
            ProfileUsers = new LinearLayout.LayoutParams(MATCH_PARENT, WRAP_CONTENT);
            ProfileUsers.weight = 1;
            ProfileUser.setLayoutParams(ProfileUsers);

            ProfileUserText = new LinearLayout(this);
            ProfileUserText.setOrientation(LinearLayout.VERTICAL);
            ProfileUserText.setBackgroundColor(NOCOLOR);
            ProfileUsersText = new LinearLayout.LayoutParams(WRAP_CONTENT, WRAP_CONTENT);
            ProfileUsersText.weight = 1;
            ProfileUsersText.topMargin = 10;
            ProfileUsersText.leftMargin = 5;
            ProfileUserText.setLayoutParams(ProfileUsersText);



            ImageView ProfilePhoto = new ImageView(this);
            RelativeLayout.LayoutParams lp =new RelativeLayout.LayoutParams(-2, -2);
            lp.bottomMargin = 25;
            ProfilePhoto.setLayoutParams(lp);
            ProfilePhoto.getLayoutParams().height = 125;
            ProfilePhoto.getLayoutParams().width = 125;
            ProfilePhoto.requestLayout();
            ProfilePhoto.setScaleType(ImageView.ScaleType.FIT_XY);
            byte[] decodes = Base64.decode(myacc(), 0);
            ProfilePhoto.setImageBitmap(BitmapFactory.decodeByteArray(decodes, 0, decodes.length));
            TextView UserName = new TextView(this);
            UserName.setText("EbanFuck");
            UserName.setTextSize(10.0f);
            UserName.setTextColor(TEXT_COLOR);
            UserName.setGravity(Gravity.TOP|Gravity.LEFT);

            TextView UserNames = new TextView(this);
            UserNames.setText("UID 1");
            UserNames.setTextSize(10.0f);
            UserNames.setTextColor(TEXT_COLOR);
            UserNames.setGravity(Gravity.TOP|Gravity.LEFT);

            RelativeLayout.LayoutParams rl5 = new RelativeLayout.LayoutParams(-2, -2);
            rl5.addRule(17);
            Button hideBtn = new Button(this);
            hideBtn.setBackgroundColor(0);
            hideBtn.setText(" HIDE");
            hideBtn.setTextColor(TEXT_COLOR);
            hideBtn.setOnClickListener(new View.OnClickListener() {
                public void onClick(View view) {
                    params.width = -2;//dp(MENU_WIDTH);
                    mWindowManager.updateViewLayout(rootFrame, params);
                    mCollapsed.setVisibility(View.VISIBLE);
                    mExpanded.setVisibility(GONE);
                }
            });
            hideBtn.setOnLongClickListener(new View.OnLongClickListener() {
                public boolean onLongClick(View view) {
                    stopSelf();
                    return false;
                }
            });
            Button closeBtn = new Button(this);
            closeBtn.setBackgroundColor(0);
            closeBtn.setText("CLOSE ");
            closeBtn.setTextColor(TEXT_COLOR);
            closeBtn.setOnClickListener(new View.OnClickListener() {
                public void onClick(View view) {
                    params.width = -2;//dp(MENU_WIDTH);
                    mWindowManager.updateViewLayout(rootFrame, params);
                    mCollapsed.setVisibility(View.VISIBLE);
                    mExpanded.setVisibility(GONE);
                }
            });
            rl5 = new RelativeLayout.LayoutParams(-2, -2);
            rl5.addRule(11);
            closeBtn.setLayoutParams(rl5);
            int iparams = Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.O ? 2038 : 2002;
            params = new WindowManager.LayoutParams(WRAP_CONTENT, WRAP_CONTENT, iparams, 8, -3);
            params.gravity = 51;
            params.x = 0;
            params.y = 100;
            params.width = dp(MENU_WIDTH);
            params.height = -2;
            rootFrame.addView(mRootContainer);
            mRootContainer.addView(mCollapsed);
            mRootContainer.addView(mExpanded);
            if (IconWebViewData() != null) {
                mCollapsed.addView(wView);
            } else {
                mCollapsed.addView(startimage);
            }
            View view = new View(this);
            LinearLayout.LayoutParams lpView = new LinearLayout.LayoutParams(1,LinearLayout.LayoutParams.MATCH_PARENT); // --> horizontal
            lpView.leftMargin = 5;
            lpView.rightMargin = 5;
            view.setLayoutParams(lpView);
            view.setBackgroundColor(Color.DKGRAY);

            titleText1.addView(titleText);
            titleText.addView(title);
            titleText1.addView(title2);
            /**titleText.addView(Abouts);
             titleText.addView(AboutL);*/
            mExpanded.addView(titleText1);
            mExpanded.addView(heading);

            ScrollLayoutOne = new LinearLayout(this);
            ScrollLayoutOne.setOrientation(LinearLayout.VERTICAL);
            ScrollLayoutOne.setBackgroundColor(NOCOLOR);

            ScrollLayoutTwo = new LinearLayout(this);
            ScrollLayoutTwo.setOrientation(LinearLayout.VERTICAL);
            ScrollLayoutTwo.setBackgroundColor(NOCOLOR);

            PlayerM = new LinearLayout(this);
            PlayerM.setOrientation(LinearLayout.VERTICAL);
            PlayerM.setBackgroundColor(NOCOLOR);
            Visual = new LinearLayout(this);
            Visual.setOrientation(LinearLayout.VERTICAL);
            Visual.setBackgroundColor(NOCOLOR);
            About = new LinearLayout(this);
            About.setOrientation(LinearLayout.VERTICAL);
            About.setBackgroundColor(NOCOLOR);
            Weapon = new LinearLayout(this);
            Weapon.setOrientation(LinearLayout.VERTICAL);
            Weapon.setBackgroundColor(NOCOLOR);


            MenuCustom = new LinearLayout(this);
            MenuCustom.setOrientation(LinearLayout.VERTICAL);
            MenuCustom.setBackgroundColor(NOCOLOR);

            scrollView.addView(ScrollLayoutOne);
            scrollViewTwo.addView(ScrollLayoutTwo);
            dualscroll.addView(scrollView);
            dualscroll.addView(view);
            dualscroll.addView(scrollViewTwo);
            mExpanded.addView(dualscroll);
            ProfileUser.addView(ProfilePhoto);
            ProfileUser.addView(ProfileUserText);
            ProfileUserText.addView(UserName);
            ProfileUserText.addView(UserNames);
            relativeLayout.addView(ProfileUser);
            relativeLayout.addView(closeBtn);
            mExpanded.addView(relativeLayout);


            final WindowManager.LayoutParams paramses = new WindowManager.LayoutParams();
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
                paramses.type = WindowManager.LayoutParams.TYPE_APPLICATION_OVERLAY;
            } else {
                paramses.type = WindowManager.LayoutParams.TYPE_PHONE;
            }
            paramses.format = -3;
            paramses.gravity = 17;
            paramses.flags = 24;
            paramses.width = -1;
            paramses.height = -1;
            paramses.x = 0;
            paramses.y = 0;
            mWindowManager.addView(overlayView, paramses);
            mWindowManager = (WindowManager) getSystemService(WINDOW_SERVICE);
            mWindowManager.addView(rootFrame, params);
            final Handler handler = new Handler();
            handler.postDelayed(new Runnable() {
                boolean viewLoaded = false;

                @Override
                public void run() {
                    if (Preferences.savePref && !isGameLibLoaded() && !stopChecking) {
                        if (!viewLoaded) {
                            Visual.addView(Category("Save preferences was been enabled. Waiting for game lib to be loaded...\n\nForce load menu may not apply mods instantly. You would need to reactivate them again"));
                            Visual.addView(Button(-100, "Force load menu"));
                            viewLoaded = true;
                        }
                        handler.postDelayed(this, 600);
                    } else {
                        ScrollLayoutOne.addView(ButtonOnOffMenu("Player",1));
                        ScrollLayoutOne.addView(ButtonOnOffMenu("Visual",1));
                        ScrollLayoutOne.addView(ButtonOnOffMenu("Weapon",1));



                        ScrollLayoutTwo.addView(ButtonOnOffMenu("Customization",1));
                        ScrollLayoutTwo.addView(ButtonOnOffMenu("Setting",1));
                        ScrollLayoutTwo.addView(ButtonOnOffMenu("About",1));

                        MenuCustom.addView(ButtonOnOffMenu("Customization",2));
                        MenuCustom.addView(SeekBarColorMenu(-333,"Menu Color",0,1271));
                        MenuCustom.addView(Switch(99999,"Array List"));
                        MenuCustom.addView(SeekBarColor(99998,"Array Color",0,1271));
                        MenuCustom.addView(SeekBar(99997,"Array Size",5,50));
                        PlayerM.removeAllViews();
                        PlayerM.addView(ButtonOnOffMenu("Player",2));
                        featureList(getPlayerList(), PlayerM);

                        Visual.removeAllViews();
                        Visual.addView(ButtonOnOffMenu("Visual",2));
                        featureList(getVisualList(), Visual);

                        Weapon.removeAllViews();
                        Weapon.addView(ButtonOnOffMenu("Weapon",2));
                        featureList(getWeaponList(), Weapon);

                        About.removeAllViews();
                        About.addView(ButtonOnOffMenu("About",2));
                        featureList(getAboutList(), About);
                    }
                }
            }, 500);
        }
    }

    private void featureList(String[] listFT, LinearLayout linearLayout) {
        for (int i = 0; i < listFT.length; i++) {
            String str = listFT[i];
            String[] strSplit = str.split("_");
            if (strSplit[1].equals("Toggle")) {
                linearLayout.addView(Switch(Integer.parseInt(strSplit[0]), strSplit[2]));
            } else if (strSplit[1].equals("SeekBar")) {
                linearLayout.addView(SeekBar(Integer.parseInt(strSplit[0]), strSplit[2], Integer.parseInt(strSplit[3]), Integer.parseInt(strSplit[4])));
            }else if (strSplit[1].equals("SeekBarColor")) {
                linearLayout.addView(SeekBarColor(Integer.parseInt(strSplit[0]), strSplit[2], Integer.parseInt(strSplit[3]), Integer.parseInt(strSplit[4])));
            }else if (strSplit[1].equals("SeekBarColorMenu")) {
                linearLayout.addView(SeekBarColorMenu(Integer.parseInt(strSplit[0]), strSplit[2], Integer.parseInt(strSplit[3]), Integer.parseInt(strSplit[4])));
            } else if (strSplit[1].equals("Button")) {
                linearLayout.addView(Button(Integer.parseInt(strSplit[0]), strSplit[2]));
            } else if (strSplit[1].equals("ButtonLink")) {
                linearLayout.addView(ButtonLink(strSplit[2], strSplit[3]));
            } else if (strSplit[1].equals("ButtonOnOff")) {
                linearLayout.addView(ButtonOnOff(Integer.parseInt(strSplit[0]), strSplit[2]));

            }else if (strSplit[1].equals("ButtonOnOffWeapon")) {
                linearLayout.addView(ButtonOnOffWeapon(Integer.parseInt(strSplit[0]), strSplit[2]));
            }
            else if (strSplit[1].equals("ButtonOnOffSound")) {
                linearLayout.addView(ButtonOnOffSound(Integer.parseInt(strSplit[0]), strSplit[2]));
            }else if (strSplit[1].equals("Spinner")) {
                linearLayout.addView(RichTextView(strSplit[2]));
                linearLayout.addView(Spinner(Integer.parseInt(strSplit[0]), strSplit[2], strSplit[3]));
            } else if (strSplit[1].equals("SpinnerMenu")) {
                linearLayout.addView(RichTextView(strSplit[2]));
                linearLayout.addView(SpinnerMenu(Integer.parseInt(strSplit[0]), strSplit[2], strSplit[3]));
            } else if (strSplit[1].equals("InputText")) {

                linearLayout.addView(TextField(Integer.parseInt(strSplit[0]), strSplit[2],false));
            } else if (strSplit[1].equals("InputValue")) {
                linearLayout.addView(TextField(Integer.parseInt(strSplit[0]), strSplit[2],true));
            } else if (strSplit[1].equals("InputURL")) {
                linearLayout.addView(TextURL(Integer.parseInt(strSplit[0]), strSplit[2],false));
            } else if (strSplit[1].equals("CheckBox")) {
                linearLayout.addView(CheckBox(Integer.parseInt(strSplit[0]), strSplit[2]));
            } else if (strSplit[1].equals("Category")) {
                linearLayout.addView(Category(strSplit[2]));
            } else if (strSplit[1].equals("RichTextView")) {
                linearLayout.addView(RichTextView(strSplit[2]));
            } else if (strSplit[1].equals("RichWebView")) {
                linearLayout.addView(RichWebView(strSplit[2]));
            } else if (strSplit[1].equals("RadioButton")) {
                linearLayout.addView(RadioButton(Integer.parseInt(strSplit[0]), strSplit[2], strSplit[3]));
            }
        }
    }
    private View.OnTouchListener onTouchListener() {
        return new View.OnTouchListener() {
            final View collapsedView = mCollapsed;
            final View expandedView = mExpanded;
            private float initialTouchX, initialTouchY;
            private int initialX, initialY;

            public boolean onTouch(View view, MotionEvent motionEvent) {
                switch (motionEvent.getAction()) {
                    case MotionEvent.ACTION_DOWN:
                        initialX = params.x;
                        initialY = params.y;
                        initialTouchX = motionEvent.getRawX();
                        initialTouchY = motionEvent.getRawY();
                        return true;
                    case MotionEvent.ACTION_UP:
                        int rawX = (int) (motionEvent.getRawX() - initialTouchX);
                        int rawY = (int) (motionEvent.getRawY() - initialTouchY);


                        if (rawX < 10 && rawY < 10 && isViewCollapsed()) {
                            try {
                                params.width = dp(MENU_WIDTH);
                                mWindowManager.updateViewLayout(rootFrame, params);
                                collapsedView.setVisibility(GONE);
                                expandedView.setVisibility(View.VISIBLE);
                            } catch (NullPointerException e) {

                            }
                        }
                        return true;
                    case MotionEvent.ACTION_MOVE:

                        params.x = initialX + ((int) (motionEvent.getRawX() - initialTouchX));
                        params.y = initialY + ((int) (motionEvent.getRawY() - initialTouchY));

                        mWindowManager.updateViewLayout(rootFrame, params);
                        return true;
                    default:
                        return false;
                }
            }
        };
    }

    private void initAlertDiag() {

        LinearLayout linearLayout1 = new LinearLayout(this);
        linearLayout1.setPadding(5, 5, 5, 5);
        linearLayout1.setOrientation(LinearLayout.VERTICAL);
        linearLayout1.setBackgroundColor(MENU_FEATURE_BG_COLOR);

        LinearLayout linearLayout5 = new LinearLayout(this);
        linearLayout5.setOrientation(LinearLayout.VERTICAL);


        FrameLayout frameLayout = new FrameLayout(this);
        frameLayout.addView(linearLayout5);


        final TextView textView = new TextView(this);
        textView.setText("Tap OK to apply changes. Tap outside to cancel");
        textView.setTextColor(TEXT_COLOR_2);


        edittextvalue = new EditText(this);
        edittextvalue.setMaxLines(1);
        edittextvalue.setWidth(convertDipToPixels(300));
        edittextvalue.setTextColor(TEXT_COLOR_2);
        edittextvalue.setHintTextColor(HintTxtColor);
        edittextvalue.setInputType(InputType.TYPE_CLASS_NUMBER);
        edittextvalue.setKeyListener(DigitsKeyListener.getInstance("0123456789-"));

        InputFilter[] FilterArray = new InputFilter[1];
        FilterArray[0] = new InputFilter.LengthFilter(10);
        edittextvalue.setFilters(FilterArray);


        Button button = new Button(this);
        button.setBackgroundColor(BTN_COLOR);
        button.setTextColor(TEXT_COLOR_2);
        button.setText("OK");
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                inputFieldTxtValue.setValue(Integer.parseInt(edittextvalue.getText().toString()));
                inputFieldTextView.setText(Html.fromHtml("<font face='roboto'>" + inputFieldFeatureName + ": <font color='#41c300'>" + edittextvalue.getText().toString() + "</font></font>"));
                alert.dismiss();
                localChanges(inputFieldFeatureNum, false, Integer.parseInt(edittextvalue.getText().toString()));
                Preferences.changeFeatureInt(inputFieldFeatureName, inputFieldFeatureNum, Integer.parseInt(edittextvalue.getText().toString()));
            }
        });

        alert = new AlertDialog.Builder(this, 2).create();
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.KITKAT) {
            Objects.requireNonNull(alert.getWindow()).setType(Build.VERSION.SDK_INT >= 26 ? 2038 : 2002);
        }
        linearLayout1.addView(textView);
        linearLayout1.addView(edittextvalue);
        linearLayout1.addView(button);
        alert.setView(linearLayout1);
    }

    private View Switch(final int featureNum, final String featureName) {
        final Switch switchR = new Switch(this);
        ColorStateList buttonStates = new ColorStateList(
                new int[][]{
                        new int[]{-android.R.attr.state_enabled},
                        new int[]{android.R.attr.state_checked},
                        new int[]{}
                },
                new int[]{
                        Color.parseColor("#262626"),
                        Color.parseColor("#5f72f5"),
                        Color.parseColor("#262626")
                }
        );
        //Set colors of the switch. Comment out if you don't like it
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.LOLLIPOP) {
            switchR.getThumbDrawable().setTintList(buttonStates);
            switchR.getTrackDrawable().setTintList(buttonStates);
        }

        switchR.setText(featureName);
        switchR.setTextColor(TEXT_COLOR_2);
        switchR.setPadding(10, 5, 0, 5);
        switchR.setChecked(Preferences.loadPrefBoolean(featureName, featureNum));
        switchR.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
            public void onCheckedChanged(CompoundButton compoundButton, boolean isChecked) {
                //localChanges(featureNum, isChecked);
                Preferences.changeFeatureBoolean(featureName, featureNum, isChecked);
            }
        });
        return switchR;
    }
    private View SeekBarColor(final int featureNum, final String featureName, final int min, int max) {
        int loadedProg = Preferences.loadPrefInt(featureName, featureNum);
        LinearLayout linearLayout = new LinearLayout(this);
        linearLayout.setPadding(10, 5, 0, 5);
        linearLayout.setOrientation(LinearLayout.VERTICAL);
        linearLayout.setGravity(Gravity.CENTER);

        final TextView textView = new TextView(this);
        textView.setText(Html.fromHtml("<font face='roboto'>" + featureName + ": <font color='" + NumberTxtColor + "'></font>"));
        textView.setTextColor(TEXT_COLOR_2);
        final ArgbEvaluator evaluator = new ArgbEvaluator();
        SeekBar seekBar = new SeekBar(this);
        seekBar.setPadding(25, 10, 35, 10);
        seekBar.setMax(max);
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O)
            seekBar.setMin(min); //setMin for Oreo and above
        seekBar.setPadding(25, 10, 35, 10);
        seekBar.setMax(max);
        seekBar.getProgressDrawable().setColorFilter(Color.parseColor("#ff0000"),PorterDuff.Mode.MULTIPLY);
        seekBar.getThumb().setColorFilter(Color.parseColor("#ff0000"), PorterDuff.Mode.SRC_ATOP);
        seekBar.setProgress((loadedProg == 0) ? min : loadedProg);
        seekBar.setOnSeekBarChangeListener(new SeekBar.OnSeekBarChangeListener() {
            public void onStartTrackingTouch(SeekBar seekBar) {
            }

            public void onStopTrackingTouch(SeekBar seekBar) {
            }

            public void onProgressChanged(SeekBar seekBar, int i, boolean z) {

                //if progress is greater than minimum, don't go below. Else, set progress
                Preferences.changeFeatureInt(featureName, featureNum, i < min ? min : i);

                textView.setText(Html.fromHtml("<font face='roboto'>" + featureName + ": <font color='" + NumberTxtColor + "'></font>"));
                for(int sss = 0; sss < (i < min ? min : i); sss++){
                    if (RED == 255){

                        if (BLUE == 0 ){
                            if (GREEN == 255){}
                            else{
                                GREEN = GREEN+1;
                            }
                        }
                    }
                    if (GREEN == 255){
                        if (RED == 0){} else{
                            RED = RED-1;
                        }
                    }
                    if (GREEN == 255) {
                        if (RED == 0) {
                            if (BLUE==255){} else{
                                BLUE = BLUE+1;
                            }
                        }
                    }
                    if(BLUE == 255) {
                        if (GREEN == 0) {
                            RED = RED+1;
                            me = 1;
                        } else{
                            GREEN = GREEN-1;
                        }
                    }
                }
                seekBar.getThumb().setColorFilter(Color.argb(255,RED,GREEN,BLUE), PorterDuff.Mode.SRC_ATOP);
                seekBar.getProgressDrawable().setColorFilter(Color.argb(255,RED,GREEN,BLUE),PorterDuff.Mode.MULTIPLY);
                RED = 255;
                GREEN = 0;
                BLUE = 0;
            }
        });
        linearLayout.addView(textView);
        linearLayout.addView(seekBar);

        return linearLayout;
    }
    private View SeekBarColorMenu(final int featureNum, final String featureName, final int min, int max) {
        int loadedProg = Preferences.loadPrefInt(featureName, featureNum);
        LinearLayout linearLayout = new LinearLayout(this);
        linearLayout.setPadding(10, 5, 0, 5);
        linearLayout.setOrientation(LinearLayout.VERTICAL);
        linearLayout.setGravity(Gravity.CENTER);

        final TextView textView = new TextView(this);
        textView.setText(Html.fromHtml("<font face='roboto'>" + featureName + ": <font color='" + NumberTxtColor + "'></font>"));
        textView.setTextColor(TEXT_COLOR_2);
        final ArgbEvaluator evaluator = new ArgbEvaluator();
        SeekBar seekBar = new SeekBar(this);
        seekBar.setPadding(25, 10, 35, 10);
        seekBar.setMax(max);
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O)
            seekBar.setMin(min); //setMin for Oreo and above
        seekBar.setPadding(25, 10, 35, 10);
        seekBar.setMax(max);
        seekBar.getProgressDrawable().setColorFilter(Color.parseColor("#ff0000"),PorterDuff.Mode.MULTIPLY);
        seekBar.getThumb().setColorFilter(Color.parseColor("#ff0000"), PorterDuff.Mode.SRC_ATOP);
        seekBar.setProgress((loadedProg == 0) ? min : loadedProg);
        seekBar.setOnSeekBarChangeListener(new SeekBar.OnSeekBarChangeListener() {
            public void onStartTrackingTouch(SeekBar seekBar) {
            }

            public void onStopTrackingTouch(SeekBar seekBar) {
            }

            public void onProgressChanged(SeekBar seekBar, int i, boolean z) {

                //if progress is greater than minimum, don't go below. Else, set progress
                Preferences.changeFeatureInt(featureName, featureNum, i < min ? min : i);

                textView.setText(Html.fromHtml("<font face='roboto'>" + featureName + ": <font color='" + NumberTxtColor + "'></font>"));
                for(int sss = 0; sss < (i < min ? min : i); sss++){
                    if (RED == 255){

                        if (BLUE == 0 ){
                            if (GREEN == 255){}
                            else{
                                GREEN = GREEN+1;
                            }
                        }
                    }
                    if (GREEN == 255){
                        if (RED == 0){} else{
                            RED = RED-1;
                        }
                    }
                    if (GREEN == 255) {
                        if (RED == 0) {
                            if (BLUE==255){} else{
                                BLUE = BLUE+1;
                            }
                        }
                    }
                    if(BLUE == 255) {
                        if (GREEN == 0) {
                            RED = RED+1;
                            me = 1;
                        } else{
                            GREEN = GREEN-1;
                        }
                    }
                }

                seekBar.getThumb().setColorFilter(Color.argb(255,RED,GREEN,BLUE), PorterDuff.Mode.SRC_ATOP);
                seekBar.getProgressDrawable().setColorFilter(Color.argb(255,RED,GREEN,BLUE),PorterDuff.Mode.MULTIPLY);

                colormenu = Color.argb(125, RED, GREEN, BLUE);
                MENU_STROKE.setColor(colormenu);
                title2.setBackground(MENU_STROKE);
                title2.setVisibility(GONE);
                title2.setVisibility(View.VISIBLE);
                RED = 255;
                GREEN = 0;
                BLUE = 0;
            }
        });
        linearLayout.addView(textView);
        linearLayout.addView(seekBar);

        return linearLayout;
    }
    private View SeekBar(final int featureNum, final String featureName, final int min, int max) {
        int loadedProg = Preferences.loadPrefInt(featureName, featureNum);
        LinearLayout linearLayout = new LinearLayout(this);
        linearLayout.setPadding(10, 5, 0, 5);
        linearLayout.setOrientation(LinearLayout.VERTICAL);
        linearLayout.setGravity(Gravity.CENTER);

        final TextView textView = new TextView(this);
        textView.setText(Html.fromHtml("<font face='roboto'>" + featureName + ": <font color='" + NumberTxtColor + "'>" + ((loadedProg == 0) ? min : loadedProg) + "</font>"));
        textView.setTextColor(TEXT_COLOR_2);
        final ArgbEvaluator evaluator = new ArgbEvaluator();
        SeekBar seekBar = new SeekBar(this);
        seekBar.setPadding(25, 10, 35, 10);
        seekBar.setMax(max);
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O)
            seekBar.setMin(min); //setMin for Oreo and above
        seekBar.setPadding(25, 10, 35, 10);
        seekBar.setMax(max);
        seekBar.getProgressDrawable().setColorFilter(Color.parseColor("#5f72f5"),PorterDuff.Mode.MULTIPLY);
        seekBar.getThumb().setColorFilter(Color.parseColor("#5f72f5"), PorterDuff.Mode.SRC_ATOP);
        seekBar.setProgress((loadedProg == 0) ? min : loadedProg);
        seekBar.setOnSeekBarChangeListener(new SeekBar.OnSeekBarChangeListener() {
            public void onStartTrackingTouch(SeekBar seekBar) {
            }

            public void onStopTrackingTouch(SeekBar seekBar) {
            }

            public void onProgressChanged(SeekBar seekBar, int i, boolean z) {

                //if progress is greater than minimum, don't go below. Else, set progress
                Preferences.changeFeatureInt(featureName, featureNum, i < min ? min : i);

                textView.setText(Html.fromHtml("<font face='roboto'>" + featureName + ": <font color='" + NumberTxtColor + "'>" + (i < min ? min : i) + "</font>"));
            }
        });
        linearLayout.addView(textView);
        linearLayout.addView(seekBar);

        return linearLayout;
    }

    private View Button(final int featureNum, final String featureName) {
        final Button button = new Button(this);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(MATCH_PARENT, MATCH_PARENT);
        layoutParams.setMargins(7, 5, 7, 5);
        button.setLayoutParams(layoutParams);
        // button.setTextSize(13.0f);
        button.setTextColor(TEXT_COLOR_2);
        button.setAllCaps(false); //Disable caps to support html
        button.setText(Html.fromHtml(featureName));
        button.setBackgroundColor(BTN_COLOR);
        button.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                //localChanges(featureNum, false);
                Preferences.changeFeatureInt(featureName, featureNum, 0);
            }
        });

        return button;
    }

    private View ButtonLink(final String featureName, final String url) {
        final Button button = new Button(this);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(MATCH_PARENT, MATCH_PARENT);
        layoutParams.setMargins(7, 5, 7, 5);
        button.setLayoutParams(layoutParams);
        button.setAllCaps(false); //Disable caps to support html
        button.setTextColor(TEXT_COLOR_2);
        button.setText(Html.fromHtml(featureName));
        button.setBackgroundColor(BTN_COLOR);
        button.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Intent intent = new Intent(Intent.ACTION_VIEW);
                intent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
                intent.setData(Uri.parse(url));
                startActivity(intent);
            }
        });
        return button;
    }

    private View ButtonOnOff(final int featureNum, String featureName) {
        final Button button = new Button(this);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(MATCH_PARENT, MATCH_PARENT);
        layoutParams.setMargins(7, 3, 7, 3);
        button.setLayoutParams(layoutParams);
        button.setTextColor(TEXT_COLOR_2);
        button.setAllCaps(false); //Disable caps to support html

        final String finalFeatureName = featureName.replace("OnOff_", "");
        boolean isOn = Preferences.loadPrefBoolean(featureName, featureNum);
        if (isOn) {
            button.setText(Html.fromHtml(finalFeatureName + ": ON"));
            button.setBackgroundColor(BtnON);
            isOn = false;
        } else {
            button.setText(Html.fromHtml(finalFeatureName + ": OFF"));
            button.setBackgroundColor(BtnOFF);
            isOn = true;
        }
        final boolean finalIsOn = isOn;
        button.setOnClickListener(new View.OnClickListener() {
            boolean isOn = finalIsOn;

            public void onClick(View v) {
                //localChanges(featureNum, isOn);
                Preferences.changeFeatureBoolean(finalFeatureName, featureNum, isOn);
                //Log.d(TAG, finalFeatureName + " " + featureNum + " " + isActive2);
                if (isOn) {
                    button.setText(Html.fromHtml(finalFeatureName + ": ON"));
                    button.setBackgroundColor(BtnON);
                    isOn = false;
                } else {
                    button.setText(Html.fromHtml(finalFeatureName + ": OFF"));
                    button.setBackgroundColor(BtnOFF);
                    isOn = true;
                }
            }
        });
        return button;
    }
    private View ButtonOnOffMenu(String featureName,int End) {
        final Button button = new Button(this);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(MATCH_PARENT, MATCH_PARENT);
        layoutParams.setMargins(7, 3, 7, 3);
        button.setLayoutParams(layoutParams);
        button.setTextColor(TEXT_COLOR_2);
        button.setGravity(Gravity.LEFT|Gravity.CENTER_HORIZONTAL);
        button.setAllCaps(false); //Disable caps to support html
        button.setBackgroundColor(NOCOLOR);
        if (End == 2) {
            button.setText(Html.fromHtml("▼ "+featureName));
        }else{
            button.setText(Html.fromHtml("➤ "+featureName));
        }
        button.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                if (End == 2) {

                    button.setText(Html.fromHtml("▼ "+featureName));
                    if(featureName.equals("About") || featureName.equals("Customization")){
                        scrollViewTwo.removeAllViews();
                        scrollViewTwo.addView(ScrollLayoutTwo);
                    }else{
                        scrollView.removeAllViews();
                        scrollView.addView(ScrollLayoutOne);
                    }
                } else {
                    button.setText(Html.fromHtml("➤ "+featureName));
                    if(featureName.equals("Player")){
                        scrollView.removeAllViews();
                        scrollView.addView(PlayerM);
                    }else if(featureName.equals("Visual")){
                        scrollView.removeAllViews();
                        scrollView.addView(Visual);
                    }else if(featureName.equals("Weapon")){
                        scrollView.removeAllViews();
                        scrollView.addView(Weapon);
                    }else if(featureName.equals("About")){
                        scrollViewTwo.removeAllViews();
                        scrollViewTwo.addView(About);
                    }else if(featureName.equals("Customization")){
                        scrollViewTwo.removeAllViews();
                        scrollViewTwo.addView(MenuCustom);
                    }
                }
            }
        });
        return button;
    }
    private View ButtonOnOffSound(final int featureNum, String featureName) {
        final LinearLayout LinearLayoutq = new LinearLayout(this);
        LinearLayoutq.setOrientation(LinearLayout.VERTICAL);
        final Button button = new Button(this);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(MATCH_PARENT, MATCH_PARENT);
        layoutParams.setMargins(7, 5, 7, 5);
        button.setLayoutParams(layoutParams);
        button.setTextColor(TEXT_COLOR_2);
        button.setAllCaps(false); //Disable caps to support html
        final String finalFeatureName = featureName.replace("OnOffSound_", "");
        boolean isOn = Preferences.loadPrefBoolean(featureName, featureNum);

        if (isOn) {
            button.setText(Html.fromHtml(finalFeatureName + ": Play"));
            button.setBackgroundColor(BtnON);
            isOn = false;

            //mediaPlayer.start();
        } else {
            button.setText(Html.fromHtml(finalFeatureName + ": Pause"));
            button.setBackgroundColor(BtnOFF);
            isOn = true;
           // if(mediaPlayer.isPlaying()){
              //  mediaPlayer.pause();
           // }
        }

        final boolean finalIsOn = isOn;
        button.setOnClickListener(new View.OnClickListener() {
            boolean isOn = finalIsOn;
            public void onClick(View v) {
                //localChanges(featureNum, isOn);
                Preferences.changeFeatureBoolean(finalFeatureName, featureNum, isOn);
                //Log.d(TAG, finalFeatureName + " " + featureNum + " " + isActive2);
                if (isOn) {
                    button.setText(Html.fromHtml(finalFeatureName + ": Play"));
                    button.setBackgroundColor(BtnON);
                    isOn = false;

                   // mediaPlayer.start();
                } else {
                    button.setText(Html.fromHtml(finalFeatureName + ": Pause"));
                    button.setBackgroundColor(BtnOFF);
                    isOn = true;
                   // if(mediaPlayer.isPlaying()){
                   //     mediaPlayer.pause();
                   // }
                }
            }
        });
        LinearLayoutq.addView(button);
        return LinearLayoutq;
    }
    private View ButtonOnOffWeapon(final int featureNum, String featureName) {
        final LinearLayout LinearLayoutq = new LinearLayout(this);
        LinearLayoutq.setOrientation(LinearLayout.VERTICAL);
        final Button button = new Button(this);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(MATCH_PARENT, MATCH_PARENT);
        layoutParams.setMargins(7, 5, 7, 5);
        button.setLayoutParams(layoutParams);
        button.setTextColor(TEXT_COLOR_2);
        button.setAllCaps(false); //Disable caps to support html
        final String finalFeatureName = featureName.replace("OnOffWeapon_", "");
        boolean isOn = Preferences.loadPrefBoolean(featureName, featureNum);
        final LinearLayout LinearLayoutqq = new LinearLayout(this);
        LinearLayoutqq.setOrientation(LinearLayout.VERTICAL);
        if(finalFeatureName.equals("G22 MENU")) {
            featureList(getG22List(), LinearLayoutqq);
        } else if(finalFeatureName.equals("USP MENU")){
            featureList(getUSPList(), LinearLayoutqq);
        } else if(finalFeatureName.equals("P350 MENU")){
            featureList(getP350List(), LinearLayoutqq);
        } else if(finalFeatureName.equals("Deagle MENU")){
            featureList(getDeagleList(), LinearLayoutqq);
        } else if(finalFeatureName.equals("Tec9 MENU")){
            featureList(getTec9List(), LinearLayoutqq);
        } else if(finalFeatureName.equals("FiveSeven MENU")){
            featureList(getFiveSevenList(), LinearLayoutqq);
        } else if(finalFeatureName.equals("UMP45 MENU")){
            featureList(getUMP45List(), LinearLayoutqq);
        } else if(finalFeatureName.equals("MP7 MENU")){
            featureList(getMP7List(), LinearLayoutqq);
        } else if(finalFeatureName.equals("P90 MENU")){
            featureList(getP90List(), LinearLayoutqq);
        } else if(finalFeatureName.equals("MP5 MENU")){
            featureList(getMP5List(), LinearLayoutqq);
        } else if(finalFeatureName.equals("AKR MENU")){
            featureList(getAKRList(), LinearLayoutqq);
        } else if(finalFeatureName.equals("AKR12 MENU")){
            featureList(getAKR12List(), LinearLayoutqq);
        } else if(finalFeatureName.equals("M4 MENU")){
            featureList(getM4List(), LinearLayoutqq);
        } else if(finalFeatureName.equals("M16 MENU")){
            featureList(getM16List(), LinearLayoutqq);
        } else if(finalFeatureName.equals("FAMAS MENU")){
            featureList(getFAMASList(), LinearLayoutqq);
        } else if(finalFeatureName.equals("FnFal MENU")){
            featureList(getFnFalList(), LinearLayoutqq);
        } else if(finalFeatureName.equals("AWM MENU")){
            featureList(getAWMList(), LinearLayoutqq);
        } else if(finalFeatureName.equals("M40 MENU")){
            featureList(getM40List(), LinearLayoutqq);
        } else if(finalFeatureName.equals("M110 MENU")){
            featureList(getM110List(), LinearLayoutqq);
        } else if(finalFeatureName.equals("SM1014 MENU")){
            featureList(getSM1014List(), LinearLayoutqq);
        } else if(finalFeatureName.equals("FabM MENU")){
            featureList(getFabMList(), LinearLayoutqq);
        } else if(finalFeatureName.equals("KnifeBayonet MENU")){
            featureList(getKnifeBayonetList(), LinearLayoutqq);
        } else if(finalFeatureName.equals("KnifeKarambit MENU")){
            featureList(getKnifeKarambitList(), LinearLayoutqq);
        } else if(finalFeatureName.equals("jKommando MENU")){
            featureList(getjKommandoList(), LinearLayoutqq);
        } else if(finalFeatureName.equals("KnifeButterfly MENU")){
            featureList(getKnifeButterflyList(), LinearLayoutqq);
        } else if(finalFeatureName.equals("FlipKnife MENU")){
            featureList(getFlipKnifeList(), LinearLayoutqq);
        } else if(finalFeatureName.equals("KunaiKnife MENU")){
            featureList(getKunaiKnifeList(), LinearLayoutqq);
        } else if(finalFeatureName.equals("ScorpionKnife MENU")){
            featureList(getScorpionKnifeList(), LinearLayoutqq);
        }







        if (isOn) {
            button.setText(Html.fromHtml(finalFeatureName + ": OPEN"));
            button.setBackgroundColor(BtnON);
            isOn = false;
            LinearLayoutqq.setVisibility(View.VISIBLE);
        } else {
            button.setText(Html.fromHtml(finalFeatureName + ": CLOSE"));
            button.setBackgroundColor(BtnOFF);
            isOn = true;
            LinearLayoutqq.setVisibility(GONE);
        }

        final boolean finalIsOn = isOn;
        button.setOnClickListener(new View.OnClickListener() {
            boolean isOn = finalIsOn;
            public void onClick(View v) {
                //localChanges(featureNum, isOn);
                Preferences.changeFeatureBoolean(finalFeatureName, featureNum, isOn);
                //Log.d(TAG, finalFeatureName + " " + featureNum + " " + isActive2);
                if (isOn) {
                    button.setText(Html.fromHtml(finalFeatureName + ": OPEN"));
                    button.setBackgroundColor(BtnON);
                    isOn = false;
                    LinearLayoutqq.setVisibility(View.VISIBLE);
                } else {
                    button.setText(Html.fromHtml(finalFeatureName + ": CLOSE"));
                    button.setBackgroundColor(BtnOFF);
                    isOn = true;
                    LinearLayoutqq.setVisibility(GONE);
                }
            }
        });
        LinearLayoutq.addView(button);
        LinearLayoutq.addView(LinearLayoutqq);
        return LinearLayoutq;
    }
    private View SpinnerMenu(final int featureNum, final String featureName, final String list) {
        final List<String> lists = new LinkedList<>(Arrays.asList(list.split(",")));

        LinearLayout linearLayout = new LinearLayout(this);
        linearLayout.setOrientation(LinearLayout.VERTICAL);
        linearLayout.setGravity(Gravity.CENTER);

        final TextView textView = new TextView(this);
        textView.setText(Html.fromHtml("<font face='roboto'>" + featureName + ": <font color='#41c300'></font>"));
        textView.setTextColor(TEXT_COLOR_2);

        // Create another LinearLayout as a workaround to use it as a background
        // and to keep the 'down' arrow symbol
        // If spinner had the setBackgroundColor set, there would be no arrow symbol
        LinearLayout linearLayout2 = new LinearLayout(this);
        linearLayout221 = linearLayout2;
        LinearLayout.LayoutParams layoutParams2 = new LinearLayout.LayoutParams(MATCH_PARENT, MATCH_PARENT);
        layoutParams2.setMargins(10, 2, 10, 5);
        linearLayout2.setOrientation(LinearLayout.VERTICAL);
        linearLayout2.setBackgroundColor(colormenu);
        linearLayout2.setLayoutParams(layoutParams2);

        final Spinner spinner = new Spinner(this);
        spinner.setPadding(5, 10, 5, 8);
        spinner.setLayoutParams(layoutParams2);
        spinner.getBackground().setColorFilter(1, PorterDuff.Mode.SRC_ATOP); //trick to show white down arrow color
        //Creating the ArrayAdapter instance having the list
        ArrayAdapter aa = new ArrayAdapter(this, android.R.layout.simple_spinner_item, lists);
        aa.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        //Setting the ArrayAdapter data on the Spinner
        spinner.setAdapter(aa);
        spinner.setSelection(Preferences.loadPrefInt(featureName, featureNum));
        spinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() {
            @Override
            public void onItemSelected(AdapterView<?> parentView, View selectedItemView, int position, long id) {
                Preferences.changeFeatureInt(spinner.getSelectedItem().toString(), featureNum, position);
                ((TextView) parentView.getChildAt(0)).setTextColor(TEXT_COLOR_2);
                MenuType = 2;
                mCollapsed.removeAllViews();
                mCollapsed.addView(startimage);
            }

            @Override
            public void onNothingSelected(AdapterView<?> parent) {
            }
        });
        linearLayout2.addView(spinner);
        return linearLayout2;
    }

    private View Spinner(final int featureNum, final String featureName, final String list) {
        final List<String> lists = new LinkedList<>(Arrays.asList(list.split(",")));

        LinearLayout linearLayout = new LinearLayout(this);
        linearLayout.setOrientation(LinearLayout.VERTICAL);
        linearLayout.setGravity(Gravity.CENTER);

        final TextView textView = new TextView(this);
        textView.setText(Html.fromHtml("<font face='roboto'>" + featureName + ": <font color='#41c300'></font>"));
        textView.setTextColor(TEXT_COLOR_2);

        // Create another LinearLayout as a workaround to use it as a background
        // and to keep the 'down' arrow symbol
        // If spinner had the setBackgroundColor set, there would be no arrow symbol
        LinearLayout linearLayout2 = new LinearLayout(this);
        LinearLayout.LayoutParams layoutParams2 = new LinearLayout.LayoutParams(MATCH_PARENT, MATCH_PARENT);
        layoutParams2.setMargins(0, 2, 0, 5);
        linearLayout2.setOrientation(LinearLayout.VERTICAL);
        linearLayout2.setBackgroundColor(Color.parseColor("#5f72f5"));
        linearLayout2.setLayoutParams(layoutParams2);

        final Spinner spinner = new Spinner(this);
        spinner.setPadding(0, 10, 0, 8);
        spinner.setLayoutParams(layoutParams2);
        spinner.getBackground().setColorFilter(1, PorterDuff.Mode.SRC_ATOP); //trick to show white down arrow color
        //Creating the ArrayAdapter instance having the list
        ArrayAdapter aa = new ArrayAdapter(this, android.R.layout.simple_spinner_item, lists);
        aa.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        //Setting the ArrayAdapter data on the Spinner
        spinner.setAdapter(aa);
        spinner.setSelection(Preferences.loadPrefInt(featureName, featureNum));
        spinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() {
            @Override
            public void onItemSelected(AdapterView<?> parentView, View selectedItemView, int position, long id) {
                Preferences.changeFeatureInt(spinner.getSelectedItem().toString(), featureNum, position);
                ((TextView) parentView.getChildAt(0)).setTextColor(TEXT_COLOR_2);
            }

            @Override
            public void onNothingSelected(AdapterView<?> parent) {
            }
        });
        linearLayout2.addView(spinner);
        return linearLayout2;
    }

    private View TextField(final int feature, final String featureName, final boolean numOnly) {
        final EditTextString edittextstring = new EditTextString();
        final EditTextNum edittextnum = new EditTextNum();
        LinearLayout linearLayout = new LinearLayout(this);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(MATCH_PARENT, MATCH_PARENT);
        layoutParams.setMargins(7, 5, 7, 5);

        final Button button = new Button(this);
        if (numOnly) {
            int num = Preferences.loadPrefInt(featureName, feature);
            edittextnum.setNum((num == 0) ? 1 : num);
            button.setText(Html.fromHtml(featureName + ": <font color='" + TEXT_COLOR + "'>" + ((num == 0) ? 1 : num) + "</font>"));
        } else {
            String string = "_Bumpmap";
            edittextstring.setString((string == "") ? "" : string);
            button.setText(Html.fromHtml(featureName + ": <font color='" + TEXT_COLOR + "'>" + string + "</font>"));
        }
        button.setAllCaps(false);
        button.setLayoutParams(layoutParams);
        button.setBackgroundColor(Color.parseColor("#5f72f5"));
        button.setTextColor(TEXT_COLOR_2);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                final AlertDialog alert = new AlertDialog.Builder(getApplicationContext(), 2).create();
                if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.KITKAT) {
                    Objects.requireNonNull(alert.getWindow()).setType(Build.VERSION.SDK_INT >= 26 ? 2038 : 2002);
                }
                alert.setOnCancelListener(new DialogInterface.OnCancelListener() {
                    public void onCancel(DialogInterface dialog) {
                        InputMethodManager imm = (InputMethodManager) getSystemService(getApplicationContext().INPUT_METHOD_SERVICE);
                        imm.toggleSoftInput(InputMethodManager.HIDE_IMPLICIT_ONLY, 0);
                    }
                });

                //LinearLayout
                LinearLayout linearLayout1 = new LinearLayout(getApplicationContext());
                linearLayout1.setPadding(0, 5, 0, 5);
                linearLayout1.setOrientation(LinearLayout.VERTICAL);
                linearLayout1.setBackgroundColor(MENU_FEATURE_BG_COLOR);

                //TextView
                final TextView TextViewNote = new TextView(getApplicationContext());
                TextViewNote.setText("Tap OK to apply changes. Tap outside to cancel");
                TextViewNote.setTextColor(TEXT_COLOR_2);

                //Edit text
                final EditText edittext = new EditText(getApplicationContext());
                edittext.setMaxLines(1);
                edittext.getBackground().mutate().setColorFilter(Color.parseColor("#5f72f5"), PorterDuff.Mode.SRC_ATOP);
                edittext.setWidth(convertDipToPixels(300));
                edittext.setTextColor(TEXT_COLOR);
                edittext.setHintTextColor(I);
                if (numOnly) {
                    edittext.setInputType(InputType.TYPE_CLASS_NUMBER);
                    edittext.setKeyListener(DigitsKeyListener.getInstance("0123456789-"));
                    edittext.setText(String.valueOf(edittextnum.getNum()));
                    InputFilter[] FilterArray = new InputFilter[1];
                    FilterArray[0] = new InputFilter.LengthFilter(10);
                    edittext.setFilters(FilterArray);
                } else {
                    edittext.setText(edittextstring.getString());
                }
                edittext.setOnFocusChangeListener(new View.OnFocusChangeListener() {
                    @Override
                    public void onFocusChange(View v, boolean hasFocus) {
                        InputMethodManager imm = (InputMethodManager) getSystemService(getApplicationContext().INPUT_METHOD_SERVICE);
                        if (hasFocus) {
                            imm.toggleSoftInput(InputMethodManager.SHOW_FORCED, InputMethodManager.HIDE_IMPLICIT_ONLY);
                        } else {
                            imm.toggleSoftInput(InputMethodManager.HIDE_IMPLICIT_ONLY, 0);
                        }
                    }
                });
                edittext.requestFocus();


                //Button
                Button btndialog = new Button(getApplicationContext());
                btndialog.setBackgroundColor(Color.parseColor("#5f72f5"));
                btndialog.setTextColor(TEXT_COLOR);
                btndialog.setText("OK");
                btndialog.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View view) {
                        if (numOnly) {
                            int num;
                            try {
                                num = Integer.parseInt(TextUtils.isEmpty(edittext.getText().toString()) ? "0" : edittext.getText().toString());
                            } catch (NumberFormatException ex) {
                                num = 2147483640;
                            }
                            edittextnum.setNum(num);
                            button.setText(Html.fromHtml(featureName + ": <font color='#41c300'>" + num + "</font>"));
                            alert.dismiss();
                            Preferences.changeFeatureInt(featureName, feature, num);
                        } else {
                            String str = edittext.getText().toString();
                            edittextstring.setString(edittext.getText().toString());
                            button.setText(Html.fromHtml(featureName + ": <font color='#41c300'>" + str + "</font>"));
                            alert.dismiss();
                            Preferences.changeFeatureString(featureName, feature, str);
                        }
                        edittext.setFocusable(false);
                    }
                });

                linearLayout1.addView(TextViewNote);
                linearLayout1.addView(edittext);
                linearLayout1.addView(btndialog);
                alert.setView(linearLayout1);
                alert.show();
            }
        });

        linearLayout.addView(button);
        return linearLayout;
    }
    private View TextURL(final int feature, final String featureName, final boolean numOnly) {
        final EditTextString edittextstring = new EditTextString();
        final EditTextNum edittextnum = new EditTextNum();
        LinearLayout linearLayout = new LinearLayout(this);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(MATCH_PARENT, MATCH_PARENT);
        layoutParams.setMargins(7, 5, 7, 5);

        final Button button = new Button(this);
        if (numOnly) {
            int num = Preferences.loadPrefInt(featureName, feature);
            edittextnum.setNum((num == 0) ? 1 : num);
            button.setText(Html.fromHtml(featureName + ": <font color='" + NumberTxtColor + "'>" + ((num == 0) ? 1 : num) + "</font>"));
        } else {
            String string = "URL";
            edittextstring.setString((string == "") ? "" : string);
            button.setText(Html.fromHtml(featureName + ": <font color='" + NumberTxtColor + "'>" + string + "</font>"));
        }
        button.setAllCaps(false);
        button.setLayoutParams(layoutParams);
        button.setBackgroundColor(BTN_COLOR);
        button.setTextColor(TEXT_COLOR_2);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                final AlertDialog alert = new AlertDialog.Builder(getApplicationContext(), 2).create();
                if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.KITKAT) {
                    Objects.requireNonNull(alert.getWindow()).setType(Build.VERSION.SDK_INT >= 26 ? 2038 : 2002);
                }
                alert.setOnCancelListener(new DialogInterface.OnCancelListener() {
                    public void onCancel(DialogInterface dialog) {
                        InputMethodManager imm = (InputMethodManager) getSystemService(getApplicationContext().INPUT_METHOD_SERVICE);
                        imm.toggleSoftInput(InputMethodManager.HIDE_IMPLICIT_ONLY, 0);
                    }
                });

                //LinearLayout
                LinearLayout linearLayout1 = new LinearLayout(getApplicationContext());
                linearLayout1.setPadding(5, 5, 5, 5);
                linearLayout1.setOrientation(LinearLayout.VERTICAL);
                linearLayout1.setBackgroundColor(MENU_FEATURE_BG_COLOR);

                //TextView
                final TextView TextViewNote = new TextView(getApplicationContext());
                TextViewNote.setText("Tap OK to apply changes. Tap outside to cancel");
                TextViewNote.setTextColor(TEXT_COLOR_2);

                //Edit text
                final EditText edittext = new EditText(getApplicationContext());
                edittext.setMaxLines(1);
                edittext.setWidth(convertDipToPixels(300));
                edittext.setTextColor(TEXT_COLOR_2);
                edittext.setHintTextColor(HintTxtColor);
                if (numOnly) {
                    edittext.setInputType(InputType.TYPE_CLASS_NUMBER);
                    edittext.setKeyListener(DigitsKeyListener.getInstance("0123456789-"));
                    edittext.setText(String.valueOf(edittextnum.getNum()));
                    InputFilter[] FilterArray = new InputFilter[1];
                    FilterArray[0] = new InputFilter.LengthFilter(10);
                    edittext.setFilters(FilterArray);
                } else {
                    edittext.setText(edittextstring.getString());
                }
                edittext.setOnFocusChangeListener(new View.OnFocusChangeListener() {
                    @Override
                    public void onFocusChange(View v, boolean hasFocus) {
                        InputMethodManager imm = (InputMethodManager) getSystemService(getApplicationContext().INPUT_METHOD_SERVICE);
                        if (hasFocus) {
                            imm.toggleSoftInput(InputMethodManager.SHOW_FORCED, InputMethodManager.HIDE_IMPLICIT_ONLY);
                        } else {
                            imm.toggleSoftInput(InputMethodManager.HIDE_IMPLICIT_ONLY, 0);
                        }
                    }
                });
                edittext.requestFocus();


                //Button
                Button btndialog = new Button(getApplicationContext());
                btndialog.setBackgroundColor(BTN_COLOR);
                btndialog.setTextColor(TEXT_COLOR_2);
                btndialog.setText("OK");
                btndialog.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View view) {
                        if (numOnly) {
                            int num;
                            try {
                                num = Integer.parseInt(TextUtils.isEmpty(edittext.getText().toString()) ? "0" : edittext.getText().toString());
                            } catch (NumberFormatException ex) {
                                num = 2147483640;
                            }
                            edittextnum.setNum(num);
                            button.setText(Html.fromHtml(featureName + ": <font color='#41c300'>" + num + "</font>"));
                            alert.dismiss();
                            Preferences.changeFeatureInt(featureName, feature, num);
                        } else {
                            String str = edittext.getText().toString();
                            edittextstring.setString(edittext.getText().toString());
                            URLMusic = str;
                            button.setText(Html.fromHtml(featureName + ": <font color='#41c300'>" + str + "</font>"));
                            alert.dismiss();
                            try {
                             //   mediaPlayer.stop();
                              //  mediaPlayer.setDataSource(URLMusic);
                             //   mediaPlayer.prepare();
                            }catch (Exception exception){

                            }
                            Preferences.changeFeatureString(featureName, feature, str);
                        }
                        edittext.setFocusable(false);
                    }
                });

                linearLayout1.addView(TextViewNote);
                linearLayout1.addView(edittext);
                linearLayout1.addView(btndialog);
                alert.setView(linearLayout1);
                alert.show();
            }
        });

        linearLayout.addView(button);
        return linearLayout;
    }
    private View CheckBox(final int featureNum, final String featureName) {
        final CheckBox checkBox = new CheckBox(this);
        checkBox.setText(featureName);
        checkBox.setTextColor(TEXT_COLOR_2);
        checkBox.setChecked(Preferences.loadPrefBoolean(featureName, featureNum));
        checkBox.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                if (checkBox.isChecked()) {
                    Preferences.changeFeatureBoolean(featureName, featureNum, isChecked);
                } else {
                    Preferences.changeFeatureBoolean(featureName, featureNum, isChecked);
                }
            }
        });
        return checkBox;
    }

    private View RadioButton(final int featureNum, String featureName, final String list) {

        final List<String> lists = new LinkedList<>(Arrays.asList(list.split(",")));

        final TextView textView = new TextView(this);
        textView.setText(featureName + ":");
        textView.setTextColor(TEXT_COLOR_2);

        final RadioGroup radioGroup = new RadioGroup(this);
        radioGroup.setPadding(10, 5, 10, 5);
        radioGroup.setOrientation(LinearLayout.VERTICAL);
        radioGroup.addView(textView);

        for (int i = 0; i < lists.size(); i++) {
            final RadioButton Radioo = new RadioButton(this);
            final String finalFeatureName = featureName, radioName = lists.get(i);
            View.OnClickListener first_radio_listener = new View.OnClickListener() {
                public void onClick(View v) {
                    textView.setText(finalFeatureName + ": " + radioName);
                    textView.setText(Html.fromHtml("<font face='roboto'>" + finalFeatureName + ": <font color='" + NumberTxt +"'>" + radioName + "</font>"));
                    Preferences.changeFeatureInt(finalFeatureName, featureNum, radioGroup.indexOfChild(Radioo));
                }
            };
            System.out.println(lists.get(i));
            Radioo.setText(lists.get(i));
            Radioo.setTextColor(Color.LTGRAY);
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.LOLLIPOP)
                Radioo.setButtonTintList(ColorStateList.valueOf(RadioColor));
            Radioo.setOnClickListener(first_radio_listener);
            radioGroup.addView(Radioo);
        }

        return radioGroup;
    }

    private View Category(String text) {
        LinearLayout linearLayout7 = new LinearLayout(this);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(MATCH_PARENT, MATCH_PARENT);
        linearLayout7.setOrientation(LinearLayout.VERTICAL);
        TextView textView = new TextView(this);
        textView.setText("▼"+Html.fromHtml(text)+"▼");
        textView.setGravity(Gravity.CENTER);
        textView.setTextSize(15.0f);
        textView.setTextColor(TEXT_COLOR_2);
        textView.setTypeface(null, Typeface.BOLD);
        textView.setPadding(0, 5, 0, 5);

        linearLayout7.addView(textView);
        return linearLayout7;
    }

    private View RichTextView(String text) {
        TextView textView = new TextView(this);
        textView.setText(Html.fromHtml(text));
        textView.setTextColor(TEXT_COLOR_2);
        textView.setPadding(10, 5, 10, 5);
        return textView;
    }

    private View RichWebView(String text) {
        WebView wView = new WebView(this);
        wView.loadData(text, "text/html", "utf-8");
        wView.setBackgroundColor(0x00000000);
        wView.setPadding(0, 5, 0, 5);
        wView.getSettings().setAppCacheEnabled(false);
        wView.requestLayout();
        return wView;
    }

    public static String hsvToRgb(float hue, float saturation, float value) {

        int h = (int)(hue * 6);
        float f = hue * 6 - h;
        float p = value * (1 - saturation);
        float q = value * (1 - f * saturation);
        float t = value * (1 - (1 - f) * saturation);

        switch (h) {
            case 0: return rgbToString(value, t, p);
            case 1: return rgbToString(q, value, p);
            case 2: return rgbToString(p, value, t);
            case 3: return rgbToString(p, q, value);
            case 4: return rgbToString(t, p, value);
            case 5: return rgbToString(value, p, q);
            default: throw new RuntimeException("Something went wrong when converting from HSV to RGB. Input was " + hue + ", " + saturation + ", " + value);
        }
    }

    public static String rgbToString(float r, float g, float b) {
        String rs = Integer.toHexString((int)(r * 256));
        String gs = Integer.toHexString((int)(g * 256));
        String bs = Integer.toHexString((int)(b * 256));
        return rs + gs + bs;
    }

    private void localChanges(int featureNum, boolean toggle, int value) {
        switch (featureNum) {
            case -1:
                break;
            case -2:
                break;
            case -4:
                break;
            case -5:
                break;
            case -6:
                break;
            case -100:
                break;
            case 2:
                break;
            case -10:
                break;
            case -11:
                break;
            case -12:
                break;
            case -13:
                break;
            case -14:
                break;
        }
    }
    int secondaryColor;
    @TargetApi(Build.VERSION_CODES.LOLLIPOP)
    private void startAnimation() {
        //https://stackoverflow.com/questions/46357251/android-argbevaluator-calculate-fraction
        //Thanks RAUNAK MODS

        //0xAARRGGBB
        //RED         = 0xFFFF0000;
        //YELLOW      = 0xFFFFFF00;
        //GREEN       = 0xFF00FF00;
        //BLUE        = 0xFF0000FF;
        //MAGENTA     = 0xFFFF00FF;
        //ValueAnimator animator = ValueAnimator.ofArgb(Color.RED, Color.YELLOW, Color.GREEN, Color.BLUE, Color.MAGENTA, Color.RED);
        //Color animation with transparent

        int duration = 3000;

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.LOLLIPOP) {
            //RED, YELLOW, GREEN, BLUE, MAGENTA, RED
            ValueAnimator animator = ValueAnimator.ofArgb(0xAA5f72f5, 0xAA9921e8,0xAA5f72f5);
            animator.setDuration(duration);
            animator.setRepeatCount(ValueAnimator.INFINITE);
            animator.setRepeatMode(ValueAnimator.RESTART);
            animator.setInterpolator(new LinearInterpolator());
            //Apply GradientDrawable to it
            animator.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() {
                @Override
                public void onAnimationUpdate(ValueAnimator animation) {
                    int color = (int) animation.getAnimatedValue();
                    // if (Preferences.isAnimating) {
                    GradientDrawable MENU_STROKE1 = new GradientDrawable(GradientDrawable.Orientation.LEFT_RIGHT,
                            new int[]{color, secondaryColor});
                    MENU_STROKE1.setCornerRadius(MENU_CORNER); //Set corner
                    //gdMenuBody.setStroke(3, Color.parseColor("#32cb00")); //Set border

                    //title2.setBackground(MENU_STROKE1);
                    //title31.setBackground(ColoAnimation ? MENU_STROKE1 : MENU_STROKE);
                    //mExpanded.setBackgroundColor(color);
                    //} else
                    // mExpanded.setBackgroundColor(MENU_BG_COLOR);
                }
            });
            animator.end();
            animator.start();
            //YELLOW, GREEN, BLUE, MAGENTA, RED, YELLOW
            ValueAnimator animator2 = ValueAnimator.ofArgb(Color.argb(125,95,114,245), Color.argb(125,153,33,232),Color.argb(125,95,114,245));
            animator2.setDuration(duration);
            animator2.setRepeatCount(ValueAnimator.INFINITE);
            animator2.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() {
                @Override
                public void onAnimationUpdate(ValueAnimator animation) {
                    secondaryColor = (int) animation.getAnimatedValue();
                }
            });
            animator2.start();
        }
    }

    public int onStartCommand(Intent intent, int i, int i2) {
        return Service.START_NOT_STICKY;
    }

    private boolean isViewCollapsed() {
        return rootFrame == null || mCollapsed.getVisibility() == View.VISIBLE;
    }


    private int convertDipToPixels(int i) {
        return (int) ((((float) i) * getResources().getDisplayMetrics().density) + 0.5f);
    }

    private int dp(int i) {
        return (int) TypedValue.applyDimension(1, (float) i, getResources().getDisplayMetrics());
    }


    private boolean isNotInGame() {
        RunningAppProcessInfo runningAppProcessInfo = new RunningAppProcessInfo();
        ActivityManager.getMyMemoryState(runningAppProcessInfo);
        return runningAppProcessInfo.importance != 100;
    }

    public void onDestroy() {
        super.onDestroy();
        if (rootFrame != null) {
            mWindowManager.removeView(rootFrame);
        }
        stopSelf();
    }

    public void onTaskRemoved(Intent intent) {
        super.onTaskRemoved(intent);
        stopSelf();
    }

    private void Thread() {
        if (rootFrame == null) {
            return;
        }
        if (isNotInGame()) {
            rootFrame.setVisibility(View.INVISIBLE);
        } else {
            rootFrame.setVisibility(View.VISIBLE);
        }
    }
    private class EditTextString {
        private String text;

        public void setString(String s) {
            text = s;
        }

        public String getString() {
            return text;
        }
    }

    private class EditTextNum {
        private int val;

        public void setNum(int i) {
            val = i;
        }

        public int getNum() {
            return val;
        }
    }
    private class EditTextValue {
        private int val;

        public void setValue(int i) {
            val = i;
        }

        public int getValue() {
            return val;
        }
    }
    public interface OnMessageReceived {
        public void messageReceived(String message);
    }
    @Override
    public IBinder onBind(Intent intent) {
        return null;
    }
    private static Bitmap buildBitmap(Bitmap original, boolean canReuseInBitmap) {
        // First we should check the original
        if (original == null)
            throw new NullPointerException("Blur bitmap original isn't null");

        Bitmap.Config config = original.getConfig();
        if (config != Bitmap.Config.ARGB_8888 && config != Bitmap.Config.RGB_565) {
            throw new RuntimeException("Blur bitmap only supported Bitmap.Config.ARGB_8888 and Bitmap.Config.RGB_565.");
        }

        // If can reuse in bitmap return this or copy
        Bitmap rBitmap;
        if (canReuseInBitmap) {
            rBitmap = original;
        } else {
            rBitmap = original.copy(config, true);
        }
        return (rBitmap);
    }
    public static Bitmap blur(Bitmap original, int radius, boolean canReuseInBitmap) {

        if (radius < 1) {
            return (null);
        }

        Bitmap bitmap = buildBitmap(original, canReuseInBitmap);

        // Return this none blur
        if (radius == 1) {
            return bitmap;
        }

        int w = bitmap.getWidth();
        int h = bitmap.getHeight();

        int[] pix = new int[w * h];
        // get array
        bitmap.getPixels(pix, 0, w, 0, 0, w, h);

        // run Blur
        int wm = w - 1;
        int hm = h - 1;
        int wh = w * h;
        int div = radius + radius + 1;

        short r[] = new short[wh];
        short g[] = new short[wh];
        short b[] = new short[wh];
        int rSum, gSum, bSum, x, y, i, p, yp, yi, yw;
        int vMin[] = new int[Math.max(w, h)];

        int divSum = (div + 1) >> 1;
        divSum *= divSum;

        short dv[] = new short[256 * divSum];
        for (i = 0; i < 256 * divSum; i++) {
            dv[i] = (short) (i / divSum);
        }

        yw = yi = 0;

        int[][] stack = new int[div][3];
        int stackPointer;
        int stackStart;
        int[] sir;
        int rbs;
        int r1 = radius + 1;
        int routSum, goutSum, boutSum;
        int rinSum, ginSum, binSum;

        for (y = 0; y < h; y++) {
            rinSum = ginSum = binSum = routSum = goutSum = boutSum = rSum = gSum = bSum = 0;
            for (i = -radius; i <= radius; i++) {
                p = pix[yi + Math.min(wm, Math.max(i, 0))];
                sir = stack[i + radius];
                sir[0] = (p & 0xff0000) >> 16;
                sir[1] = (p & 0x00ff00) >> 8;
                sir[2] = (p & 0x0000ff);

                rbs = r1 - Math.abs(i);
                rSum += sir[0] * rbs;
                gSum += sir[1] * rbs;
                bSum += sir[2] * rbs;
                if (i > 0) {
                    rinSum += sir[0];
                    ginSum += sir[1];
                    binSum += sir[2];
                } else {
                    routSum += sir[0];
                    goutSum += sir[1];
                    boutSum += sir[2];
                }
            }
            stackPointer = radius;

            for (x = 0; x < w; x++) {

                r[yi] = dv[rSum];
                g[yi] = dv[gSum];
                b[yi] = dv[bSum];

                rSum -= routSum;
                gSum -= goutSum;
                bSum -= boutSum;

                stackStart = stackPointer - radius + div;
                sir = stack[stackStart % div];

                routSum -= sir[0];
                goutSum -= sir[1];
                boutSum -= sir[2];

                if (y == 0) {
                    vMin[x] = Math.min(x + radius + 1, wm);
                }
                p = pix[yw + vMin[x]];

                sir[0] = (p & 0xff0000) >> 16;
                sir[1] = (p & 0x00ff00) >> 8;
                sir[2] = (p & 0x0000ff);

                rinSum += sir[0];
                ginSum += sir[1];
                binSum += sir[2];

                rSum += rinSum;
                gSum += ginSum;
                bSum += binSum;

                stackPointer = (stackPointer + 1) % div;
                sir = stack[(stackPointer) % div];

                routSum += sir[0];
                goutSum += sir[1];
                boutSum += sir[2];

                rinSum -= sir[0];
                ginSum -= sir[1];
                binSum -= sir[2];

                yi++;
            }
            yw += w;
        }
        for (x = 0; x < w; x++) {
            rinSum = ginSum = binSum = routSum = goutSum = boutSum = rSum = gSum = bSum = 0;
            yp = -radius * w;
            for (i = -radius; i <= radius; i++) {
                yi = Math.max(0, yp) + x;

                sir = stack[i + radius];

                sir[0] = r[yi];
                sir[1] = g[yi];
                sir[2] = b[yi];

                rbs = r1 - Math.abs(i);

                rSum += r[yi] * rbs;
                gSum += g[yi] * rbs;
                bSum += b[yi] * rbs;

                if (i > 0) {
                    rinSum += sir[0];
                    ginSum += sir[1];
                    binSum += sir[2];
                } else {
                    routSum += sir[0];
                    goutSum += sir[1];
                    boutSum += sir[2];
                }

                if (i < hm) {
                    yp += w;
                }
            }
            yi = x;
            stackPointer = radius;
            for (y = 0; y < h; y++) {
                // Preserve alpha channel: ( 0xff000000 & pix[yi] )
                pix[yi] = (0xff000000 & pix[yi]) | (dv[rSum] << 16) | (dv[gSum] << 8) | dv[bSum];

                rSum -= routSum;
                gSum -= goutSum;
                bSum -= boutSum;

                stackStart = stackPointer - radius + div;
                sir = stack[stackStart % div];

                routSum -= sir[0];
                goutSum -= sir[1];
                boutSum -= sir[2];

                if (x == 0) {
                    vMin[y] = Math.min(y + r1, hm) * w;
                }
                p = x + vMin[y];

                sir[0] = r[p];
                sir[1] = g[p];
                sir[2] = b[p];

                rinSum += sir[0];
                ginSum += sir[1];
                binSum += sir[2];

                rSum += rinSum;
                gSum += ginSum;
                bSum += binSum;

                stackPointer = (stackPointer + 1) % div;
                sir = stack[stackPointer];

                routSum += sir[0];
                goutSum += sir[1];
                boutSum += sir[2];

                rinSum -= sir[0];
                ginSum -= sir[1];
                binSum -= sir[2];

                yi += w;
            }
        }

        // set Bitmap
        bitmap.setPixels(pix, 0, w, 0, 0, w, h);

        return (bitmap);
    }
}