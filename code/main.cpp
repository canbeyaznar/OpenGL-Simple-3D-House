// Can Beyaznar - 161044038
// Computer Graphics HW-01

#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <windows.h>
#include <GL/glut.h>
#endif

void initialize_env()
{
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClearDepth(1.0f);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glShadeModel(GL_SMOOTH);
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
}

void draw_balkon_demirlik(){

    glBegin(GL_QUADS);
        glColor3f(0.5f, 0.5f, 0.5f);
        glVertex3f( 20.0f, 10.0f,  -20.0f);
        glVertex3f( 20.0f, 20.0f,  -20.0f);
        glVertex3f( 20.0f, 20.0f, -21.0f);
        glVertex3f( 20.0f, 10.0f, -21.0f);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(0.5f, 0.5f, 0.5f);
        glVertex3f( 20.0f, 10.0f,  -79.0f);
        glVertex3f( 20.0f, 20.0f,  -79.0f);
        glVertex3f( 20.0f, 20.0f, -80.0f);
        glVertex3f( 20.0f, 10.0f, -80.0f);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(0.5f, 0.5f, 0.5f);
        glVertex3f( 20.0f, 10.0f,  -20.0f);
        glVertex3f( 20.0f, 10.0f,  -80.0f);
        glVertex3f( 20.0f, 20.0f, -80.0f);
        glVertex3f( 20.0f, 20.0f, -20.0f);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(0.5f, 0.5f, 0.5f);
        glVertex3f( 19.0f, 10.0f,  -20.0f);
        glVertex3f( 19.0f, 10.0f,  -80.0f);
        glVertex3f( 19.0f, 20.0f, -80.0f);
        glVertex3f( 19.0f, 20.0f, -20.0f);
    glEnd();


    glBegin(GL_QUADS);
        glColor3f(0.5f, 0.5f, 0.5f);
        glVertex3f( 19.0f, 10.0f,  -20.0f);
        glVertex3f( 20.0f, 10.0f,  -20.0f);
        glVertex3f( 20.0f, 20.0f, -20.0f);
        glVertex3f( 19.0f, 20.0f, -20.0f);
    glEnd();


    glBegin(GL_QUADS);
        glColor3f(0.5f, 0.5f, 0.5f);
        glVertex3f( 19.0f, 10.0f,  -80.0f);
        glVertex3f( 20.0f, 10.0f,  -80.0f);
        glVertex3f( 20.0f, 20.0f, -80.0f);
        glVertex3f( 19.0f, 20.0f, -80.0f);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(0.3f, 0.7f, 1.0f);
        glVertex3f( 20.0f,  15.0f, -20.0f);
        glVertex3f(10.0f,  15.0f, -20.0f);
        glVertex3f(10.0f, 10.0f, -20.0f);
        glVertex3f( 20.0f, 10.0f, -20.0f);
    glEnd();


    glBegin(GL_QUADS);
        glColor3f(0.3f, 0.7f, 1.0f);
        glVertex3f( 20.0f,  15.0f, -80.0f);
        glVertex3f(10.0f,  15.0f, -80.0f);
        glVertex3f(10.0f, 10.0f, -80.0f);
        glVertex3f( 20.0f, 10.0f, -80.0f);
    glEnd();

}


