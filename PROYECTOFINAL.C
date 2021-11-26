#include <graphics.h> // Encabezado con declaraciones de gráficos
#include <stdio.h>
#include <conio.h> // Para el uso de kbhit()
#include <stdlib.h> // Para el uso de random()
#include <dos.h> // Para el uso de delay
#include <bios.h>
#include <math.h>
#define PI 3.14159265
#define IZQ 0x4b00
#define DER 0x4d00
#define ESC 283
#define ENTER 0x1c0d
int band=0;

void margen(){ /* 640x480*/
	setcolor(11);
	line(0,0,0,getmaxy());
	line(0,0,getmaxx(),0);
	line(getmaxx(),0,getmaxx(),getmaxy());
	line(0,getmaxy(),getmaxx(),getmaxy());
}

void portada(){
	margen();
	setcolor(11);
	outtextxy(0,25,"         TECNOLOGICO DE ESTUDIOS SUPERIOR DEL ORIENTE DEL ESTADO DE MEXICO ");
	settextstyle(7,0,2);
	outtextxy(0,66,"Alumno: Miguel Vargas Axel Jacinto");
	outtextxy(0,120,"Profesor: Nava Hernandez Gerardo");
	outtextxy(0,180,"Materia: Graficacion");
	settextstyle(0,0,1);
	getch();
	cleardevice();
	margen();
	setcolor(11);
	settextstyle(7,0,2);
	outtextxy(220,25, "Introduccion");
	outtextxy(30,66,"Proyecto para reforzar y poner todas las practicas");
	outtextxy(30,90,"en un solo proyecto.");
	settextstyle(0,0,1);
	getch();
	cleardevice();
}

void salir(){
	margen();
	setcolor(11);
	settextstyle(10,0,1);
	outtextxy(30,25,"Muchas Gracias Bye n.n/");
	getch();
	closegraph();
}

void practica1(){
	setcolor(12);
	settextstyle(10,0,1);
	line(0,0,0,getmaxy());
	line(0,0,getmaxx(),0);
	line(getmaxx(),0,getmaxx(),getmaxy());
	line(0,getmaxy(),getmaxx(),getmaxy());
	outtextxy(220,25, "Introduccion");
	outtextxy(25,66,"Realizacion de Figuras Trigonometricas");
	settextstyle(0,0,1);
	getch();
	cleardevice();
	setcolor(GREEN);
	rectangle(50,30,600,300);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(51,31,GREEN);
	setcolor(GREEN);
	setfillstyle(SOLID_FILL,WHITE);
	circle(350,165,90);
	floodfill(351,166,GREEN);
	setcolor(12);
	circle(320,146,20);
	circle(370,146,20);
	setcolor(10);
	rectangle(310,175,390,190);
	getch();
	cleardevice();
}


