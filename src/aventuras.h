#ifndef AVENTURAS_H
#define AVENTURAS_H
//incluimos ifndef para evitar errores de compilacion por repeticion
#include "estructuras.h"
//INCLUIMOS EL ARCHIVO ESTRUCTURAS.H
Aventura nombreaventura = { //declaramos el nombre de la aventura a la que vamos a añadirle datos
    "nombre",//nombre de la aventura como en la estructura pide
    {
//situación 1 (nivel 1)
        { "SITUACION.", 
//decisión y consecuencia
          { {"DECISION", "CONSECUENCIA."}, 
//decisión y consecuencia
            {"DECISION", "CONSECUENCIA."}, 
//decisión y consecuencia
            {"DECISION", "CONSECUENCIA."}
          },
//premio obtenido y opcion que te da ese premio
          "PREMIO", 1 }}}; 
//llave que finaliza la estructura del mundo nerysia SIEMPRE ACABA EN PUNTO Y COMA
// agregamos las aventuras siguientes

Aventura infernum = {
};
Aventura thornia = {//declaramos el la aventura a la que vamos a añadirle datos
    "thornia (El mundo olvidado)",//nombre de la aventura como en la estructura pide
    {
//situación 1 (nivel 1)
        { "Despiertas en unas ruinas cubiertas de niebla y una estatua emite un sonido.", 
//decisión y consecuencia
          { {"Tocar la estatua", "Te paralisas unos segundos y pierdes tiempo."}, 
//decisión y consecuencia
            {"Tocar simbolo en forma de triangulo en la pared", "Aparece portal de luz ante ti."}, 
//decisión y consecuencia
            {"Caminar hacia la niebla", "Escuchas unos murmuros y te alejas."}
          },
//premio obtenido y opcion que te da ese premio
          "Escudo abismal", 2 },
//repetimos la estructura para los niveles siguientes
//todo esto es un ejemplo
        { "Sales de la cueva por el portal y encuentras una torre que susurra tus pensamientos sin sesar.",
          { {"Te quedas en silencio.", "No logras soportar la voz de tus pensamientos y pierdes cordura."},
            {"Subes a la cima de la torre.", "No encuentras nada y regresas."},
            {"Investigas debajo de la torre acercandote a los susurros", "Encuentras entrada subterrania y un cofre."}
          },
          "", 3 },
        { "       .",
          { {"      ", "      ."},
            {"      ", "     ."},
            {"     ", "       ."}//todo lo de espacio trabajare
          },
          "   ", 3 },
        { " .",
          { {"   ", "."},
            {" ", " ."},
            {"   ", "  ."}
          },
          "    ", 3 },
        { "Continuara.",
          { {"Pelea o algo", "sigilo."},
            {"atributos", "ganas un arma ."},
            {"Escapar con un artefacto robado", "Obtienes una maldicion."}
          },
          "maldicion", 0 }// no le pongan atencion al ultimo lo puse por poner falta plantear
    }
};
#endif