# Created by: Olivier Duchateau
# $FreeBSD: head/dns/libnspsl/Makefile 480504 2018-09-23 12:53:06Z sunpoet $

PORTNAME=	libnspsl
PORTVERSION=	0.1.3
CATEGORIES=	dns
MASTER_SITES=	http://download.netsurf-browser.org/libs/releases/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	neel@neelc.org
COMMENT=	NetSurf public suffix list handling

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	netsurf-buildsystem>=1.5:devel/netsurf-buildsystem

USES=		gmake
USE_LDCONFIG=	yes
MAKE_ENV+=	COMPONENT_TYPE="lib-shared"
WRKSRC=		${WRKDIR}/${DISTNAME:S/-src//}
PLIST_SUB+=	VERSION=${PORTVERSION}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libnspsl.so*

.include <bsd.port.mk>