void draw_ilk_kat(){
    // On Duvar
    glBegin(GL_QUADS);
        glColor3f(0.3f, 0.7f, 1.0f);
        glVertex3f( 10.0f,  10.0f, -20.0f);
        glVertex3f(-10.0f,  10.0f, -20.0f);
        glVertex3f(-10.0f, -10.0f, -20.0f);
        glVertex3f( 10.0f, -10.0f, -20.0f);
    glEnd();



    //Sag yan duvar
    glBegin(GL_QUADS);
        glColor3f(0.0, 0.80, 0.3);
        glVertex3f(10.0f,  10.0f,   -80.0f);
        glVertex3f(10.0f,  10.0f,  -20.0f);
        glVertex3f(10.0f, -10.0f,  -20.0f);
        glVertex3f(10.0f, -10.0f, -80.0f);
    glEnd();

     // Arka Duvar
    glBegin(GL_QUADS);
        glColor3f(0.3f, 0.7f, 1.0f);
        glVertex3f( 10.0f, -10.0f, -80.0f);
        glVertex3f(-10.0f, -10.0f, -80.0f);
        glVertex3f(-10.0f,  10.0f, -80.0f);
        glVertex3f( 10.0f,  10.0f, -80.0f);
    glEnd();

    //Sol yan duvar
    glBegin(GL_QUADS);
        glColor3f(0.45, 0.15, 0.32);
        glVertex3f(-10.0f,  10.0f,  -20.0f);
        glVertex3f(-10.0f,  10.0f, -80.0f);
        glVertex3f(-10.0f, -10.0f, -80.0f);
        glVertex3f(-10.0f, -10.0f,  -20.0f);
    glEnd();

    // Zemin
    glBegin(GL_QUADS);
        glColor3f(0.5f, 0.5f, 0.5f);
        glVertex3f( 10.0f, -10.0f,  -20.0f);
        glVertex3f(-10.0f, -10.0f,  -20.0f);
        glVertex3f(-10.0f, -10.0f, -80.0f);
        glVertex3f( 10.0f, -10.0f, -80.0f);
    glEnd();
}

void draw_kapi(){
    // Kapi
    glBegin(GL_QUADS);
        glColor3f(0.75f,0.58f,0.25f);
        glVertex3f( -3.0f,  1.5f, -19.9f);
        glVertex3f(3.0f,  1.5f, -19.9f);
        glVertex3f(3.0f, -9.9f, -19.9f);
        glVertex3f( -3.0f, -9.9f, -19.9f);
    glEnd();

    // Kapi Kolu

    glBegin(GL_QUADS);
        glColor3f(0.0f,0.0f,0.0f);
        glVertex3f( 1.5f,  -5.0f, -19.8f);
        glVertex3f(2.0f,  -5.0f, -19.8f);
        glVertex3f(2.0f, -4.0f, -19.8f);
        glVertex3f( 1.5f, -4.0f, -19.8f);
    glEnd();
}

