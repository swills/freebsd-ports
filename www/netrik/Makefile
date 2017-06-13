# Created by: Alan Eldridge <alane@FreeBSD.org>
# $FreeBSD: head/www/netrik/Makefile 426372 2016-11-19 13:58:58Z marino $

PORTNAME=	netrik
PORTVERSION=	1.16.1
CATEGORIES=	www
MASTER_SITES=	SF/${PORTNAME}/stable/${PORTVERSION}%20%28beta%29

MAINTAINER=	ale@FreeBSD.org
COMMENT=	Text web browser, ambitious, in active development

RUN_DEPENDS=	wget:ftp/wget

USES=		gmake ncurses
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/netrik \
		man/man1/netrik.1.gz \
		man/man5/netrikrc.5.gz

PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} "s|^CFLAGS =|CFLAGS?=|" ${WRKSRC}/Makefile.in
	@${REINPLACE_CMD} "s/#include <ncursesw\//#include </" \
		${WRKSRC}/*.c

.include <bsd.port.mk>
