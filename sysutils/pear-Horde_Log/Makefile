# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/sysutils/pear-Horde_Log/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	Horde_Log
PORTVERSION=	2.3.0
CATEGORIES=	sysutils www pear
PKGNAMEPREFIX=	${PEAR_PKGNAMEPREFIX}

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Logging library

OPTIONS_DEFINE=	SCRIBE
SCRIBE_DESC=	Enable scribe support

USES=	horde
USE_HORDE_RUN=	Horde_Constraint \
		Horde_Exception

SCRIBE_USE=	HORDE=Horde_Scribe

.include <bsd.port.mk>