void draw_pencere(){

    // Pencereler
    glBegin(GL_QUADS);

        // sag pencere 2.2
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f( 10.1f,  7.5f, -70.0f);
        glVertex3f(10.1f,  7.5f, -75.0f);
        glVertex3f(10.1f,  -2.5f, -75.0f);
        glVertex3f( 10.1f, -2.5f, -70.0f);

        // pencere kolu 2.2
        glColor3f(0.0f,0.0f,0.0f);
        glVertex3f( 10.2f,  2.5f, -74.6f);
        glVertex3f(10.2f,  2.5f, -74.8f);
        glVertex3f(10.2f,  1.5f, -74.8f);
        glVertex3f( 10.2f, 1.5f, -74.6f);

        // sag pencere ayrimi 2.2
        glColor3f(0.0, 0.0, 0.0);
        glVertex3f( 10.1f,  7.5f, -69.0f);
        glVertex3f(10.1f,  7.5f, -70.0f);
        glVertex3f(10.1f,  -2.5f, -70.0f);
        glVertex3f( 10.1f, -2.5f, -69.0f);

        // sag yan pencere 2.1
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f( 10.1f,  7.5f, -64.0f);
        glVertex3f(10.1f,  7.5f, -69.0f);
        glVertex3f(10.1f,  -2.5f, -69.0f);
        glVertex3f( 10.1f, -2.5f, -64.0f);

        // pencere kolu 2.1
        glColor3f(0.0f,0.0f,0.0f);
        glVertex3f( 10.2f,  2.5f, -64.2f);
        glVertex3f(10.2f,  2.5f, -64.4f);
        glVertex3f(10.2f,  1.5f, -64.4f);
        glVertex3f( 10.2f, 1.5f, -64.2f);

        // sag pencere iki 1.1
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f( 10.1f,  7.5f, -25.0f);
        glVertex3f(10.1f,  7.5f, -30.0f);
        glVertex3f(10.1f,  -2.5f, -30.0f);
        glVertex3f( 10.1f, -2.5f, -25.0f);

        // sag pencere ayrimi 2
        glColor3f(0.0, 0.0, 0.0);
        glVertex3f( 10.1f,  7.5f, -30.0f);
        glVertex3f(10.1f,  7.5f, -31.0f);
        glVertex3f(10.1f,  -2.5f, -31.0f);
        glVertex3f( 10.1f, -2.5f, -30.0f);

        // sag pencere iki 1.2
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f( 10.1f,  7.5f, -31.0f);
        glVertex3f(10.1f,  7.5f, -36.0f);
        glVertex3f(10.1f,  -2.5f, -36.0f);
        glVertex3f( 10.1f, -2.5f, -31.0f);


        // pencere kolu 1.2
        glColor3f(0.0f,0.0f,0.0f);
        glVertex3f( 10.2f,  2.5f, -35.6f);
        glVertex3f(10.2f,  2.5f, -35.8f);
        glVertex3f(10.2f,  1.5f, -35.8f);
        glVertex3f( 10.2f, 1.5f, -35.6f);

        // pencere kolu 1.1
        glColor3f(0.0f,0.0f,0.0f);
        glVertex3f( 10.2f,  2.5f, -25.2f);
        glVertex3f(10.2f,  2.5f, -25.4f);
        glVertex3f(10.2f,  1.5f, -25.4f);
        glVertex3f( 10.2f, 1.5f, -25.2f);

        // Sol Duvar pencere

        // Sol pencere 2.2
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f( -10.1f,  7.5f, -70.0f);
        glVertex3f(-10.1f,  7.5f, -75.0f);
        glVertex3f(-10.1f,  -2.5f, -75.0f);
        glVertex3f( -10.1f, -2.5f, -70.0f);

        // Sol pencere kolu 2.2
        glColor3f(0.0f,0.0f,0.0f);
        glVertex3f( -10.2f,  2.5f, -74.6f);
        glVertex3f(-10.2f,  2.5f, -74.8f);
        glVertex3f(-10.2f,  1.5f, -74.8f);
        glVertex3f( -10.2f, 1.5f, -74.6f);

        // Sol pencere ayrimi 2.2
        glColor3f(0.0, 0.0, 0.0);
        glVertex3f( -10.1f,  7.5f, -69.0f);
        glVertex3f(-10.1f,  7.5f, -70.0f);
        glVertex3f(-10.1f,  -2.5f, -70.0f);
        glVertex3f( -10.1f, -2.5f, -69.0f);

        // Sol yan pencere 2.1
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f( -10.1f,  7.5f, -64.0f);
        glVertex3f(-10.1f,  7.5f, -69.0f);
        glVertex3f(-10.1f,  -2.5f, -69.0f);
        glVertex3f( -10.1f, -2.5f, -64.0f);

        //Sol pencere kolu 2.1
        glColor3f(0.0f,0.0f,0.0f);
        glVertex3f( -10.2f,  2.5f, -64.2f);
        glVertex3f(-10.2f,  2.5f, -64.4f);
        glVertex3f(-10.2f,  1.5f, -64.4f);
        glVertex3f( -10.2f, 1.5f, -64.2f);

        // Sol pencere 2.2
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f( -10.1f,  7.5f, -30.0f);
        glVertex3f(-10.1f,  7.5f, -35.0f);
        glVertex3f(-10.1f,  -2.5f, -35.0f);
        glVertex3f( -10.1f, -2.5f, -30.0f);

        //Sol pencere kolu 2.2
        glColor3f(0.0f,0.0f,0.0f);
        glVertex3f( -10.2f,  2.5f, -34.6f);
        glVertex3f(-10.2f,  2.5f, -34.8f);
        glVertex3f(-10.2f,  1.5f, -34.8f);
        glVertex3f( -10.2f, 1.5f, -34.6f);

        // Sol pencere ayrimi 2.2
        glColor3f(0.0, 0.0, 0.0);
        glVertex3f( -10.1f,  7.5f, -29.0f);
        glVertex3f(-10.1f,  7.5f, -30.0f);
        glVertex3f(-10.1f,  -2.5f, -30.0f);
        glVertex3f( -10.1f, -2.5f, -29.0f);

        // Sol yan pencere 2.1
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f( -10.1f,  7.5f, -24.0f);
        glVertex3f(-10.1f,  7.5f, -29.0f);
        glVertex3f(-10.1f,  -2.5f, -29.0f);
        glVertex3f( -10.1f, -2.5f, -24.0f);

        // Sol pencere kolu 2.1
        glColor3f(0.0f,0.0f,0.0f);
        glVertex3f( -10.2f,  2.5f, -24.2f);
        glVertex3f(-10.2f,  2.5f, -24.4f);
        glVertex3f(-10.2f,  1.5f, -24.4f);
        glVertex3f( -10.2f, 1.5f, -24.2f);
        /*
        // Sol pencere
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f( -10.1f,  5.0f, -70.0f);
        glVertex3f(-10.1f,  5.0f, -75.0f);
        glVertex3f(-10.1f, 0.0f, -75.0f);
        glVertex3f( -10.1f, 0.0f, -70.0f);

        glColor3f(1.0, 0.0, 0.0);
        glVertex3f( -10.1f,  5.0f, -25.0f);
        glVertex3f(-10.1f,  5.0f, -30.0f);
        glVertex3f(-10.1f, 0.0f, -30.0f);
        glVertex3f( -10.1f, 0.0f, -25.0f);*/

    glEnd();
}

