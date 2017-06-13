# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/devel/hexcompare/Makefile 441352 2017-05-20 22:59:15Z skreuzer $

PORTNAME=	hexcompare
PORTVERSION=	1.0.4
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}%20v${PORTVERSION}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Compare and identify differences between two binary files

LICENSE=	GPLv3

USES=		ncurses
PLIST_FILES=	bin/hexcompare

post-patch:
	@${REINPLACE_CMD} -e 's|gcc|${CC}|g' ${WRKSRC}/Makefile
	@${REINPLACE_CMD} -e 's|-lncurses|$$(CFLAGS) $$(LDFLAGS) -lncurses|' \
		${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
