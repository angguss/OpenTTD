/* $Id$ */

/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file network_udp.h Sending and receiving UDP messages. */

#ifndef NETWORK_UDP_H
#define NETWORK_UDP_H

#ifdef ENABLE_NETWORK

#include "core/address.h"

void NetworkUDPInitialize();
void NetworkUDPSearchGame();
void NetworkUDPQueryMasterServer();
void NetworkUDPQueryServer(NetworkAddress address, bool manually = false);
void NetworkUDPAdvertise();
void NetworkUDPRemoveAdvertise(bool blocking);
void NetworkUDPClose();
void NetworkBackgroundUDPLoop();

#endif /* ENABLE_NETWORK */

#endif /* NETWORK_UDP_H */