void draw_ust_kat(){

    // Ust kat

    // On Duvar
    glBegin(GL_QUADS);
        glColor3f(0.9f, 0.45f, 1.0f);
        glVertex3f( 10.0f,  30.0f, -20.0f);
        glVertex3f(-10.0f,  30.0f, -20.0f);
        glVertex3f(-10.0f, 10.0f, -20.0f);
        glVertex3f( 10.0f, 10.0f, -20.0f);
    glEnd();

    //Sag yan duvar
    glBegin(GL_QUADS);
        glColor3f(0.8, 0.2, 0.38);
        glVertex3f(10.0f,  30.0f,   -80.0f);
        glVertex3f(10.0f,  30.0f,  -20.0f);
        glVertex3f(10.0f, 10.0f,  -20.0f);
        glVertex3f(10.0f, 10.0f, -80.0f);
    glEnd();

     // Arka Duvar
    glBegin(GL_QUADS);
        glColor3f(0.3f, 0.7f, 1.0f);
        glVertex3f(-10.0f,  30.0f, -80.0f);
        glVertex3f( 10.0f,  30.0f, -80.0f);
        glVertex3f( 10.0f, 10.0f, -80.0f);
        glVertex3f(-10.0f, 10.0f, -80.0f);
    glEnd();

    //Sol yan duvar
    glBegin(GL_QUADS);
        glColor3f(0.45, 0.15, 0.32);
        glVertex3f(-10.0f,  30.0f,  -20.0f);
        glVertex3f(-10.0f,  30.0f, -80.0f);
        glVertex3f(-10.0f, 10.0f, -80.0f);
        glVertex3f(-10.0f, 10.0f,  -20.0f);
    glEnd();


    // Zemin
    glBegin(GL_QUADS);
        glColor3f(0.5f, 0.5f, 0.5f);
        glVertex3f( 10.0f, 10.0f,  -20.0f);
        glVertex3f(-10.0f, 10.0f,  -20.0f);
        glVertex3f(-10.0f, 10.0f, -80.0f);
        glVertex3f( 10.0f, 10.0f, -80.0f);
    glEnd();
}

