/*
    SPDX-FileCopyrightText: 2010 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.net>
    SPDX-FileContributor: Stephen Kelly <stephen@kdab.com>

    SPDX-License-Identifier: LGPL-2.0-or-later
*/

#ifndef KVIEWSTATEMAINTAINERBASE_H
#define KVIEWSTATEMAINTAINERBASE_H

#include "kwidgetsaddons_export.h"

#include <QObject>

class QItemSelectionModel;
class QAbstractItemView;

class KViewStateMaintainerBasePrivate;

class KWIDGETSADDONS_EXPORT KViewStateMaintainerBase : public QObject
{
    Q_OBJECT
public:
    KViewStateMaintainerBase(QObject *parent = nullptr);
    ~KViewStateMaintainerBase();

    void setSelectionModel(QItemSelectionModel *selectionModel);
    QItemSelectionModel *selectionModel() const;

    void setView(QAbstractItemView *view);
    QAbstractItemView *view() const;

    virtual void saveState() = 0;
    virtual void restoreState() = 0;

private:
    Q_DECLARE_PRIVATE(KViewStateMaintainerBase)
    KViewStateMaintainerBasePrivate *const d_ptr;

    Q_PRIVATE_SLOT(d_func(), void _k_modelAboutToBeReset())
    Q_PRIVATE_SLOT(d_func(), void _k_modelReset())
};

#endif
