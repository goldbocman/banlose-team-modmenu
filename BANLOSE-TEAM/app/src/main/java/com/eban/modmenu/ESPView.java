    package com.eban.modmenu;

    import android.annotation.TargetApi;
import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.Typeface;
import android.os.Build;
import android.os.Process;
import android.util.Base64;
import android.view.View;
public class ESPView extends View implements Runnable {
        Paint mStrokePaint;
        Paint mFilledPaint;
        Paint mTextPaint;
        Thread mThread;
        public static int FPS = 60;
        long sleepTime;
        private int    mFPS = 0;
        private int    mFPSCounter = 0;
        private long   mFPSTime = 0;
        public static int frames = 0;
        native String icoa();
        native String tyanover();
        int LineInt = 0;
        native String[] data(float xs,float ys,float zs,float xs2,float ys2,float zs2);
        native String FunctionArray();
        float[][] LineCoord = new float[1400000][3];
        Bitmap ahegao;
        Bitmap tyanovers;
        Bitmap tyan;
        boolean AllDel = false;
        public ESPView(Context context) {
            super(context, null, 0);
            InitializePaints();
            tyanovers = convertBase64StringToBitmap(tyanover());
            tyan = Bitmap.createScaledBitmap(tyanovers,1728/3,1033/3,true);
            ahegao = convertBase64StringToBitmap(icoa());
            setFocusableInTouchMode(false);
            setBackgroundColor(Color.TRANSPARENT);
            sleepTime = 1000 / FPS;
            mThread = new Thread(this);
            mThread.start();

        }

        public static float roundDown5(float value) {
            int scale = 2;
            return (float) (Math.round(value * Math.pow(10, scale)) / Math.pow(10, scale));
        }
        @Override
        protected void onDraw(Canvas canvas) {
            if (canvas != null && getVisibility() == VISIBLE) {
                ClearCanvas(canvas);
                FloatingModMenuService.DrawOn(this, canvas);

            }
        }
        public static Bitmap convertBase64StringToBitmap(String source) {
            byte[] rawBitmap = Base64.decode(source.getBytes(), Base64.DEFAULT);
            Bitmap bitmap = BitmapFactory.decodeByteArray(rawBitmap, 0, rawBitmap.length);
            return bitmap;
        }
        @Override
        public void run() {
            Process.setThreadPriority(10);
            while (this.mThread.isAlive() && !this.mThread.isInterrupted()) {
                try {
                    long currentTimeMillis = System.currentTimeMillis();
                    postInvalidate();
                    Thread.sleep(Math.max(Math.min(0, sleepTime - (System.currentTimeMillis() - currentTimeMillis)), sleepTime));
                } catch (Exception unused) {
                    Thread.currentThread().interrupt();
                    return;
                }
            }
        }
        public int[] IntToColor(int i){

            int RED = 51;
            int GREEN = 0;
            int BLUE = 0;
            for(int sss = 0; sss < i; sss++){
                if (RED == 51){

                    if (BLUE == 0 ){
                        if (GREEN == 51){}
                        else{
                            GREEN = GREEN+1;
                        }
                    }
                }
                if (GREEN == 51){
                    if (RED == 0){} else{
                        RED = RED-1;
                    }
                }
                if (GREEN == 51) {
                    if (RED == 0) {
                        if (BLUE==51){} else{
                            BLUE = BLUE+1;
                        }
                    }
                }
                if(BLUE == 51) {
                    if (GREEN == 0) {
                        RED = RED+1;
                    } else{
                        GREEN = GREEN-1;
                    }
                }
            }

            int[] Colr = new int[3];
            Colr[0] = RED*5;
            Colr[1] = GREEN*5;
            Colr[2] = BLUE*5;
            return Colr;
        }

        public void InitializePaints() {
            mStrokePaint = new Paint();
            mStrokePaint.setStyle(Paint.Style.STROKE);
            mStrokePaint.setAntiAlias(true);
            mStrokePaint.setColor(Color.rgb(0, 0, 0));

            mFilledPaint = new Paint();
            mFilledPaint.setStyle(Paint.Style.FILL);
            mFilledPaint.setAntiAlias(true);
            mFilledPaint.setColor(Color.rgb(0, 0, 0));
            mTextPaint = new Paint();
            mTextPaint.setStyle(Paint.Style.FILL_AND_STROKE);
            mTextPaint.setAntiAlias(true);
            mTextPaint.setColor(Color.rgb(0, 0, 0));

            mTextPaint.setStrokeWidth(1.1f);
            Typeface type = Typeface.createFromAsset(getContext().getAssets(),"font.otf");
            //mTextPaint.setTypeface(type);
        }