void botones(int band){
    if(band == 0 ){
	margen();
	setcolor(11);
	setfillstyle(1,7);
	bar3d(50,50,180,80,10,1);
	setcolor(15);
	outtextxy(80,70,"Practica 1");
	setfillstyle(1,8);
	setcolor(11);
	bar3d(230,50,360,80,10,1);
	setcolor(11);
	outtextxy(270,70,"Practica 2");
	bar3d(430,50,580,80,10,1);
	setcolor(11);
	outtextxy(440,70,"Practica 3");
	bar3d(50,150,180,175,10,1);
	setcolor(11);
	outtextxy(80,165,"Practica 4");

	bar3d(230,150,360,175,10,1);
	setcolor(11);
	outtextxy(295,165,"Salir");

	setcolor(11);
	outtextxy(5,230,"         TECNOLOGICO DE ESTUDIOS SUPERIOR DEL ORIENTE DEL ESTADO DE MEXICO ");
	outtextxy(5,270,"Alumno: Miguel Vargas Axel Jacinto");
	outtextxy(5,300,"Profesor: Nava Hernandez Gerardo");
	outtextxy(5,330,"Materia: Graficacion");

    }
    if(band == 1){
	margen();
	setcolor(11);
	setfillstyle(1,7);
	bar3d(230,50,360,80,10,1);
	setcolor(15);
	outtextxy(270,70,"Practica 2");
	setfillstyle(1,8);
	setcolor(11);
	bar3d(50,50,180,80,10,1);
	setcolor(11);
	outtextxy(80,70,"Practica 1");
	bar3d(430,50,580,80,10,1);
	setcolor(11);
	outtextxy(440,70,"Practica 3");
	bar3d(50,150,180,175,10,1);
	setcolor(11);
	outtextxy(80,165,"Practica 4");

	bar3d(230,150,360,175,10,1);
	setcolor(11);
	outtextxy(295,165,"Salir");

	setcolor(11);
	outtextxy(5,230,"         TECNOLOGICO DE ESTUDIOS SUPERIOR DEL ORIENTE DEL ESTADO DE MEXICO ");
	outtextxy(5,270,"Alumno: Miguel Vargas Axel Jacinto");
	outtextxy(5,300,"Profesor: Nava Hernandez Gerardo");
	outtextxy(5,330,"Materia: Graficacion");

    }
    if(band == 2){
	margen();
	setcolor(11);
	setfillstyle(1,7);
	bar3d(430,50,580,80,10,1);
	setcolor(15);
	outtextxy(440,70,"Practica 3");
	setfillstyle(1,8);
	setcolor(11);
	bar3d(230,50,360,80,10,1);
	setcolor(11);
	outtextxy(270,70,"Practica 2");
	bar3d(50,50,180,80,10,1);
	setcolor(11);
	outtextxy(80,70,"Practica 1");
	bar3d(50,150,180,175,10,1);
	setcolor(11);
	outtextxy(80,165,"Practica 4");

	bar3d(230,150,360,175,10,1);
	setcolor(11);
	outtextxy(295,165,"Salir");

	setcolor(11);
	outtextxy(5,230,"         TECNOLOGICO DE ESTUDIOS SUPERIOR DEL ORIENTE DEL ESTADO DE MEXICO ");
	outtextxy(5,270,"Alumno: Miguel Vargas Axel Jacinto");
	outtextxy(5,300,"Profesor: Nava Hernandez Gerardo");
	outtextxy(5,330,"Materia: Graficacion");

    }

	if(band == 3){
	margen();	
	setcolor(11);
	setfillstyle(1,7);
	bar3d(50,150,180,175,10,1);
	setcolor(15);
	outtextxy(80,165,"Practica 4");
	setfillstyle(1,8);
	setcolor(11);
	bar3d(230,50,360,80,10,1);
	setcolor(11);
	outtextxy(270,70,"Practica 2");
	bar3d(50,50,180,80,10,1);
	setcolor(11);
	outtextxy(80,70,"Practica 1");
	bar3d(430,50,580,80,10,1);
	setcolor(11);
	outtextxy(440,70,"Practica 3");

	bar3d(230,150,360,175,10,1);
	setcolor(11);
	outtextxy(295,165,"Salir");

	setcolor(11);
	outtextxy(5,230,"         TECNOLOGICO DE ESTUDIOS SUPERIOR DEL ORIENTE DEL ESTADO DE MEXICO ");
	outtextxy(5,270,"Alumno: Miguel Vargas Axel Jacinto");
	outtextxy(5,300,"Profesor: Nava Hernandez Gerardo");
	outtextxy(5,330,"Materia: Graficacion");

    }


	if(band == 4){
	margen();	
	setcolor(11);
	setfillstyle(1,7);
	bar3d(230,150,360,175,10,1);
	setcolor(15);
	outtextxy(295,165,"Salir");
	setfillstyle(1,8);
	setcolor(11);
	bar3d(230,50,360,80,10,1);
	setcolor(11);
	outtextxy(270,70,"Practica 2");
	bar3d(50,50,180,80,10,1);
	setcolor(11);
	outtextxy(80,70,"Practica 1");
	bar3d(430,50,580,80,10,1);
	setcolor(11);
	outtextxy(440,70,"Practica 3");
	bar3d(50,150,180,175,10,1);
	setcolor(11);
	outtextxy(80,165,"Practica 4");

	setcolor(11);
	outtextxy(5,230,"         TECNOLOGICO DE ESTUDIOS SUPERIOR DEL ORIENTE DEL ESTADO DE MEXICO ");
	outtextxy(5,270,"Alumno: Miguel Vargas Axel Jacinto");
	outtextxy(5,300,"Profesor: Nava Hernandez Gerardo");
	outtextxy(5,330,"Materia: Graficacion");
    }	
}
void main(void)
{
int gdriver=VGA, gmode=VGAHI, errorcode;
int ancho,alto, colores, index,c,tecla,OP,x,y,a,b,letra;
float i,j;
/* inicializar modo gráfico y gestión de
errores */
initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
errorcode = graphresult();
if (errorcode != grOk)
    {
    printf("Error inicializando gráficos: %s\n",
    grapherrormsg(errorcode));
    printf("Pulse cualquier tecla para salir...");
    getch();
    exit(1);
    }	
portada();
botones(band);
do{
	/*
	¿Qué significa bioskey? Bios significa sistema básico de entrada y salida, que literalmente significa "basado en el sistema de entrada y salida".

	La función de la función bioskey () es: Utilice directamente la interfaz de teclado del servicio BIOS.Complete la operación directa del teclado, el valor de cmd determina el tipo de operación realizada

	El prototipo de la función bioskey () es: int bioskey (int cmd)　
	Nota: Se requiere el archivo de encabezado <bios.h> para su uso

	cmd:
	La palabra original: comando, que significa comando.
	cmd tiene tres valores: 0, 1 y 2.

	cmd = 0：
	efecto: Cuando cmd es 0, bioskey () devuelve el siguiente valor escrito en el teclado (esperará hasta que se presione una tecla).
	Introducción: Devuelve un número binario de 16 bits, incluidos dos valores diferentes. Cuando se presiona una tecla normal, los 8 dígitos inferiores almacenan el código ASCII del carácter, y los 8 dígitos superiores almacenan el código de escaneo de la tecla; para teclas especiales (como teclas de flecha, F1 ～ F12, etc.), el los 8 dígitos inferiores 0, el byte superior de 8 bits almacena el código de escaneo de la clave.

	cmd = 1：
	efecto: Detectar si se presiona una tecla
	resultado: No hay llave Vuelve a 0 cuando se presiona,Enchavetado Devuelve el código de tecla cuando se presiona (cualquier código de tecla no es 0),
	Pero en este momento, el código de tecla detectado no se borra de la cola del búfer del teclado.
	especial: Si no desea verificar las teclas de control individuales, puede presionar (Shift / Ctrl / CapsLock / Alt / ScrLock / PrtScr / NumLock / PauseBreak)

	cmd = 2：
	efecto: Cuando cmd es 2, bioskey () vuelve al estado de las teclas Shift, Ctrl, Alt, ScrollLock, NumLock, CapsLock e Insert.
	suplemento: El estado de cada clave se almacena en el byte bajo de 8 bits del valor de retorno.

	El tipo int en turbo c es de dos bytes, por lo que hay ocho bits bajos y ocho bits altos.
	
			*/
   	if(bioskey(1)){  /// la función (1) devuelve 0 hasta que se presione una tecla si se presiona alguna es true caso contrario false se queda a la espera
	inicio:	   
	tecla = bioskey(1); ///a la variable tecla almacena el valor de bioskey(1) de la tecla que se presione sin embargo solo almacena mas no hace la pausa de presionar una tecla eso lo hace el bioskey(0)
	bioskey(0); // Devuelve el siguiente valor escrito en el teclado -- esperar hasta que se presione una tecla de no colocar esto el menú entra en un bucle de repetición por almacenar un único valor 
	if(tecla == IZQ && band == 0) band = 4; ///validamos si la tecla presionada es la felcha izquierda y la variable band es igual a 0 entonces band 4 para mostrar el if 4 de la función botones
	else if(tecla == IZQ && band <=4 ) band--; //validamos si la tecla presionada es la felcha izquierda y band es menor o igual a 4 entonces decrementamos a band para mostrar el if 3,2,1,0 de la funcion botones
	if(tecla == DER && band == 4) band = 0; //validamos si la tecla presionada es la flecha derecha y si band es igual a 0 entonces mostramos el if 0 de la funcion botones 
	else if(tecla == DER && band >= 0 ) band++; // validamos si la tecla presionada es la felcha derecha y band es mayor o igual que cero incrementamos para mostrar los if 1,2,3,4 de la funcion botones
	botones(band); //repetimos la funcion botones 
    } OP = band; // almcenamos el valor de band en OP para crear las acciones correspondientes del menú en unos if para mostrar dicha practica correspondiente al boton 

}while(tecla != ENTER);  //el procesos se repite hasta que la tecla presionada en bisokey sea diferente de la tecla ENTER 


if(OP == 0){
	cleardevice();
	practica1();
	goto inicio;	
}else if(OP == 1 ){
	cleardevice();
	setcolor(12);
	line(0,0,0,getmaxy());
	line(0,0,getmaxx(),0);
	line(getmaxx(),0,getmaxx(),getmaxy());
	line(0,getmaxy(),getmaxx(),getmaxy());
	settextstyle(10,0,1);
	outtextxy(220,25, "Introduccion");
	outtextxy(25,66,"Pelota Rebotando");
	settextstyle(0,0,1);
	getch();
	cleardevice();
	x=10; y=10; a=0; b=0;
	for(x=10;x<=445;x++){
		circle(x,y,30);
		delay(10);
		cleardevice();
		y++;
	}
	a=x;
	b=y;
	for(;a<=650;a++){
		circle(a,b,30);
		delay(10);
		cleardevice();
		b--;
	}
	getch();
	cleardevice();
	goto inicio;
}else if(OP == 2){
	cleardevice();
	setcolor(12);
	line(0,0,0,getmaxy());
	line(0,0,getmaxx(),0);
	line(getmaxx(),0,getmaxx(),getmaxy());
	line(0,getmaxy(),getmaxx(),getmaxy());
	settextstyle(10,0,1);
	outtextxy(220,25, "Introduccion");
	outtextxy(25,66,"Grafica COS 2 X ");
	settextstyle(0,0,1);
	getch();
	cleardevice();
	line(320,0,320,480);
	line(0,240,640,240);
	x=0; y=0;
	for(i=0;i<=360;i++){
		y = 40*(cos(2*(i/180*PI)));
		putpixel(130 + i , y + 230, 3);
		delay(10);
	}
	for(j=0;j<=360;j++){
		y = 40*(pow((cos(j/180*PI)),2) - pow((sin(j/180*PI)),2));
		putpixel(130 + j , y + 230, 2);
		delay(10);
	}
	getch();
	cleardevice();
	goto inicio;
}else if(OP == 3){
	cleardevice();
	cleardevice();
	setcolor(11);
	line(0,0,0,getmaxy());
	line(0,0,getmaxx(),0);
	line(getmaxx(),0,getmaxx(),getmaxy());
	line(0,getmaxy(),getmaxx(),getmaxy());
	settextstyle(10,0,1);
	outtextxy(220,25, "Introduccion");
	outtextxy(25,66,"Tipos de letra ");
	getch();
	cleardevice();
	x=100;
	y=100;
	for (letra = 0; letra <= 10; letra++)
	{
	settextstyle(letra,0, 1);
	outtextxy(x, y, "Tipos de letra");
	y = y + 30;
	}
	settextstyle(0,0,1);
	getch();
	cleardevice();
	goto inicio;
}else if(OP == 4){
	cleardevice();
	salir();
}


 }
