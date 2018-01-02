# Created by: Dmitri Goutnik <dg@syrec.org>
# $FreeBSD: head/x11/hhpc/Makefile 456690 2017-12-18 22:39:38Z yuri $

PORTNAME=	hhpc
DISTVERSIONPREFIX=	v
DISTVERSION=	0.3.1
CATEGORIES=	x11

MAINTAINER=	dg@syrec.org
COMMENT=	Small X11 utility to hide the mouse pointer when unused

LICENSE=	BSD3CLAUSE

USES=		gmake localbase pkgconfig
USE_XORG=	x11
USE_GITHUB=	yes
GH_ACCOUNT=	aktau
ALL_TARGET=	release

PLIST_FILES=	bin/hhpc

PORTDOCS=	README.md

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/hhpc ${STAGEDIR}${PREFIX}/bin/
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_MAN} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
