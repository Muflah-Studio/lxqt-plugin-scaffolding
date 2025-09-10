// Main plugin code
// SPDX-FileCopyrightText: 2025 <copyright holder> <email addr>
// SPDX-License-Identifier: GPL-2.0-or-later

#include "%{APPNAMELC}.h"
#include "%{APPNAMELC}button.h"

#include <QDebug>

%{APPNAMEID}::%{APPNAMEID}(const ILXQtPanelPluginStartupInfo &startupInfo)
    : QObject(), ILXQtPanelPlugin(startupInfo)
{
    // Create a simple label to display some text
    blabel = new %{APPNAMEID}Button(this);
    QString btext = QStringLiteral("Hello, Plugin!");
    blabel->setText(btext);

    settingsChanged();
}

%{APPNAMEID}::~%{APPNAMEID}() {
    delete blabel;
};


QWidget *%{APPNAMEID}::widget()
{
   return blabel;
}
