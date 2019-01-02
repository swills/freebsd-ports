# Created by: Mikhail Teterin <mi@aldan.algebra.com>
# $FreeBSD: head/devel/jech-dht/Makefile 488494 2018-12-27 00:07:25Z swills $

PORTNAME=	dht
PORTVERSION=	0.25
CATEGORIES=	devel
MASTER_SITES=	http://www.pps.univ-paris-diderot.fr/~jch/software/files/

MAINTAINER=	mi@aldan.algebra.com
COMMENT=	Mainline variant of Kademlia Distributed Hash Table (DHT)

LICENSE=	MIT

MAKEFILE=	${FILESDIR}/BSDmakefile
USE_LDCONFIG=	yes
USES=	uidfix
MAKE_ENV+=	STAGEDIR="${STAGEDIR}"

post-build:
	${SETENV} ${MAKE_ENV} ${MAKE} -C ${WRKSRC} -f \
		${FILESDIR}/Makefile.example
post-install:
	${SETENV} ${MAKE_ENV} ${MAKE} -C ${WRKSRC} -f \
		${FILESDIR}/Makefile.example install

pre-su-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/include/dht

.include <bsd.port.mk>
