В НАЧАЛО

bool ESP, esp360,ESPDistance,ESPTeamminate,ESPSkeleton, ESPLine, ESPBox, ESPHealth, ESPCrosshair = false;
int ESPBoxStyle = 1; /*Настройка коробки*/
int ESPLineLocation = 2; /*Расположение линий*/
float ESPDist = 1;
Color color; /*Цвет есп*/
float rq = 1.0f;
float gq = 0.0f;
float bq = 0.0f;
int re = 255;
int ge = 0;
int be =0;


ПОСЛЕ VECTOR3 GETPLAYERLOCATION

Vector4 GetPlayerHead(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0xC);
    location = V3toV4(get_position(head));

    return location;
}
Vector4 GetPlayerHip(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0x14);
    location = V3toV4(get_position(head));

    return location;
}
Vector4 GetPlayerleftLowerArm(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0x1C);
    location = V3toV4(get_position(head));

    return location;
}
Vector4 GetPlayerleftUpperArm(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0x18);
    location = V3toV4(get_position(head));

    return location;
}
Vector4 GetPlayerrightLowerArm(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0x24);
    location = V3toV4(get_position(head));

    return location;
}
Vector4 GetPlayerrightUpperArm(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0x20);
    location = V3toV4(get_position(head));

    return location;
}


Vector4 GetPlayerleftLowerLeg(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0x2C);
    location = V3toV4(get_position(head));

    return location;
}
Vector4 GetPlayerleftUpperLeg(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0x28);
    location = V3toV4(get_position(head));

    return location;
}
Vector4 GetPlayerrightLowerLeg(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0x34);
    location = V3toV4(get_position(head));

    return location;
}
Vector4 GetPlayerrightUpperLeg(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0x30);
    location = V3toV4(get_position(head));

    return location;
}


