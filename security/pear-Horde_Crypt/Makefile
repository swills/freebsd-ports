# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/security/pear-Horde_Crypt/Makefile 455798 2017-12-08 20:21:01Z joneum $

PORTNAME=	Horde_Crypt
DISTVERSION=	2.7.11
CATEGORIES=	security www pear
PKGNAMEPREFIX=	pear-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Cryptography API

OPTIONS_DEFINE=	BCMATH
BCMATH_DESC=	Depend on bcmath PHP extension

USES=	horde
USE_HORDE_RUN=	Horde_Exception \
		Horde_Mime \
		Horde_Stream_Filter \
		Horde_Translation \
		Horde_Util
USE_PHP=	hash openssl

BCMATH_USE=	PHP=bcmath

.include <bsd.port.mk>
