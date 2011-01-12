/*!
 * \file 	common.h
 * \brief 	SCCP Common Include File
 * \author 	Diederik de Groot <dkgroot [at] talon.nl>
 * \note	This file is automatically generated by configure
 * \note 	Do not change this file. Change will be lost when running configure
 */

#ifndef CHAN_SCCP_COMMON_H
#    define CHAN_SCCP_COMMON_H

#    include <sys/signal.h>
#    include <sys/types.h>
#    include <sys/socket.h>
#    include <netinet/in.h>
#    include <netinet/in_systm.h>
#    include <netinet/ip.h>
#    include <netinet/tcp.h>
#    include <string.h>
#    include <stdio.h>
#    include <stdlib.h>
#    include <errno.h>
#    include <assert.h>

#if ASTERISK_VERSION_NUM >= 10400
#    include <asterisk.h>
#    include <asterisk/abstract_jb.h>
#endif
#include <asterisk/pbx.h>
#include <asterisk/lock.h>
#include <asterisk/channel.h>
#include <asterisk/utils.h>
#include <asterisk/app.h>
#include <asterisk/causes.h>
#include <asterisk/callerid.h>
#include <asterisk/musiconhold.h>
#ifdef CS_AST_HAS_NEW_DEVICESTATE
#    include <asterisk/devicestate.h>
#endif
#ifdef CS_SCCP_PICKUP
#    include <asterisk/features.h>
#endif
#ifdef CS_DEVSTATE_FEATURE
#    include <asterisk/astdb.h>
#endif
#ifdef CS_AST_HAS_EVENT
#    include <asterisk/event.h>
#endif
#ifndef CS_AST_HAS_TECH_PVT
#    include <asterisk/channel_pvt.h>
#endif
#ifdef CS_AST_HAS_NEW_DEVICESTATE
#    include <asterisk/devicestate.h>
#endif
#ifdef AST_EVENT_IE_CIDNAME
#    include <asterisk/event.h>
#    include <asterisk/event_defs.h>
#endif
#ifdef CS_DYNAMIC_CONFIG
#    include <asterisk/acl.h>
#    include <asterisk/frame.h>
#    include <asterisk/config.h>
#endif
#ifdef CS_AST_HAS_AST_STRING_FIELD
#    include <asterisk/stringfields.h>
#endif
#ifdef CS_MANAGER_EVENTS
#    include <asterisk/manager.h>
#endif

#    include "sccp_lock.h"
#    include "sccp_dllists.h"
#    include "sccp_event.h"
#    include "sccp_pbx_wrapper.h"

#    include "sccp_socket.h"
#    include "sccp_pbx.h"
#    include "sccp_protocol.h"
#    include "sccp_device.h"
#    include "sccp_line.h"
#    include "sccp_channel.h"
#    include "sccp_features.h"
#    include "sccp_utils.h"
#    include "sccp_indicate.h"
#    include "sccp_hint.h"
#    include "sccp_actions.h"
#    include "sccp_featureButton.h"
#    include "sccp_mwi.h"
#    include "sccp_config.h"
#    include "sccp_conference.h"
#    include "sccp_labels.h"
#    include "sccp_softkeys.h"
#    include "sccp_conference.h"
#    include "sccp_features.h"
#    include "sccp_adv_features.h"
#    include "sccp_cli.h"
#    include "sccp_management.h"

#endif										// CHAN_SCCP_COMMON_H
