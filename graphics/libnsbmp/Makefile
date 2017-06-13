# Created by: Olivier Duchateau
# $FreeBSD: head/graphics/libnsbmp/Makefile 436494 2017-03-19 14:02:23Z rene $

PORTNAME=	libnsbmp
PORTVERSION=	0.1.4
CATEGORIES=	graphics
MASTER_SITES=	http://download.netsurf-browser.org/libs/releases/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	ports@FreeBSD.org
COMMENT=	NetSurf BMP decoder

LICENSE=	MIT

BUILD_DEPENDS=	netsurf-buildsystem>=1.5:devel/netsurf-buildsystem

USES=	gmake
USE_LDCONFIG=	yes

WRKSRC=	${WRKDIR}/${DISTNAME:S/-src//}

MAKE_ENV+=	COMPONENT_TYPE="lib-shared"

PLIST_SUB+=	VERSION=${PORTVERSION}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libnsbmp.so*

.include <bsd.port.mk>
