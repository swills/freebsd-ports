# Created by: Lowell Gilbert <lgfbsd@be-well.ilk.org>
# $FreeBSD: head/x11-fonts/isabella/Makefile 463704 2018-03-06 09:33:06Z amdmi3 $

PORTNAME=	isabella-ttf
PORTVERSION=	1.202
PORTREVISION=	2
CATEGORIES=	x11-fonts
MASTER_SITES=	http://www.thibault.org/fonts/isabella/
DISTNAME=	Isabella-${PORTVERSION}-ttf

MAINTAINER=	lgfbsd@be-well.ilk.org
COMMENT=	Font by John Stracke based on the Isabella Breviary

LICENSE=	OFL11 LGPL20
LICENSE_COMB=	dual
LICENSE_FILE_OFL11=	${WRKSRC}/OFL.txt
LICENSE_FILE_LGPL20=	${WRKSRC}/COPYING.LIB

USES=		fonts
NO_BUILD=	yes
NO_ARCH=	yes
WRKSRC=		${WRKDIR}/Isabella

OPTIONS_DEFINE=	DOCS

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.ttf ${STAGEDIR}${FONTSDIR}

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.txt ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
