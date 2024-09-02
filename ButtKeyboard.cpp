#include "ButtKeyboard.h"
#include <QMap>
#include <QString>

#include <QApplication>
#include <QInputMethod>

QString transliterateToUkrainian(const QString& input) {

    QMap<QString, QString> mapKayboard;


    QInputMethod *inputMethod = QApplication::inputMethod();
    QString locale = inputMethod->locale().name();

    if (locale.startsWith("en")) {

        // lowerCase english
        mapKayboard.insert("q","й");
        mapKayboard.insert("w","ц");
        mapKayboard.insert("e","у");
        mapKayboard.insert("r","к");
        mapKayboard.insert("t","е");
        mapKayboard.insert("y","н");
        mapKayboard.insert("u","г");
        mapKayboard.insert("i","ш");
        mapKayboard.insert("o","щ");
        mapKayboard.insert("p","з");
        mapKayboard.insert("[","х");
        mapKayboard.insert("]","ї");
        mapKayboard.insert("a","ф");
        mapKayboard.insert("s","і");
        mapKayboard.insert("d","в");
        mapKayboard.insert("f","а");
        mapKayboard.insert("g","п");
        mapKayboard.insert("h","р");
        mapKayboard.insert("j","о");
        mapKayboard.insert("k","л");
        mapKayboard.insert("l","д");
        mapKayboard.insert(";","ж");
        mapKayboard.insert("'","є");
        mapKayboard.insert("z","я");
        mapKayboard.insert("x","ч");
        mapKayboard.insert("c","с");
        mapKayboard.insert("v","м");
        mapKayboard.insert("b","и");
        mapKayboard.insert("n","т");
        mapKayboard.insert("m","ь");
        mapKayboard.insert(",","б");
        mapKayboard.insert(".","ю");
        mapKayboard.insert("/",".");

        // upperCase english
        mapKayboard.insert("Q","Й");
        mapKayboard.insert("W","Ц");
        mapKayboard.insert("E","У");
        mapKayboard.insert("R","К");
        mapKayboard.insert("T","Е");
        mapKayboard.insert("Y","Н");
        mapKayboard.insert("U","Г");
        mapKayboard.insert("I","Ш");
        mapKayboard.insert("O","Щ");
        mapKayboard.insert("P","З");
        mapKayboard.insert("{","Х");
        mapKayboard.insert("}","Ї");
        mapKayboard.insert("A","Ф");
        mapKayboard.insert("S","І");
        mapKayboard.insert("D","В");
        mapKayboard.insert("F","А");
        mapKayboard.insert("G","П");
        mapKayboard.insert("H","Р");
        mapKayboard.insert("J","О");
        mapKayboard.insert("K","Л");
        mapKayboard.insert("L","Д");
        mapKayboard.insert(":","Ж");
        mapKayboard.insert("\"","Є");
        mapKayboard.insert("Z","Я");
        mapKayboard.insert("X","Ч");
        mapKayboard.insert("C","С");
        mapKayboard.insert("V","М");
        mapKayboard.insert("B","И");
        mapKayboard.insert("N","Т");
        mapKayboard.insert("M","Ь");
        mapKayboard.insert("<","Б");
        mapKayboard.insert(">","Ю");
        mapKayboard.insert("?",",");
    }else if(locale.startsWith("uk")){

        // lowerCase ukrainian
        mapKayboard.insert("й","q");
        mapKayboard.insert("ц","w");
        mapKayboard.insert("у","e");
        mapKayboard.insert("к","r");
        mapKayboard.insert("е","t");
        mapKayboard.insert("н","y");
        mapKayboard.insert("г","u");
        mapKayboard.insert("ш","i");
        mapKayboard.insert("щ","o");
        mapKayboard.insert("з","p");
        mapKayboard.insert("х","[");
        mapKayboard.insert("ї","]");
        mapKayboard.insert("ф","a");
        mapKayboard.insert("і","s");
        mapKayboard.insert("в","d");
        mapKayboard.insert("а","f");
        mapKayboard.insert("п","g");
        mapKayboard.insert("р","h");
        mapKayboard.insert("о","j");
        mapKayboard.insert("л","k");
        mapKayboard.insert("д","l");
        mapKayboard.insert("ж",";");
        mapKayboard.insert("є","'");
        mapKayboard.insert("я","z");
        mapKayboard.insert("ч","x");
        mapKayboard.insert("с","c");
        mapKayboard.insert("м","v");
        mapKayboard.insert("и","b");
        mapKayboard.insert("т","n");
        mapKayboard.insert("ь","m");
        mapKayboard.insert("б",",");
        mapKayboard.insert("ю",".");
        mapKayboard.insert(".","/");

        // upperCase ukrainian
        mapKayboard.insert("Й","Q");
        mapKayboard.insert("Ц","W");
        mapKayboard.insert("У","E");
        mapKayboard.insert("К","R");
        mapKayboard.insert("Е","T");
        mapKayboard.insert("Н","Y");
        mapKayboard.insert("Г","U");
        mapKayboard.insert("Ш","I");
        mapKayboard.insert("Щ","O");
        mapKayboard.insert("З","P");
        mapKayboard.insert("Х","{");
        mapKayboard.insert("Ї","}");
        mapKayboard.insert("Ф","A");
        mapKayboard.insert("І","S");
        mapKayboard.insert("В","D");
        mapKayboard.insert("А","F");
        mapKayboard.insert("П","G");
        mapKayboard.insert("Р","H");
        mapKayboard.insert("О","J");
        mapKayboard.insert("Л","K");
        mapKayboard.insert("Д","L");
        mapKayboard.insert("Ж",":");
        mapKayboard.insert("Є","\"");
        mapKayboard.insert("Я","Z");
        mapKayboard.insert("Ч","X");
        mapKayboard.insert("С","C");
        mapKayboard.insert("М","V");
        mapKayboard.insert("И","B");
        mapKayboard.insert("Т","N");
        mapKayboard.insert("Ь","M");
        mapKayboard.insert("Б","<");
        mapKayboard.insert("Ю",">");
        mapKayboard.insert(",","?");
    }







    QString output;

    for (QChar ch : input) {
        if (mapKayboard.contains(ch)) {
            output.append(mapKayboard[ch]);
        } else {
            output.append(ch);
        }
    }
    return output;

}
