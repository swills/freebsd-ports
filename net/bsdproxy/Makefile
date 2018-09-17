# Created by: roam@FreeBSD.org
# $FreeBSD: head/net/bsdproxy/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	bsdproxy
PORTVERSION=	0.04
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	http://daveb.net/bsdproxy/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	TCP proxy, demonstrating use of the kevent(2)/kqueue(2) API

GNU_CONFIGURE=	yes
USE_GNOME=	glib12

PLIST_FILES=	bin/${PORTNAME}
PORTDOCS=	ChangeLog README

OPTIONS_DEFINE=	DOCS

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
