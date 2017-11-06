# $FreeBSD: head/devel/lfcbase/Makefile 453310 2017-11-01 17:42:34Z pi $

PORTNAME=	lfcbase
PORTVERSION=	1.10.2
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
