# Created by: Konstantinos Konstantinidis <kkonstan@daemon.gr>
# $FreeBSD: head/audio/wmsmixer/Makefile 406076 2016-01-13 22:19:52Z amdmi3 $

PORTNAME=	wmsmixer
PORTVERSION=	0.5.1
PORTREVISION=	1
CATEGORIES=	audio windowmaker
MASTER_SITES=	http://redundancy.redundancy.org/mirror/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Audio mixer for the WindowMaker dock

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		alias imake
USE_XORG=	xpm
MAKE_ARGS=	CC="${CXX}" CFLAGS="${CXXFLAGS}"

PLIST_FILES=	bin/wmsmixer
PORTDOCS=	README

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wmsmixer ${STAGEDIR}${PREFIX}/bin

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
