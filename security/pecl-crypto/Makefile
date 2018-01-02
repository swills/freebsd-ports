# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/security/pecl-crypto/Makefile 456723 2017-12-19 15:17:07Z linimon $

PORTNAME=	crypto
PORTVERSION=	0.3.1
CATEGORIES=	security

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	Objective wrapper for OpenSSL Crypto Library

LICENSE=	PHP301

BROKEN_FreeBSD_12_aarch64=	fails to configure: C compiler cannot create executables
BROKEN_armv6=			fails to configure: C compiler cannot create executables
BROKEN_armv7=			fails to configure: C compiler cannot create executables
BROKEN_mips=			fails to configure: C compiler cannot create executables
BROKEN_mips64=			fails to configure: C compiler cannot create executables
BROKEN_powerpc64=		fails to configure: C compiler cannot create executables

USES=		php:pecl
CONFIGURE_ARGS=	--with-crypto
CFLAGS+=	-I${OPENSSLINC}
LDFLAGS+=	-L${OPENSSLLIB}

.include <bsd.port.mk>
