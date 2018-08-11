# Created by: Yuri Pankov <yuri.pankov@gmail.com>
# $FreeBSD$

PORTNAME=	libunibreak
PORTVERSION=	4.0
CATEGORIES=	textproc

MAINTAINER=	ndowens@yahoo.com
COMMENT=	Implementation of the line and word breaking algorithm for Unicode

LICENSE=	ZLIB
LICENSE_FILE=	${WRKSRC}/LICENCE

USES=		autoreconf libtool pathfix
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	adah1972
GH_TAGNAME=	23aa741

post-configure:
	cd ${WRKSRC}/src && ${PATCH} -p1 < ${FILESDIR}/patch_src_Makefile

.include <bsd.port.mk>
