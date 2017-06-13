# Created by: Manuel Giraud <manuel.giraud@gmail.com>
# $FreeBSD: head/devel/pcl/Makefile 434587 2017-02-22 15:02:18Z bapt $

PORTNAME=	pcl
PORTVERSION=	1.6
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://www.xmailserver.org/

MAINTAINER=	manuel.giraud@gmail.com
COMMENT=	Portable Coroutine Library

USES=		libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

WRKSRC=		${WRKDIR}/lib${PORTNAME}-${PORTVERSION}

post-patch:	# required at least on sparc64
	@${REINPLACE_CMD} -e '/<ucontext/ { x ; \
		s,.*,#include <inttypes.h>, ; G ; }' ${WRKSRC}/pcl/pcl.c

.include <bsd.port.mk>
