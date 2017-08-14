# $FreeBSD: head/devel/lfcbase/Makefile 447824 2017-08-12 12:21:23Z pi $

PORTNAME=	lfcbase
PORTVERSION=	1.10.0
CATEGORIES=	devel
MASTER_SITES=	http://www.lemke-it.com/

MAINTAINER=	pi@FreeBSD.org
COMMENT=	Collection of basic c++ classes, used for databases/cego

LICENSE=	GPLv3

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES=		autoreconf libtool

post-patch:
	@${REINPLACE_CMD} 's|-O3||g' ${WRKSRC}/src/Makefile.in

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/liblfcbase.so.2

.include <bsd.port.mk>
