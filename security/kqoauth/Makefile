# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: head/security/kqoauth/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kqoauth
PORTVERSION=	0.98
CATEGORIES=	security

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Implementation of OAuth 1.0 in C++ for Qt

LICENSE=	LGPL21

USES=		pkgconfig qmake qt:4
USE_QT=		corelib network gui moc_build qtestlib_build
USE_LDCONFIG=	yes
MAKE_JOBS_UNSAFE=yes
QMAKE_SOURCE_PATH=	${PORTNAME}.pro

USE_GITHUB=	yes
GH_ACCOUNT=	kypeli
GH_PROJECT=	kQOAuth

pre-configure:
	${REINPLACE_CMD} -e 's|$${target.path}/pkgconfig|$${INSTALL_PREFIX}/libdata/pkgconfig|g' \
		${WRKSRC}/src/src.pro

.include <bsd.port.mk>
