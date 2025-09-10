// <one line to give the program's name and a brief idea of what it does.>
// SPDX-FileCopyrightText: 2025 <copyright holder> <email>
// SPDX-License-Identifier: GPL-2.0-or-later

#include "%{APPNAMELC}button.h"
#include "lxqt/ilxqtpanelplugin.h"

%{APPNAMEID}Button::%{APPNAMEID}Button(ILXQtPanelPlugin *plugin, QWidget *parent) :
    QToolButton(parent),
    mPlugin(plugin)
{
    //qDebug() << "Added....";
    update();
}

%{APPNAMEID}Button::~%{APPNAMEID}Button() {};

