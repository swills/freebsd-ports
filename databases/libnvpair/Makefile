# Created by: John Marino <marino@FreeBSD.org>
# $FreeBSD: head/databases/libnvpair/Makefile 422173 2016-09-15 01:29:41Z marino $

PORTNAME=	libnvpair
PORTVERSION=	2.0
CATEGORIES=	databases devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Illumos name-value pair library

LICENSE=	CDDL

ONLY_FOR_ARCHS=	amd64 i386

GH_ACCOUNT=	jrmarino
USE_GITHUB=	yes

USES=		uidfix
MAKE_ARGS=	LIBDIR=${PREFIX}/lib
PLIST_FILES=	include/libnvpair.h \
		include/nvpair.h \
		lib/libnvpair.a \
		lib/libnvpair.so \
		lib/libnvpair.so.3
USE_LDCONFIG=	yes

post-install:
	(cd ${WRKSRC} && ${INSTALL_DATA} libnvpair.h nvpair.h \
		${STAGEDIR}${PREFIX}/include/)

.include <bsd.port.mk>
