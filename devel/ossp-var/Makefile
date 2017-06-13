# Created by: Alan Eldridge <alane@geeksrus.net>
# $FreeBSD: head/devel/ossp-var/Makefile 434587 2017-02-22 15:02:18Z bapt $

PORTNAME=	var
PORTVERSION=	1.1.3
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	OSSP/lib/${PORTNAME}
PKGNAMEPREFIX=	ossp-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Flexible, full-featured, and fast variable expansion library

USES=		libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

check:	build
	@(cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} check)

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libvar.so

.include <bsd.port.mk>
