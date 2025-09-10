// <one line to give the program's name and a brief idea of what it does.>
// SPDX-FileCopyrightText: 2025 <copyright holder> <email>
// SPDX-License-Identifier: GPL-2.0-or-later

#ifndef %{APPNAMEUC}BUTTON_H
#define %{APPNAMEUC}BUTTON_H

#include <QToolButton>

class ILXQtPanelPlugin;

class %{APPNAMEID}Button : public QToolButton
{
    Q_OBJECT

public:
    %{APPNAMEID}Button(ILXQtPanelPlugin *plugin, QWidget* parent = nullptr);
    ~%{APPNAMEID}Button();

private:
    ILXQtPanelPlugin *mPlugin;
};

#endif // %{APPNAMEUC}BUTTON_H
