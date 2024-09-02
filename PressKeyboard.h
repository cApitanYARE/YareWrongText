#ifndef PRESSKEYBOARD_H
#define PRESSKEYBOARD_H

#include <QMap>
#include <QChar>


class Keyboard {
public:
    Keyboard();
    char mapChar(QChar key) const;

private:
    QMap<QChar, QChar PressKeyboard;
};

#endif // PRESSKEYBOARD_H
