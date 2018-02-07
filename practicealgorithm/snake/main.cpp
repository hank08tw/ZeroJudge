#include <glut/glut.h>
#include <iostream>
//#include <fstream>
#include "game.h"
using namespace std;
#define ROWS 40.0
#define COLUMNS 40.0

/*
std::ofstream ofile;
std::ifstream ifile;
 */
bool game_over=false;
extern int direction;
int score=0;

void init();
void display_callback();
void input_callback(int,int,int);
void reshape_callback(int,int);
void timer_callback(int);

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowPosition(20,20);
    glutInitWindowSize(1000,1000);
    glutCreateWindow("snake game (written by chanshihhan)");
    glutDisplayFunc(display_callback);
    glutReshapeFunc(reshape_callback);
    glutSpecialFunc(input_callback);
    glutTimerFunc(100,timer_callback,0);
    init();
    glutMainLoop();
    return 0;
}

void init()
{
    glClearColor(1.0,1.0,1.0,1.0);
    initGrid(COLUMNS,ROWS);
}

//Callbacks
void display_callback()
{
    if(game_over==GL_TRUE)
    {
        /*
        ofile.open("score.dat",std::ios::trunc);
        ofile<<score<<std::endl;
        ofile.close();
        ifile.open("score.dat",std::ios::in);
        char a[4];
        ifile>>a;
        std::cout<<a;
        char text[50]= "Your score : ";
        strcat(text,a);
        //MessageBox(NULL,text,"Game Over",0);
         */
        cout << "you won " << score << " score(s), gameover!" << endl;
        exit(87);
    }
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    draw_grid();
    draw_food();
    draw_snake();
    glutSwapBuffers();
}
void reshape_callback(int w, int h)
{
    glViewport(0,0,(GLfloat)w,GLfloat(h));
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,COLUMNS,0.0,ROWS,-1.0,1.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
void timer_callback(int)
{
    glutPostRedisplay();
    glutTimerFunc(100,timer_callback,0);
}
void input_callback(int key,int x,int y)
{
    switch(key)
    {
        case GLUT_KEY_UP:
            if(direction!=DOWN)
                direction=UP;
            break;
        case GLUT_KEY_DOWN:
            if(direction!=UP)
                direction=DOWN;
            break;
        case GLUT_KEY_RIGHT:
            if(direction!=LEFT)
                direction=RIGHT;
            break;
        case GLUT_KEY_LEFT:
            if(direction!=RIGHT)
                direction=LEFT;
            break;
    }
}