        public void ClearCanvas(Canvas cvs) {
            cvs.drawColor(Color.TRANSPARENT, PorterDuff.Mode.CLEAR);
        }
        public void DrawRun(Canvas cvs, float x, float y, float z,int r,int g,int b, float lineWidth,int Height) {
            mStrokePaint.setAlpha(255);
            mStrokePaint.setStrokeWidth(lineWidth);

            int result = LineInt/ 3;
            if (result > 1) {
                float OldCoord = LineCoord[result-1][0] + LineCoord[result-1][1] + LineCoord[result-1][2];
                float Coord = x + y + z ;
                if(Coord != OldCoord){
                    LineCoord[result][0] = roundDown5(x);
                    LineCoord[result][1] = roundDown5(y);
                    LineCoord[result][2] = roundDown5(z);
                    LineInt +=3;
                }
                int iss = 0;
                for (int i = 0; i < result - 1; i++) {
                    String[] tea = data(LineCoord[iss][0],LineCoord[iss][1],LineCoord[iss][2],LineCoord[iss + 1][0],LineCoord[iss + 1][1],LineCoord[iss + 1][2]);
                    float LineOneX = Float.parseFloat(tea[0]);

                    float LineOneY = Float.parseFloat(tea[1]);

                    float LineOneZ = Float.parseFloat(tea[2]);
                    float LineTwoX = Float.parseFloat(tea[3]);
                    float LineTwoY = Float.parseFloat(tea[4]);
                    float LineTwoZ = Float.parseFloat(tea[5]);
                    iss += 1;

                    if (LineOneZ < 1.f && LineTwoZ < 1.f) continue;
                    int[] syk;
                    syk = IntToColor(i);

                    mStrokePaint.setColor(Color.rgb(syk[0],syk[1],syk[2]));
                    cvs.drawLine(LineOneX, Height - LineOneY, LineTwoX, Height - LineTwoY, mStrokePaint);

                }
            }else{
                LineCoord[0][0] = roundDown5(x);
                LineCoord[0][1] = roundDown5(y);
                LineCoord[0][2] = roundDown5(z);
                LineInt += 3;
            }
            int r1 = LineInt/3;
            if(r1 > 250){
                LineCoord = new float[1400000][3];
                LineInt = 0;
            }
        }

        public void DrawLine(Canvas cvs, int a, int r, int g, int b, float lineWidth, float fromX, float fromY, float toX, float toY) {
            mStrokePaint.setColor(Color.rgb(r, g, b));
            mStrokePaint.setAlpha(a);
            mStrokePaint.setStrokeWidth(lineWidth);
            cvs.drawLine(fromX, fromY, toX, toY, mStrokePaint);
        }

