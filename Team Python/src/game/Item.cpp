// Copyright (C) 2004 Team Python
//  
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software 
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

#include "Item.h"

Item::Item( ) {
    Object::Object( );
	m_objectType |= TYPE_ITEM;
    m_objectTypeId = 1;

}

void Item::Create( uint32 guidlow, uint32 itemid ) {
    Object::Create(guidlow);
	m_guid[0] = guidlow;
	m_guid[1] = 0x00000040;
    setUpdateValue(OBJECT_FIELD_ENTRY, itemid);
}
