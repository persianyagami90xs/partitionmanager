/*************************************************************************
 *  Copyright (C) 2016 by Chantara Tith <tith.chantara@gmail.com>        *
 *                                                                       *
 *  This program is free software; you can redistribute it and/or        *
 *  modify it under the terms of the GNU General Public License as       *
 *  published by the Free Software Foundation; either version 3 of       *
 *  the License, or (at your option) any later version.                  *
 *                                                                       *
 *  This program is distributed in the hope that it will be useful,      *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of       *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the        *
 *  GNU General Public License for more details.                         *
 *                                                                       *
 *  You should have received a copy of the GNU General Public License    *
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.*
 *************************************************************************/

#if !defined(RESIZEVOLUMEGROUPDIALOG_H)

#define RESIZEVOLUMEGROUPDIALOG_H

#include <fs/lvm2_pv.h>

#include "gui/volumegroupdialog.h"

class Device;
class VolumeManagerDevice;

class ResizeVolumeGroupDialog : public VolumeGroupDialog
{
    Q_DISABLE_COPY(ResizeVolumeGroupDialog)

public:
    ResizeVolumeGroupDialog(QWidget* parent, VolumeManagerDevice *d, QVector<const Partition*>& partList);

protected:
    void accept() override;
    void setupDialog() override;
    void setupConstraints() override;

    VolumeManagerDevice* device() const {
        return m_Device;
    }

private:
    VolumeManagerDevice* m_Device;
};

#endif
