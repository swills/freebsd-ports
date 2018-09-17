# Created by: Kirill Ponomarew <ponomarew@oberon.net>
# $FreeBSD: head/net-mgmt/iftop/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	iftop
DISTVERSION=	1.0pre4
CATEGORIES=	net-mgmt
MASTER_SITES=	http://www.ex-parrot.com/~pdw/iftop/download/

MAINTAINER=	vd@FreeBSD.org
COMMENT=	Display bandwidth usage on an interface by host

LICENSE=	GPLv2

USES=		ncurses
GNU_CONFIGURE=	yes

PORTDOCS=	README
PLIST_FILES=	sbin/iftop man/man8/iftop.8.gz

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.8 ${STAGEDIR}${MANPREFIX}/man/man8
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
