/***
JobGen Plus, (C)Unitech America Inc.

job: C:\Documents and Settings\Mauricio\Escritorio\Desarrollo PISANO\Pisano.jgp

target: HT-630


*/

#include <jcntl.h>
#include <defn.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>
#include <rcd.h>
#include <lookup.h>
#include <fcntl.h>
#include <fio.h>
#include <ctype.h>


struct CtrlCenter ccnt;




/*** all data */

int _Legajo =0;


/*** all global programs */


#line - 

#line 1 "#1.88.17 program node, Buscar"


#include "string.h"
#include "stdio.h"
#include "stdlib.h" 
#include "io.h"
#include "defn.h"


FILE *stream;
char linea[88]="";
char Nota[20]="";
char Pos[20]="";
char Det[40]="";
char Cod[5]="";
char Cant[4]="";
char lejo[2];
char letra[4]="FIN";
int Numero;
int opcion=0;
char strbuff[1000];
char RECDLT[5];


int _Buscar()

{
Numero=_Legajo;
sprintf(lejo, "%d", Numero);

stream = fopen( "Rutas.txt", "r" );

   if( stream == NULL )
   printf("\nError de apertura del archivo. \n\n");

   else

   while (feof(stream)==0) 

       {
 
fgets(linea,88,stream);
    
strcpy(Nota,letra);
strcpy(Pos,letra);
strcpy(Det,letra);
strcpy(Cod,letra);
strcpy(Cant,letra);


                      strget(Nota,0,linea ,0,19);
                      strget(Pos,0,linea,20,19);
                      strget(Det,0,linea,40,39);     
                      strget(Cod,0,linea,80,4);               
                      strget(Cant,0,linea,84,3);


if (Cod=="FIN")
 printf("****VALIDACIONES****");
else
                    
                     // printf("****VALIDACIONES****");
//printf(_get_date("%D,%M,%Y"));
                      printf("\n%s",Nota);
                      printf("\n%s", Pos);  
                      printf("\n%s", Det);
                      printf("\n%s", Cod);  
                      printf("\nCANT: %s", Cant);     
                      //printf("\n");       
                      printf("\nOPCION (1=SI)(2=NO)");
                      printf("\nESC=SALTEAR        ");       


 opcion=_getc();
// printf("OPCION:%d ", opcion);      
 if (opcion==49)
{

FILE *stream;

// Grabo los datos 

 stream=fopen("Validar.txt","a");
 _strnset(strbuff,'\0',100);
 strcat(strbuff,"SI");
 strcat(strbuff," ");
 strcat(strbuff,Nota);
 strcat(strbuff,"");
 strcat(strbuff,Pos);
 strcat(strbuff,"");
 strcat(strbuff,Det);
 strcat(strbuff,"");
 strcat(strbuff,Cod);
 strcat(strbuff,"");
 strcat(strbuff,Cant); 
 strcat(strbuff," ");
 strcat(strbuff,lejo);
// strcat(strbuff,"");
 strcat(strbuff,(_get_date("%D,%M,%Y")));
// strcat(strbuff,"");
 strcat(strbuff,(_get_time("%H,%M,%S")));
 strcat(strbuff,"\r\n");

 strcat(strbuff,RECDLT);
 fputs(strbuff,stream);

 fclose(stream);

//_getc();
// _clear_screen (  );
//  printf("GRABO DATOS POR EL SI");     
 }

if (opcion==50)
{

FILE *stream;


// Grabo los datos 

 stream=fopen("Validar.txt","a");
 _strnset(strbuff,'\0',100);
 strcat(strbuff,"NO");
 strcat(strbuff," ");
 strcat(strbuff,Nota);
 strcat(strbuff,"");
 strcat(strbuff,Pos);
 strcat(strbuff,"");
 strcat(strbuff,Det);
 strcat(strbuff,"");
 strcat(strbuff,Cod);
 strcat(strbuff,"");
 strcat(strbuff,Cant);
 strcat(strbuff," ");
 strcat(strbuff,lejo); 
// strcat(strbuff,"");
 strcat(strbuff,(_get_date("  %D,%M,%Y")));
// strcat(strbuff,"");
 strcat(strbuff,(_get_time("  %H,%M,%S")));
 strcat(strbuff,"\r\n");

 strcat(strbuff,RECDLT);
 fputs(strbuff,stream);

 fclose(stream);
}

 if (opcion==-124)
{

}
     


                 _clear_screen (  );

fgets(linea,88,stream);

        }   
//fgets(linea,68,stream);
            if  (feof(stream) != 0)
                      printf("\n");
                      printf("\n********************");
                      printf("\n***FIN DE ARCHIVO***");
                      printf("\n********************");
                      printf("\n");
                      printf("\nESC=SALIR");
 _getc();

     fclose(stream);    
 return 3;
   }


