# Created by: Olivier Duchateau
# $FreeBSD: head/devel/libnsutils/Makefile 436494 2017-03-19 14:02:23Z rene $

PORTNAME=	libnsutils
PORTVERSION=	0.0.3
CATEGORIES=	devel
MASTER_SITES=	http://download.netsurf-browser.org/libs/releases/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	ports@FreeBSD.org
COMMENT=	NetSurf generalised utility library

LICENSE=	MIT

BUILD_DEPENDS=	netsurf-buildsystem>=1.5:devel/netsurf-buildsystem

USES=	gmake
USE_LDCONFIG=	yes

MAKE_ENV+=	COMPONENT_TYPE="lib-shared"

WRKSRC=	${WRKDIR}/${DISTNAME:S/-src//}

PLIST_SUB+=	VERSION=${PORTVERSION}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libnsutils.so*

.include <bsd.port.mk>
