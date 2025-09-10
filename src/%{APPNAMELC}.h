// Main plugin header
// SPDX-FileCopyrightText: 2025 <copyright holder> <email addr>
// SPDX-License-Identifier: GPL-2.0-or-later

#ifndef %{APPNAMEUC}_H
#define %{APPNAMEUC}_H

#include <lxqt/ilxqtpanelplugin.h>
#include "%{APPNAMELC}button.h"
#include <QWidget>

class %{APPNAMEID} : public QObject, public ILXQtPanelPlugin
{
    Q_OBJECT
public:
    %{APPNAMEID}(const ILXQtPanelPluginStartupInfo &startupInfo);
    virtual QWidget *widget();
    virtual QString themeId() const { return QStringLiteral("%{APPNAMELC}"); }
    virtual ILXQtPanelPlugin::Flags flags() const { return PreferRightAlignment ; }
    ~%{APPNAMEID}();

private:
    %{APPNAMEID}Button *blabel;
};

// Important part
class %{APPNAMEID}PluginLibrary: public QObject, public ILXQtPanelPluginLibrary
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "lxqt.org/Panel/PluginInterface/3.0")
    Q_INTERFACES(ILXQtPanelPluginLibrary)

public:
    ILXQtPanelPlugin *instance(const ILXQtPanelPluginStartupInfo &startupInfo) const
    {
        return new %{APPNAMEID}(startupInfo);
    }
};

#endif // %{APPNAMEUC}_H