ТАМ ГДЕ РИСОВКА КРУГА ДЛЯ ФОВА

    if (ESP) {
        if (aimManager->enemies->empty()) {
            return;
        }
        for (int i = 0; i < aimManager->enemies->size(); i++) {

            void *Player = (*aimManager->enemies)[i]->object;

            if(true) {
                if(ESPDistance){
                    float dist = Vector3::Distance(GetPlayerLocation(myPlayer),GetPlayerLocation(Player));
                    if(dist < ESPDist){

                    }else{
                        continue;
                    }
                }
			    if (ESPRGB) {
			        if (re == 255) {
			            if (be == 0) {
			                if (ge == 255) {}
			                else {
			                    ge = ge + 1;
			                }
			            }
			        }
			        if (ge == 255) {
			            if (re == 0) {}
			            else {
			                re = re - 1;
			            }
			        }
			        if (ge == 255) {
			            if (re == 0) {
			                if (be == 255) {}
			                else {
			                    be = be + 1;
			                }
			            }
			        }
			        if (be == 255) {
			            if (ge == 0) {
			                mes = 1;
			                re = re + 1;
			            } else {
			                ge = ge - 1;
			            }
			        }
			        if (mes == 1) {
			            if (re == 255) {
			                if (be == 0) {}
			                else {
			                    be = be - 1;
			                }
			            }
			        }
			        color = Color(re, ge, be, 255);
			    }
                int healthi = GetPlayerHealth(Player);
                Color clr;
                clr.a = 255;
                Rect rect;
                Vector3 PlayerPosq = GetPlayerLocation(Player);
                Vector4 PlayerPos = Vector4(PlayerPosq.X,PlayerPosq.Y,PlayerPosq.Z);
                Vector3 PlayerMyq = GetPlayerLocation(myPlayer);
                Vector4 PlayerMy = Vector4(PlayerMyq.X,PlayerMyq.Y,PlayerMyq.Z);
                void *Cam = get_camera();
                char distance[99];
                float distancef = Vector3::Distance(PlayerPosq,PlayerMyq);
                int distancei = (int)round(distancef);
                char heal[10];

                sprintf(distance, "%i", distancei);
                char my[] = "М ";
                strcat(distance,my);
                Vector4 PosNew = {0.f, 0.f, 0.f};
                PosNew = WorldToScreenPoint(Cam, PlayerPos);
                Vector4 Origin;
                Origin = PlayerPos;
                Origin.Y += 0.f;
                float posnum = upval; /******* Hight slider * 0.1 ********/
                float posnum2 = upval2;/******* Size slider * 0.1 ********/
                Origin.Y += posnum;
                Vector4 BoxPosNew = {0.f, 0.f, 0.f};
                BoxPosNew = WorldToScreenPoint(Cam, Origin);
                float Hight =
                        abs(BoxPosNew.Y - PosNew.Y) * (posnum2 / posnum), Width =
                        Hight * 0.60f;

                rect = Rect(BoxPosNew.X - Width / 2.f,
                            get_screen_height() - BoxPosNew.Y,
                            Width, Hight
                );


                if (PosNew.Z < 1.f) continue;
                if(ESPSkeleton){


                    Vector4 PosHead = {0.f, 0.f, 0.f};
                    PosHead = WorldToScreenPoint(Cam, GetPlayerHead(Player));
                    Vector4 Origins;
                    Origins = GetPlayerHead(Player);
                    Origins.Y += 0.f;
                    Vector4 BoxPosNews = {0.f, 0.f, 0.f};
                    BoxPosNews = WorldToScreenPoint(Cam, Origins);
                    //hips
                    Vector4 PosHips = {0.f, 0.f, 0.f};
                    PosHips = WorldToScreenPoint(Cam, GetPlayerHip(Player));
                    Vector4 Originss;
                    Originss = GetPlayerHip(Player);
                    Originss.Y += 0.f;
                    Vector4 BoxPosNewss = {0.f, 0.f, 0.f};
                    BoxPosNewss = WorldToScreenPoint(Cam, Originss);
                    //leftUpperArm
                    Vector4 PosleftUpperArm = {0.f, 0.f, 0.f};
                    PosleftUpperArm = WorldToScreenPoint(Cam, GetPlayerleftUpperArm(Player));
                    Vector4 Originsss;
                    Originsss = GetPlayerleftUpperArm(Player);
                    Originsss.Y += 0.f;
                    Vector4 BoxPosNewsss = {0.f, 0.f, 0.f};
                    BoxPosNewsss = WorldToScreenPoint(Cam, Originsss);
                    //leftLowerArm
                    Vector4 leftLowerArm = {0.f, 0.f, 0.f};
                    leftLowerArm = WorldToScreenPoint(Cam, GetPlayerleftLowerArm(Player));
                    Vector4 Originssss;
                    Originssss = GetPlayerleftLowerArm(Player);
                    Originssss.Y += 0.f;
                    Vector4 BoxPosNewssss = {0.f, 0.f, 0.f};
                    BoxPosNewssss = WorldToScreenPoint(Cam, Originssss);
                    //rightUpperArm
                    Vector4 rightUpperArm = {0.f, 0.f, 0.f};
                    rightUpperArm = WorldToScreenPoint(Cam, GetPlayerrightUpperArm(Player));
                    Vector4 Originsssss;
                    Originsssss = GetPlayerrightUpperArm(Player);
                    Originsssss.Y += 0.f;
                    Vector4 BoxPosNewsssss = {0.f, 0.f, 0.f};
                    BoxPosNewsssss = WorldToScreenPoint(Cam, Originsssss);
                    //rightLowerArm
                    Vector4 rightLowerArm = {0.f, 0.f, 0.f};
                    rightLowerArm = WorldToScreenPoint(Cam, GetPlayerrightLowerArm(Player));
                    Vector4 Originssssss;
                    Originssssss = GetPlayerrightLowerArm(Player);
                    Originssssss.Y += 0.f;
                    Vector4 BoxPosNewssssss = {0.f, 0.f, 0.f};
                    BoxPosNewssssss = WorldToScreenPoint(Cam, Originssssss);
                    //leftUpperLeg
                    Vector4 leftUpperLeg = {0.f, 0.f, 0.f};
                    leftUpperLeg = WorldToScreenPoint(Cam, GetPlayerleftUpperLeg(Player));
                    Vector4 Originsssssss;
                    Originsssssss = GetPlayerleftUpperLeg(Player);
                    Originsssssss.Y += 0.f;
                    Vector4 BoxPosNewsssssss = {0.f, 0.f, 0.f};
                    BoxPosNewsssssss = WorldToScreenPoint(Cam, Originsssssss);
                    //leftLowerLeg
                    Vector4 leftLowerLeg = {0.f, 0.f, 0.f};
                    leftLowerLeg = WorldToScreenPoint(Cam, GetPlayerleftLowerLeg(Player));
                    Vector4 Originssssssss;
                    Originssssssss = GetPlayerleftLowerLeg(Player);
                    Originssssssss.Y += 0.f;
                    Vector4 BoxPosNewssssssss = {0.f, 0.f, 0.f};
                    BoxPosNewssssssss = WorldToScreenPoint(Cam, Originssssssss);
                    //rightUpperLeg
                    Vector4 rightUpperLeg = {0.f, 0.f, 0.f};
                    rightUpperLeg = WorldToScreenPoint(Cam, GetPlayerrightUpperLeg(Player));
                    Vector4 Originsssssssss;
                    Originsssssssss = GetPlayerrightUpperLeg(Player);
                    Originsssssssss.Y += 0.f;
                    Vector4 BoxPosNewsssssssss = {0.f, 0.f, 0.f};
                    BoxPosNewsssssssss = WorldToScreenPoint(Cam, Originsssssssss);
                    //rightLowerLeg
                    Vector4 rightLowerLeg = {0.f, 0.f, 0.f};
                    rightLowerLeg = WorldToScreenPoint(Cam, GetPlayerrightLowerLeg(Player));
                    Vector4 Originssssssssss;
                    Originssssssssss = GetPlayerrightLowerLeg(Player);
                    Originssssssssss.Y += 0.f;
                    Vector4 BoxPosNewssssssssss = {0.f, 0.f, 0.f};
                    BoxPosNewssssssssss = WorldToScreenPoint(Cam, Originssssssssss);

                    //skeleton
                    Color clr = Color(0, 255, 0, 255);
                    env->CallVoidMethod(esp, DrawCircle, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat)  PosHead.X,
                                        (jfloat) get_screen_height() - BoxPosNews.Y,
                                        (jfloat) rect.W/5);
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat)  PosHead.X,
                                        (jfloat) get_screen_height() - BoxPosNews.Y,
                                        (jfloat) PosHips.X,
                                        (jfloat) get_screen_height() - BoxPosNewss.Y);

                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat) PosHips.X,
                                        (jfloat) get_screen_height() - BoxPosNewss.Y,
                                        (jfloat) PosleftUpperArm.X,
                                        (jfloat) get_screen_height() - BoxPosNewsss.Y);
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat) PosleftUpperArm.X,
                                        (jfloat) get_screen_height() - BoxPosNewsss.Y,
                                        (jfloat) leftLowerArm.X,
                                        (jfloat) get_screen_height() - BoxPosNewssss.Y);


                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat) PosHips.X,
                                        (jfloat) get_screen_height() - BoxPosNewss.Y,
                                        (jfloat) rightUpperArm.X,
                                        (jfloat) get_screen_height() - BoxPosNewsssss.Y);
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat) rightUpperArm.X,
                                        (jfloat) get_screen_height() - BoxPosNewsssss.Y,
                                        (jfloat) rightLowerArm.X,
                                        (jfloat) get_screen_height() - BoxPosNewssssss.Y);



                    //left leg
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat) PosHips.X,
                                        (jfloat) get_screen_height() - BoxPosNewss.Y,
                                        (jfloat) leftUpperLeg.X,
                                        (jfloat) get_screen_height() - BoxPosNewsssssss.Y);
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat) leftUpperLeg.X,
                                        (jfloat) get_screen_height() - BoxPosNewsssssss.Y,
                                        (jfloat) leftLowerLeg.X,
                                        (jfloat) get_screen_height() - BoxPosNewssssssss.Y);

                    //right leg
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat) PosHips.X,
                                        (jfloat) get_screen_height() - BoxPosNewss.Y,
                                        (jfloat) rightUpperLeg.X,
                                        (jfloat) get_screen_height() - BoxPosNewsssssssss.Y);
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat) rightUpperLeg.X,
                                        (jfloat) get_screen_height() - BoxPosNewsssssssss.Y,
                                        (jfloat) rightLowerLeg.X,
                                        (jfloat) get_screen_height() - BoxPosNewssssssssss.Y);

                }
                if (ESPBox) {
                    if (ESPBoxStyle == 1) {
                        Color clra = Color(0, 255, 0, 255);
                        if (GetPlayerHealth(Player) <= (100 * 0.6)) {
                            clra = Color(255, 255, 0, 255);
                        }
                        if (GetPlayerHealth(Player) < (100 * 0.3)) {
                            clra = Color(255, 0, 0, 255);
                        }
                        float HealthPlayer = GetPlayerHealth(Player);

                        env->CallVoidMethod(esp, DrawRect, canvas, (jint) color.a, (jint) color.r,
                                            (jint) color.g, (jint) color.b, (jint) 2,
                                            (jfloat) rect.X, (jfloat) rect.Y, (jfloat) rect.W,
                                            (jfloat) rect.H);

                        jstring s = env->NewStringUTF(distance);
                        /*** Здесь можно поменять координаты ***/
                        /*** Меняем X и Y плюсуя или минусуя ***/
                        env->CallVoidMethod(esp, DrawText, canvas, (jint) clr.a,
                                            (jint) color.r, (jint) color.g, (jint) color.b,
                                            s,
                                            (jfloat) rect.X, (jfloat) rect.Y - 10, (jfloat) 10);

                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) clra.a, (jint) clra.r,
                                            (jint) clra.g, (jint) clra.b, (jfloat) 2.5,
                                            (jfloat) rect.X + rect.W + 5,
                                            (jfloat) rect.Y + rect.H,
                                            (jfloat) rect.X + rect.W + 5,
                                            (jfloat) (rect.Y + rect.H) - ((rect.H/100)*HealthPlayer));
                    } else if (ESPBoxStyle == 2) {


                        Color clr = Color(0, 255, 0, 255);
                        if (GetPlayerHealth(Player) <= (100 * 0.6)) {
                            clr = Color(255, 255, 0, 255);
                        }
                        if (GetPlayerHealth(Player) < (100 * 0.3)) {
                            clr = Color(255, 0, 0, 255);
                        }
                        float HealthPlayer = GetPlayerHealth(Player);

                        jstring s = env->NewStringUTF(distance);
                        env->CallVoidMethod(esp, DrawText, canvas, (jint) clr.a,
                                            (jint) color.r, (jint) color.g, (jint) color.b,
                                            s,
                                            (jfloat) rect.X, (jfloat) rect.Y + rect.H + 15, (jfloat) 12);
                        //ВЕРХ
                        env->CallVoidMethod(esp, DrawFilledRect, canvas, (jint) 125,
                                            (jint) 0, (jint) 0, (jint) 2,
                                            (jfloat) rect.X, (jfloat) rect.Y, (jfloat) rect.W,
                                            (jfloat) rect.H);
                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                            (jint) color.g, (jint) color.b, (jfloat) 2.5,
                                            (jfloat)  rect.X,
                                            (jfloat) rect.Y,
                                            (jfloat) rect.X + (rect.W/3),
                                            (jfloat) rect.Y);
                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                            (jint) color.g, (jint) color.b, (jfloat) 2.5,
                                            (jfloat)  rect.X+rect.W,
                                            (jfloat) rect.Y,
                                            (jfloat) (rect.X+rect.W) - (rect.W/3),
                                            (jfloat) rect.Y);
                        //НИЗ
                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                            (jint) color.g, (jint) color.b, (jfloat) 2.5,
                                            (jfloat)  rect.X,
                                            (jfloat) rect.Y+rect.H,
                                            (jfloat) rect.X + (rect.W/3),
                                            (jfloat) rect.Y+rect.H);
                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                            (jint) color.g, (jint) color.b, (jfloat) 2.5,
                                            (jfloat)  rect.X+rect.W,
                                            (jfloat) rect.Y+rect.H,
                                            (jfloat) (rect.X+rect.W) - (rect.W/3),
                                            (jfloat) rect.Y+rect.H);
                        //ЛЕВО
                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                            (jint) color.g, (jint) color.b, (jfloat) 2.5,
                                            (jfloat)  rect.X,
                                            (jfloat) rect.Y,
                                            (jfloat) rect.X,
                                            (jfloat) rect.Y+(rect.H /4));
                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                            (jint) color.g, (jint) color.b, (jfloat) 2.5,
                                            (jfloat)  rect.X,
                                            (jfloat) rect.Y+rect.H,
                                            (jfloat) rect.X,
                                            (jfloat) (rect.Y+rect.H)-(rect.H/4));
                        //ПРАВО
                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                            (jint) color.g, (jint) color.b, (jfloat) 2.5,
                                            (jfloat)  rect.X+ rect.W,
                                            (jfloat) rect.Y,
                                            (jfloat) rect.X+ rect.W,
                                            (jfloat) rect.Y+(rect.H /4));
                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                            (jint) color.g, (jint) color.b, (jfloat) 2.5,
                                            (jfloat)  rect.X + rect.W,
                                            (jfloat) rect.Y+rect.H,
                                            (jfloat) rect.X+ rect.W,
                                            (jfloat) (rect.Y+rect.H)-(rect.H/4));


                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                            (jint) clr.g, (jint) clr.b, (jfloat) 2.5,
                                            (jfloat)  rect.X - 10,
                                            (jfloat) rect.Y + rect.H,
                                            (jfloat) rect.X - 10,
                                            (jfloat) (rect.Y + rect.H) - ((rect.H/100)*HealthPlayer));
                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                            (jint) clr.g, (jint) clr.b, (jfloat) 2.5,
                                            (jfloat) rect.X + rect.W + 10,
                                            (jfloat) rect.Y + rect.H,
                                            (jfloat) rect.X + rect.W + 10,
                                            (jfloat) (rect.Y + rect.H) - ((rect.H/100)*HealthPlayer));
                    }
                }

                if (ESPLine) {
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                        (jint) color.g, (jint) color.b, (jfloat) 1.5,
                                        (jfloat) get_screen_width() / ESPLineLocation,
                                        (jfloat) get_screen_height() / 1000,
                                        (jfloat) rect.X + rect.W / 2,
                                        (jfloat) rect.Y + rect.H / 30);
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                        (jint) color.g, (jint) color.b, (jfloat) 3,
                                        (jfloat) get_screen_width(),
                                        (jfloat) get_screen_height(),
                                        (jfloat) get_screen_width(),
                                        (jfloat) get_screen_height() - get_screen_height());
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                        (jint) color.g, (jint) color.b, (jfloat) 3,
                                        (jfloat) get_screen_width(),
                                        (jfloat) get_screen_height() - get_screen_height(),
                                        (jfloat) get_screen_width() - get_screen_width(),
                                        (jfloat) get_screen_height() - get_screen_height());
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                        (jint) color.g, (jint) color.b, (jfloat) 3,
                                        (jfloat) get_screen_width() - get_screen_width(),
                                        (jfloat) get_screen_height() - get_screen_height(),
                                        (jfloat) get_screen_width() - get_screen_width(),
                                        (jfloat) get_screen_height());
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                        (jint) color.g, (jint) color.b, (jfloat) 3,
                                        (jfloat) get_screen_width() - get_screen_width(),
                                        (jfloat) get_screen_height(),
                                        (jfloat) get_screen_width(),
                                        (jfloat) get_screen_height());

                }

            } else {
                aimManager->removeEnemyGivenObject(Player);
            }
        }
    }

