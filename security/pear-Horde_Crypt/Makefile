# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/security/pear-Horde_Crypt/Makefile 450171 2017-09-19 21:48:42Z mm $

PORTNAME=	Horde_Crypt
PORTVERSION=	2.7.10
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
