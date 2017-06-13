# $FreeBSD: head/x11-fonts/jmk-x11-fonts/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	jmk-x11-fonts
PORTVERSION=	3.0
PORTREVISION=	5
CATEGORIES=	x11-fonts
MASTER_SITES=	http://www.jmknoble.net/fonts/

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Jim Knoble's font package for X

BUILD_DEPENDS=	bdftopcf:x11-fonts/bdftopcf \
		mkfontdir:x11-fonts/mkfontdir

USES=		fonts imake

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.pcf.gz ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
