# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/sysutils/pear-Horde_Log/Makefile 435605 2017-03-07 14:22:52Z mm $

PORTNAME=	Horde_Log
PORTVERSION=	2.3.0
CATEGORIES=	sysutils www pear
PKGNAMEPREFIX=	pear-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Logging library

OPTIONS_DEFINE=	SCRIBE
SCRIBE_DESC=	Enable scribe support

USES=	horde
USE_HORDE_RUN=	Horde_Constraint \
		Horde_Exception

SCRIBE_USE=	HORDE=Horde_Scribe

.include <bsd.port.mk>
