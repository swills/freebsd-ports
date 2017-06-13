# Created by: Alan Eldridge <alane@geeksrus.net>
# $FreeBSD: head/devel/ossp-val/Makefile 434587 2017-02-22 15:02:18Z bapt $

PORTNAME=	val
PORTVERSION=	0.9.4
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	OSSP/lib/${PORTNAME}
PKGNAMEPREFIX=	ossp-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Flexible name to value mapping library for C variables

LIB_DEPENDS=	libex.so:devel/ossp-ex

USES=		libtool
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-ex=${LOCALBASE}

check:	build
	@(cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} check)

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libval.so

.include <bsd.port.mk>
