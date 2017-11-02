# Created by: Olivier Duchateau
# $FreeBSD: head/textproc/libutf8proc/Makefile 453002 2017-10-27 15:46:21Z vanilla $

PORTNAME=	libutf8proc
PORTVERSION=	1.3.1.3
DISTVERSIONSUFFIX=	-3-src
CATEGORIES=	textproc
MASTER_SITES=	http://download.netsurf-browser.org/libs/releases/
DISTNAME=	${PORTNAME}-${PORTVERSION:S/.3$//}${DISTVERSIONSUFFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	UTF8 Processing library

LICENSE=	MIT

BUILD_DEPENDS=	netsurf-buildsystem>=1.5:devel/netsurf-buildsystem

USES=		gmake
USE_LDCONFIG=	yes
WRKSRC=		${WRKDIR}/${DISTNAME:S/-src//}
MAKE_ENV+=	COMPONENT_TYPE="lib-shared"
PLIST_SUB+=	VERSION=${PORTVERSION:S/.3$//}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libutf8proc.so*

.include <bsd.port.mk>
