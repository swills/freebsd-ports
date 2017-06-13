# Created by: Alexander Botero-Lowry <alex@foxybanana.com>
# $FreeBSD: head/audio/xmms2-scrobbler/Makefile 412463 2016-04-03 12:01:54Z amdmi3 $

PORTNAME=	xmms2-scrobbler
PORTVERSION=	0.4.0
PORTREVISION=	3
CATEGORIES=	audio
MASTER_SITES=	ftp://ftp.code-monkey.de/pub/${PORTNAME}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Last.fm submission client for XMMS2

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libxmmsclient.so:audio/xmms2 \
		libcurl.so:ftp/curl

USES=		gmake pkgconfig
LDFLAGS+=	-lpthread

PLIST_FILES=	bin/xmms2-scrobbler
PORTDOCS=	README

SUB_FILES=	pkg-message

OPTIONS_DEFINE=	DOCS

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/xmms2-scrobbler

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
