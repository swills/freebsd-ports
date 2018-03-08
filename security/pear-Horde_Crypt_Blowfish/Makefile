# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/security/pear-Horde_Crypt_Blowfish/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	Horde_Crypt_Blowfish
PORTVERSION=	1.1.2
CATEGORIES=	security www pear
PKGNAMEPREFIX=	${PEAR_PKGNAMEPREFIX}

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde blowfish encryption for PHP string data

USE_HORDE_RUN=	Horde_Exception \
		Horde_Support

OPTIONS_DEFINE=	MHASH OPENSSL
MHASH_DESC=	Depend on mhash PHP extension
OPENSSL_DESC=	Depend on OpenSSL PHP extension

USES=	horde
MHASH_USE=	PHP=hash
OPENSSL_USE=	PHP=openssl

.include <bsd.port.mk>