#line - 



/*** all expressions */

int __GetExpression(int jid)
{int _RESULT_ = 0;

#line - 

return _RESULT_;
}




/*** all control data */

struct CtrlData __cdata[] = {
40003, "\x00",
40002, "\x00",
36061, "\x84",
36049, "\x84",
36037, "\x84",
36013, "\x31",
40001, "\x4D\x45\x4E\x55\x09\x01\x01\x42\x75\x73\x63\x61\x72\x09\x58"
"\x01\x53\x41\x4C\x49\x52\x09\x5F\x01\x4C\x65\x67\x61\x6A\x6F"
"\x09\x69\x01\x00",
9262, "\x01\x04\x12\x03\x00\x02\x00\x00\x04\x0B\x5F\x21\x00\x01\x00"
"\x00\x03\x09\x01\x00\x2C\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00"
"\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00",
9269, "\x03\x09\x05\x01\x08\x0D\x01\x05\x06\x01\x13\x0D\x14\x05\x02\x01\x11\x0D\x12\x0D\x00",
9261, "\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A"
"\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x20\x50\x49\x4E\x54\x55\x52"
"\x45\x52\x49\x41\x53\x20\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x20\x20"
"\x20\x20\x50\x49\x53\x41\x4E\x4F\x20\x20\x20\x2A\x2A\x2A\x2A"
"\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A"
"\x2A\x2A\x2A\x2A\x2A\x4E\xBA\x20\x4C\x65\x67\x61\x6A\x6F\x3A"
"\x20\x0A\x0A\x45\x4E\x54\x3D\x53\x49\x47\x55\x49\x45\x4E\x54"
"\x45\x0A\x45\x53\x43\x3D\x53\x41\x4C\x49\x52\x00",
9263, (char*)&_Legajo,
5142, "\x00\x00\x03\x00",
5141, "\x00",
25057, (char*)&_Buscar,
4014, "\x04\x00\x02\x00",
4013, "\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A"
"\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x20\x50\x49\x4E\x54\x55\x52"
"\x45\x52\x49\x41\x53\x20\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x20\x20"
"\x20\x20\x50\x49\x53\x41\x4E\x4F\x20\x20\x20\x2A\x2A\x2A\x2A"
"\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A\x2A"
"\x2A\x2A\x2A\x2A\x2A\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x0A\x31\x2D\x56\x41\x4C"
"\x49\x44\x41\x52\x20\x50\x52\x4F\x44\x55\x43\x54\x4F\x53\x20"
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
"\x20\x20\x20\x20\x0A\x45\x53\x43\x3D\x53\x41\x4C\x49\x52\x00",
44002, "\x00",
44001, "\x37\x34\x31\x08\x00\x86\x0D\x00\x38\x35\x32\x30\x11\x13\x87"
"\x00\x39\x36\x33\x2E\x10\x12\x88\x00\x00\x00\x00\x84\x20\x80"
"\x89\x00\x53\x4A\x41\x08\x00\x86\x0D\x00\x56\x4D\x44\x40\x11"
"\x13\x87\x00\x59\x50\x47\x3B\x10\x12\x88\x00\x00\x00\x00\x84"
"\x20\x80\x89\x00\x54\x4B\x42\x08\x00\x86\x0D\x00\x57\x4E\x45"
"\x3F\x11\x13\x87\x00\x5A\x51\x48\x2E\x10\x12\x88\x00\x00\x00"
"\x00\x84\x20\x80\x89\x00\x55\x4C\x43\x08\x00\x86\x0D\x00\x58"
"\x4F\x46\x26\x11\x13\x87\x00\x5F\x52\x49\x2C\x10\x12\x88\x00"
"\x00\x00\x00\x84\x20\x80\x89\x00\x2D\x3A\x23\x5C\x84\x8A\x0D"
"\x00\x2B\x3D\x24\x27\x11\x92\x8B\x00\x2A\x2F\x25\x21\x10\x93"
"\x8C\x00\x00\x00\x00\x84\x20\x80\x8D\x00",
44003, "\x00",
0,0
};

