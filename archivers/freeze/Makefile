# Created by: lukin@okbmei.msk.su
# $FreeBSD: head/archivers/freeze/Makefile 472207 2018-06-11 20:56:24Z feld $

PORTNAME=	freeze
PORTVERSION=	2.5
PORTREVISION=	2
CATEGORIES=	archivers
MASTER_SITES=	http://web.warwick.ac.uk/ftp/pub/compression/ \
		http://www.rebootking.de/distfiles/ \
		http://ngsoftwareltd.com/freebsd/distfiles/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Compression program - often used in QNX

LICENSE=	NONE

CONFLICTS_INSTALL=	mlt-[0-9]*
GNU_CONFIGURE=	yes
ALL_TARGET=	prog

MAKE_ARGS+=	CFLAGS="${CFLAGS} -I. -DCOMPAT" CC="${CC}"

PORTDOCS=	README

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
