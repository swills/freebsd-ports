# Created by: Bob Bomar <bob@bomar.us>
# $FreeBSD: head/net-im/pork/Makefile 436247 2017-03-15 14:45:30Z mat $

PORTNAME=	pork
PORTVERSION=	0.99.8.1
CATEGORIES=	net-im
MASTER_SITES=	SF/ojnk/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Console-based AIM client

USES=		ncurses perl5 ssl
GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -e 's/^inline //' ${WRKSRC}/src/*.h

.include <bsd.port.mk>