struct CtrlCenter ccnt = {
"HT-630",
"C:\\Documents and Settings\\Mauricio\\Escritorio\\Desarrollo PISANO\\Pisano.jgp",
"",
1,
4,
108,
6,
"\x01\x01\x58\x06\x5F\x01\x69\x02\x00",
"\x00",
"\x01\x01\x69\x09\x08\x00\x02\x58\x01\x09\x01\x00\x03\x01\x5F"
"\x00\x08\x00\x04\x58\x01\x09\x08\x00\x05\x69\x01\x00\x08\x00"
"\x06\x69\x58\x00\x01\x00\x00",
1,
1,
1,
2,
20,
8,
20,
8,
16,
4,
1,
2,
0,
"\x53\x61\x6C\x69\x72\x20\x28\x31\x2D\x53\x2F\x30\x2D\x4E\x29"
"\x3F\x00",
"\x4C\x69\x73\x74\x6F\x00",
"\x41\x62\x6F\x72\x74\x61\x72\x00",
"\x52\x65\x76\x69\x73\x61\x72\x00",
"\x44\x61\x74\x6F\x00",
"\x45\x64\x69\x74\x61\x72\x00",
"\x45\x6E\x63\x6F\x6E\x74\x72\x61\x64\x6F\x00",
"\x4D\x6F\x64\x69\x66\x69\x63\x61\x72\x3F\x00",
"\x4E\x6F\x20\x68\x61\x79\x20\x44\x61\x74\x6F\x73\x00",
"\x4E\x6F\x20\x65\x6E\x63\x6F\x6E\x74\x72\x61\x64\x6F\x00",
"\x42\x75\x73\x63\x61\x72\x00",
"\x53\x69\x67\x75\x69\x65\x6E\x74\x65\x3F\x00",
"\x45\x73\x70\x65\x72\x65\x2E\x2E\x2E\x00",
"\x42\x6F\x72\x72\x61\x72\x20\x74\x6F\x64\x6F\x3F\x00",
"\x42\x6F\x72\x72\x61\x20\x55\x6C\x74\x69\x6D\x6F\x3F\x00",
"\x45\x6E\x76\x69\x61\x72\x00",
"\x4E\x6F\x20\x68\x61\x79\x20\x52\x65\x67\x69\x73\x74\x72\x6F"
"\x00",
"\x54\x6F\x74\x61\x6C\x00",
"\x4E\x6F\x20\x68\x61\x79\x20\x41\x72\x63\x68\x69\x76\x6F\x21"
"\x00",
"\x45\x72\x72\x6F\x72\x20\x61\x6C\x20\x41\x62\x72\x69\x72\x21"
"\x00",
"\x45\x72\x72\x6F\x72\x20\x64\x65\x20\x4C\x65\x63\x74\x75\x72"
"\x61\x21\x00",
"\x45\x72\x72\x6F\x72\x20\x64\x65\x20\x45\x73\x63\x72\x69\x74"
"\x75\x72\x61\x21\x00",
"\x45\x72\x72\x6F\x72\x20\x61\x6C\x20\x45\x73\x63\x72\x69\x62"
"\x69\x72\x21\x00",

(void*)__cdata,
(void*)__GetExpression,

15036
};

int _jobinit() {return (int)&ccnt;}