КНОПКИ 

            OBFUSCATE("205_Toggle_ESP"),
            OBFUSCATE("206_Toggle_ESP Line"),
            OBFUSCATE("24_Toggle_ESP Skeleton"),
            OBFUSCATE("207_Toggle_ESP Box"),
            OBFUSCATE("208_Toggle_ESP RGB"),
            OBFUSCATE("209_SeekBarColor_ESP Color_0_1271"),
            OBFUSCATE("229_Toggle_ESP Distance"),
            OBFUSCATE("230_SeekBar_ESP Distance_1_120"),
            OBFUSCATE("226_SeekBar_ESP Style_1_2"),
            OBFUSCATE("210_SeekBar_ESP HIGHT_1_10"),
            OBFUSCATE("211_SeekBar_ESP BOX SIZE_10_15"),



            
        case 226:
            ESPBoxStyle = value;
            break;
        case 24:
            ESPSkeleton = !ESPSkeleton  ;
            break;
		case 205:
            ESP = !ESP;
            color = Color::Magenta(255);
            break;
        case 206:
            ESPLine = !ESPLine;
            break;
        case 207:
            ESPBox = !ESPBox;
            break;
        case 208:
            ESPRGB = !ESPRGB;
            break;
        case 209:
            for(int sss = 0; sss < value; sss++){
                if (REDS == 255.0f){

                    if (BLUES == 0.0f){
                        if (GREENS == 255.0f){}
                        else{
                            GREENS = GREENS+1.0f;
                        }
                    }
                }
                if (GREENS == 255.0f){
                    if (REDS == 0.0f){} else{
                        REDS = REDS-1.0f;
                    }
                }
                if (GREENS == 255.0f) {
                    if (REDS == 0.0f) {
                        if (BLUES==255.0f){} else{
                            BLUES = BLUES+1.0f;
                        }
                    }
                }
                if(BLUES == 255.0f) {
                    if (GREENS == 0.0f) {
                        REDS = REDS+1.0f;
                    } else{
                        GREENS = GREENS-1.0f;
                    }
                }
            }

            color = Color(REDS,GREENS,BLUES);
            REDS = 255;
            GREENS = 0;
            BLUES = 0;
            break;
        case 210:
            upval = (float) (value * 0.1);
            break;
        case 211:
            upval2 = (float) (value * 0.1);
            break;
		case 229:
            ESPDistance = !ESPDistance;
            break;
        case 230:
            ESPDist = value;
            break;