        public void DrawText(Canvas cvs, int a, int r, int g, int b, String txt, float posX, float posY, float size) {
            mTextPaint.setColor(Color.rgb(r, g, b));
            mTextPaint.setAlpha(a);
            mTextPaint.setTextAlign(Paint.Align.CENTER);
            if (getRight() > 1920 || getBottom() > 1920)
                mTextPaint.setTextSize(4 + size);
            else if (getRight() == 1920 || getBottom() == 1920)
                mTextPaint.setTextSize(2 + size);
            else
                mTextPaint.setTextSize(size);
            cvs.drawText(txt, posX, posY, mTextPaint);
        }
        public void DrawTexts(Canvas cvs, int a, int r, int g, int b, float posX, float posY, float size) {
            mTextPaint.setColor(Color.rgb(r, g, b));
            mTextPaint.setAlpha(a);
            mTextPaint.setTextAlign(Paint.Align.RIGHT);
            float LastX = 0;
            float LastY = -200;
            if (getRight() > 1920 || getBottom() > 1920)
                mTextPaint.setTextSize(4 + size);
            else if (getRight() == 1920 || getBottom() == 1920)
                mTextPaint.setTextSize(2 + size);
            else
                mTextPaint.setTextSize(size);
            Paint.FontMetrics fm = mTextPaint.getFontMetrics();
            float height = fm.bottom - fm.top;
            String lssss = FunctionArray();
            if(lssss != "") {
                String[] strSplit = lssss.split("_");
                for (int i = 0; i < strSplit.length; i++) {
                    String function = strSplit[i];
                    float width = mTextPaint.measureText(function);
                    float fff = height / 4;
                    float posYY = posY + (height * i);
                    DrawLine(cvs, 255,  r, g, b, 3, posX - width - 20, posYY - height + fff, posX - width - 20, posYY + fff);
                    cvs.drawText(function, posX, posYY, mTextPaint);
                    if (LastY > -200) {
                        DrawLine(cvs, 255,  r, g, b, 3, posX - width - 20, LastY, LastX, LastY);
                    }
                    LastX = posX - width - 20;
                    LastY = posYY + fff;
                    if (i == strSplit.length - 1) {
                        DrawLine(cvs, 255,  r, g, b, 3, posX - width - 20, posYY + fff, posX, posYY + fff);
                    }
                }
            }
        }
        public void DrawArrayPlayer(Canvas cvs, int a, int r, int g, int b, float posX, float posY, float size,String txt) {
            mTextPaint.setColor(Color.rgb(r, g, b));
            mTextPaint.setAlpha(a);
            mTextPaint.setTextAlign(Paint.Align.LEFT);
            float LastX = 0;
            float LastY = -200;
            if (getRight() > 1920 || getBottom() > 1920)
                mTextPaint.setTextSize(4 + size);
            else if (getRight() == 1920 || getBottom() == 1920)
                mTextPaint.setTextSize(2 + size);
            else
                mTextPaint.setTextSize(size);
            Paint.FontMetrics fm = mTextPaint.getFontMetrics();
            float height = fm.bottom - fm.top;
            String lssss = txt;
            if(lssss != "") {
                String[] strSplit = lssss.split("_");
                for (int i = 0; i < strSplit.length; i++) {
                    String function = strSplit[i];
                    float width = mTextPaint.measureText(function);
                    float fff = height / 4;
                    float posYY = posY + (height * i);
                    DrawFilledRects(cvs,125,0,0,0,posX + width + 20,posYY - height + fff,posX,posYY + fff);
                    DrawLine(cvs, 255,  r, g, b, 3, posX + width + 20, posYY - height + fff, posX + width + 20, posYY + fff);

                    cvs.drawText(function, posX, posYY, mTextPaint);
                    if (LastY > -200) {
                       DrawLine(cvs, 255,  r, g, b, 3, posX + width + 20, LastY, LastX, LastY);
                    }
                    LastX = posX - width - 20;
                    LastY = posYY + fff;
                    if (i == strSplit.length - 1) {
                        DrawLine(cvs, 255,  r, g, b, 3, posX + width + 20, posYY + fff, posX, posYY + fff);
                    }
                }
            }
        }
        public void DrawCircle(Canvas cvs, int a, int r, int g, int b, float stroke, float posX, float posY, float radius) {
            mStrokePaint.setColor(Color.rgb(r, g, b));
            mStrokePaint.setAlpha(a);
            mStrokePaint.setStrokeWidth(stroke);
            //GradientDrawable gradient = new GradientDrawable(GradientDrawable.Orientation.LEFT_RIGHT,new int[]{0xFFFFFFFF,0xFF000000});
            //Paint p = new Paint();
            //p.setDither(true);
            //p.setShader(gradient);
            //p.setShader(new LinearGradient(0, 0, 0, getHeight(), Color.parseColor("#5f72f5"),Color.WHITE, Shader.TileMode.MIRROR));
            //p.setStrokeWidth(stroke+2);
            //p.setStyle(Paint.Style.STROKE);
            //p.setAntiAlias(true);
            cvs.drawCircle(posX, posY, radius, mStrokePaint);
        }
        public void DrawFilledCircle(Canvas cvs, int a, int r, int g, int b, float posX, float posY, float radius) {
            mFilledPaint.setColor(Color.rgb(r, g, b));
            mFilledPaint.setAlpha(a);
            cvs.drawCircle(posX, posY, radius, mFilledPaint);
        }
        public void DrawTyan(Canvas cvs, int a, int r, int g, int b, int stroke, float x, float y, float width, float height) {
            mStrokePaint.setStrokeWidth(stroke);
            mStrokePaint.setColor(Color.rgb(r, g, b));
            mStrokePaint.setAlpha(a);
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.LOLLIPOP) {
                cvs.drawBitmap(tyan,x, y-1033/3,mStrokePaint);
            }
        }
        @TargetApi(Build.VERSION_CODES.LOLLIPOP)
        public void DrawRect(Canvas cvs, int a, int r, int g, int b, int stroke, float x, float y, float width, float height) {
            mStrokePaint.setStrokeWidth(stroke);
            mStrokePaint.setColor(Color.rgb(r, g, b));
            mStrokePaint.setAlpha(a);
            //Bitmap Ico = Bitmap.createScaledBitmap(ahegao,100,100,true);
            cvs.drawRect(x, y, x + width, y + height, mStrokePaint);
           // if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.LOLLIPOP) {
            //cvs.drawRoundRect(x, y, x + width, y + height,10,10, mStrokePaint);
            //cvs.drawBitmap(Ico,x, y,mStrokePaint);
        //}
    }


    public void DrawFilledRect(Canvas cvs, int a, int r, int g, int b, float x, float y, float width, float height) {
        mFilledPaint.setColor(Color.rgb(r, g, b));
        mFilledPaint.setAlpha(a);
        cvs.drawRect(x, y, x + width, y + height, mFilledPaint);
    }
        public void DrawFilledRects(Canvas cvs, int a, int r, int g, int b, float x, float y, float x2, float y2) {
            mFilledPaint.setColor(Color.rgb(r, g, b));
            mFilledPaint.setAlpha(a);
            cvs.drawRect(x, y, x2, y2, mFilledPaint);
        }

}
