/*
    This file is part of the KDE libraries
    SPDX-FileCopyrightText: 2006 Hamish Rodda <rodda@kde.org>

    SPDX-License-Identifier: LGPL-2.0-only
*/

#ifndef KTOOLBARSPACERACTION_H
#define KTOOLBARSPACERACTION_H

#include <QWidgetAction>
#include <QWidget>

#include <kwidgetsaddons_export.h>

/**
 * @class KToolBarSpacerAction ktoolbarspaceraction.h KToolBarSpacerAction
 *
 * An extension to QAction which allows for adding a spacer item into a
 * QToolBar / KToolBar.
 *
 * This is useful if you want to align at the right (or left if RTL) and
 * need something that pushes the element to the end of the tool bar.
 *
 * @author Hamish Rodda <rodda@kde.org>
 */
class KWIDGETSADDONS_EXPORT KToolBarSpacerAction : public QWidgetAction
{
    Q_OBJECT

public:
    /**
     * Creates a new toolbar spacer action.
     *
     * @param parent The action's parent object.
     */
    explicit KToolBarSpacerAction(QObject *parent);

    ~KToolBarSpacerAction() override;

    /**
     * Reimplemented from QWidgetAction.
     */
    QWidget *createWidget(QWidget *parent) override;

private:
    class Private;
    Private *const d;
};

#endif
