﻿/*******************************************************************************
* The file is encoding with utf-8 (with BOM)
*
* I write the comment with English, it's not because that I'm good at English,
* but for "installing B".
*
* Copyright (C) 2018-2018 wuhai persionnal. All rights reserved.
*******************************************************************************/
#ifndef CONSOLE_H
#define CONSOLE_H

#include <QWidget>

namespace Ui{
class Console;
}

class Console : public QWidget
{
    Q_OBJECT
public:
    Console(QWidget *parent = Q_NULLPTR);
    ~Console();
    /// -----------------------------------------
    void OutputInfo(QString info);
    static Console *_console;
private:
    Ui::Console *ui;
};

Console *appConsole();

#endif  // CONSOLE_H