void draw_balkon(){
    // Balkon

        // balkon zemin
        glBegin(GL_QUADS);
            glColor3f(0.8, 0.2, 0.38);
            glVertex3f(20.0f,  10.0f,   -80.0f);
            glVertex3f(20.0f,  10.0f,  -20.0f);
            glVertex3f(10.0f, 10.0f,  -20.0f);
            glVertex3f(10.0f, 10.0f, -80.0f);
        glEnd();


        glBegin(GL_QUADS);
        glColor3f(0.9f, 0.45f, 1.0f);
            glVertex3f( 20.0f,  12.0f, -20.0f);
            glVertex3f( 10.0f,  12.0f, -20.0f);
            glVertex3f( 10.0f, 10.0f, -20.0f);
            glVertex3f( 20.0f, 10.0f, -20.0f);
        glEnd();


        glBegin(GL_QUADS);
            glColor3f(0.3f, 0.7f, 1.0f);
            glVertex3f( 10.0f,  12.0f, -80.0f);
            glVertex3f( 20.0f,  12.0f, -80.0f);
            glVertex3f( 20.0f, 10.0f, -80.0f);
            glVertex3f( 10.0f, 10.0f, -80.0f);
        glEnd();


        glBegin(GL_QUADS);
            glColor3f(0.5f, 0.5f, 0.5f);
            glVertex3f( 20.0f, 12.0f,  -20.0f);
            glVertex3f( 10.0f, 12.0f,  -20.0f);
            glVertex3f( 10.0f, 12.0f, -80.0f);
            glVertex3f( 20.0f, 12.0f, -80.0f);
        glEnd();


        glBegin(GL_QUADS);
            glColor3f(0.5f, 0.5f, 0.5f);
            glVertex3f( 20.0f, 10.0f,  -20.0f);
            glVertex3f( 20.0f, 12.0f,  -20.0f);
            glVertex3f( 20.0f, 12.0f, -80.0f);
            glVertex3f( 20.0f, 10.0f, -80.0f);
        glEnd();


    draw_balkon_demirlik();
}
void draw_cati(){
    // CATI
    //On Cati
    glBegin(GL_TRIANGLES);
        glColor3f(0.68, 0.2, 0.13);
        glVertex3f(-10.0f, 30.0f,  -20.0f);
        glVertex3f( 0.0f, 38.0f,  -25.0f);
        glVertex3f( 10.0f, 30.0f,  -20.0f);
    glEnd();

    // sag yan cati
    glBegin(GL_QUADS);
        glColor3f(0.0, 0.128, 0.60);
        glVertex3f(10.0f, 30.0f,  -80.0f);
        glVertex3f(0.0f, 38.0f,  -75.0f);
        glVertex3f(0.0f, 38.0f, -25.0f);
        glVertex3f(10.0f, 30.0f, -20.0f);
    glEnd();

    // Sol Cati
    glBegin(GL_QUADS);
        glColor3f(0.0, 0.128, 0.60);
        glVertex3f(-10.0f, 30.0f,  -80.0f);
        glVertex3f( 0.0f, 38.0f,  -75.0f);
        glVertex3f(0.0f, 38.0f, -25.0f);
        glVertex3f(-10.0f, 30.0f, -20.0f);

    glEnd();


    //Arka cati
    glBegin(GL_TRIANGLES);
        glColor3f(0.68, 0.2, 0.13);
        glVertex3f(-10.0f, 30.0f,  -80.0f);
        glVertex3f( 0.0f, 38.0f,  -75.0f);
        glVertex3f(10.0f, 30.0f, -80.0f);
    glEnd();
}

