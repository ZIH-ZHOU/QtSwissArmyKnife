﻿/*******************************************************************************
* The file is encoding with utf-8 (with BOM)
*
* I write the comment with English, it's not because that I'm good at English,
* but for "installing B".
*
* Copyright (C) 2018-2018 wuhai persionnal. All rights reserved.
*******************************************************************************/
#ifdef _MSC_VER
#pragma execution_character_set("utf-8")
#endif

#include "SAKApplication.h"

#include <QDebug>

SAKApplication::SAKApplication(int argc, char **argv):
    QApplication(argc, argv)
{
    /// 注册表选项
    setOrganizationName(QString("Qter"));
    setOrganizationDomain(QString("IT"));
    setApplicationName(QString("QtSwissArmyKnife"));

    mpMainWindow = new MainWindow;
    mpMainWindow->show();
}

SAKApplication::~SAKApplication()
{

}
