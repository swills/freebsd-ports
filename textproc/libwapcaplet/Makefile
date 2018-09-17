# Created by: Olivier Duchateau
# $FreeBSD: head/textproc/libwapcaplet/Makefile 479319 2018-09-09 16:59:57Z sunpoet $

PORTNAME=	libwapcaplet
PORTVERSION=	0.4.1
CATEGORIES=	textproc
MASTER_SITES=	http://download.netsurf-browser.org/libs/releases/
EXTRACT_SUFX=	-src.tar.gz

MAINTAINER=	neel@neelc.org
COMMENT=	String internment library

LICENSE=	MIT

BUILD_DEPENDS=	netsurf-buildsystem>=1.5:devel/netsurf-buildsystem \
		${LOCALBASE}/bin/flex:textproc/flex

USES=		gmake
USE_LDCONFIG=	yes

MAKE_ENV=	COMPONENT_TYPE="lib-shared" \
		FLEX="${LOCALBASE}/bin/flex"

PLIST_SUB=	VERSION=${PORTVERSION}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libwapcaplet.so

.include <bsd.port.mk>