void draw_baca(){
    // BACA
    glBegin(GL_QUADS);
        glColor3f(0.65, 0.35, 0.20);

        // Baca on
        glVertex3f(5.0f, 40.0f,  -64.0f);
        glVertex3f(8.0f, 40.0f,  -64.0f);
        glVertex3f(8.0f, 30.0f, -64.0f);
        glVertex3f(5.0f, 30.0f, -64.0f);

        //Baca arka
        glVertex3f(5.0f, 40.0f,  -67.0f);
        glVertex3f( 8.0f,40.0f,  -67.0f);
        glVertex3f(8.0f, 30.0f, -67.0f);
        glVertex3f(5.0f, 30.0f, -67.0f);

        // Baca Sag
        glVertex3f(8.0f, 40.0f,  -64.0f);
        glVertex3f( 8.0f, 40.0f,  -67.0f);
        glVertex3f(8.0f, 30.0f, -67.0f);
        glVertex3f(8.0f, 30.0f, -64.0f);

        // Baca Sol
        glVertex3f(5.0f, 40.0f,  -64.0f);
        glVertex3f( 5.0f, 40.0f,  -67.0f);
        glVertex3f(5.0f, 30.0f, -67.0f);
        glVertex3f(5.0f, 30.0f, -64.0f);

        //Baca Ust
        glVertex3f(5.0f, 40.0f,  -64.0f);
        glVertex3f( 8.0f, 40.0f,  -64.0f);
        glVertex3f(8.0f, 40.0f, -67.0f);
        glVertex3f(5.0f, 40.0f, -67.0f);
    glEnd();
}

void display_screen()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    draw_ilk_kat();
    draw_kapi();
    draw_pencere();
    draw_ust_kat();
    draw_balkon();
    draw_cati();
    draw_baca();

    glFlush ();
    glPopMatrix();
    glutSwapBuffers();
}
void reshape(int w, int h)
{
    if (h == 0)
        h = 1;
    GLfloat aspect = (GLfloat)w / (GLfloat)h;
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, aspect, 0.1f, 100.0f);
}
void get_user_input(unsigned char key, int x, int y)
{
    // Ileri hareket et
    if(key == 'w')
        glTranslatef(0.0, 0.0, 10.0);
    // Sola hareket et
    else if(key == 'a')
        glTranslatef(-10.0, 0.0, 0.0);
    // Geri hareket et
    else if(key == 's')
       glTranslatef(0.0, 0.0, -10.0);
    // Saga hareket et
    else if(key == 'd')
        glTranslatef(10.0, 0.0, 0.0);
    // Yukari hareket et
    else if(key == 'r')
        glTranslatef(0.0, -10.0, 0.0);
    // Asagi hareket et
    else if(key == 'f')
        glTranslatef(0.0, 10.0, 0.0);
    // Rotate
    //Sola don X eksen
    else if(key == 'y')
        glRotatef(10.0, 30.0, 0.0, 0.0);
    // Saga don X eksen
    else if(key == 'u')
        glRotatef(10.0, -30.0, 0.0, 0.0);
    // Sola don Y eksen
    else if(key == 'h')
        glRotatef(10.0, 0.0, 30.0, 0.0);
    // Saga don Y eksen
    else if(key == 'j')
        glRotatef(10.0, 0.0, -30.0, 0.0);
     // Sola don Z eksen
    else if(key == 'b')
        glRotatef(10.0, 0.0, 0.0, 30.0);
    // Saga don Z eksen
    else if(key == 'n')
        glRotatef(10.0, 0.0, 0.0, -30.0);
    // Buyut
    else if(key == '1')
        glScalef(2, 2,2);
    // Kucult
    else if(key == '2')
        glScalef(0.5, 0.5, 0.5);
    display_screen();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(1000, 500);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("161044038_HW1");
    glutDisplayFunc(display_screen);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(get_user_input);
    initialize_env();
    glutMainLoop();
    return 0;
}
