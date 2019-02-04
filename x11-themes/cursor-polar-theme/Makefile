# Created by: Shawn Bell <decept@gmail.com>
# $FreeBSD: head/x11-themes/cursor-polar-theme/Makefile 491917 2019-02-02 06:57:27Z tobik $

PORTNAME=	polar-theme
PORTVERSION=	1.4
PORTREVISION=	3
CATEGORIES=	x11-themes
MASTER_SITES=	http://www.kde-look.org/CONTENT/content-files/
PKGNAMEPREFIX=	cursor-
DISTNAME=	27913-PolarCursorThemes

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Polar is a smooth and simple cursor set

USES=	tar:bzip2

NO_BUILD=	yes
NO_WRKSUBDIR=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/polar/cursors
	${INSTALL_DATA} ${WRKSRC}/PolarCursorTheme/cursors/* \
		${STAGEDIR}${PREFIX}/share/icons/polar/cursors

	@${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/polarblue/cursors
	${INSTALL_DATA} ${WRKSRC}/PolarCursorTheme-Blue/cursors/* \
		${STAGEDIR}${PREFIX}/share/icons/polarblue/cursors

	@${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/polargreen/cursors
	${INSTALL_DATA} ${WRKSRC}/PolarCursorTheme-Green/cursors/* \
		${STAGEDIR}${PREFIX}/share/icons/polargreen/cursors

.include <bsd.port.mk>
