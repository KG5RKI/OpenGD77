/*
 * Copyright (C)2019 Roger Clark. VK3KYY / G4KYF
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#ifndef _FW_HOTSPOT_H_
#define _FW_HOTSPOT_H_
#include "fw_main.h"
void hotspotRxFrameHandler(uint8_t* frameBuf);

enum {
		HOTSPOT_RX_IDLE,
		HOTSPOT_RX_START,
		HOTSPOT_RX_START_LATE,
		HOTSPOT_RX_AUDIO_FRAME,
		HOTSPOT_RX_STOP,
		HOTSPOT_RX_IDLE_OR_REPEAT,
		} ;
#endif
