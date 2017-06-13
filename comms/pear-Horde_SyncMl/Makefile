# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/comms/pear-Horde_SyncMl/Makefile 412658 2016-04-07 07:24:32Z mm $

PORTNAME=	Horde_SyncMl
PORTVERSION=	2.0.7
CATEGORIES=	comms www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde API for processing SyncML requests

USES=	horde
USE_HORDE_RUN=	Horde_Date \
		Horde_Icalendar \
		Horde_Log \
		Horde_Support \
		Horde_Util \
		Horde_Xml_Wbxml \
		Horde_Translation \

# optional but we want it
USE_HORDE_RUN+= Horde_Auth \
		Horde_Core

.include <bsd.port.mk>
