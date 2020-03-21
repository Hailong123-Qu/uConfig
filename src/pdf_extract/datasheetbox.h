/**
 ** This file is part of the uConfig project.
 ** Copyright 2018 Robotips sebastien.caux@robotips.fr.
 **
 ** This program is free software: you can redistribute it and/or modify
 ** it under the terms of the GNU General Public License as published by
 ** the Free Software Foundation, either version 3 of the License, or
 ** (at your option) any later version.
 **
 ** This program is distributed in the hope that it will be useful,
 ** but WITHOUT ANY WARRANTY; without even the implied warranty of
 ** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 ** GNU General Public License for more details.
 **
 ** You should have received a copy of the GNU General Public License
 ** along with this program. If not, see <http://www.gnu.org/licenses/>.
 **/

#ifndef DATASHEETBOX_H
#define DATASHEETBOX_H

#include "pdf_extract_common.h"

#include <QRectF>
#include <QString>

namespace Poppler
{
class TextBox;
}

class DATASHEET_EXTRACTOR_EXPORT DatasheetBox
{
public:
    DatasheetBox();
    DatasheetBox(const Poppler::TextBox &textBox);
    ~DatasheetBox();

    qreal distanceToPoint(const QPointF &center) const;

    QString text;
    QRectF pos;
    int page;
    bool associated;

    static bool isAlign(const DatasheetBox &label, const DatasheetBox &number);

    static int created;
    static int deleted;
};

#endif // DATASHEETBOX_H
