# Created by: Chris D. Faulhaber <jedgar@fxp.org>
# $FreeBSD: head/graphics/png2html/Makefile 418829 2016-07-20 09:33:31Z dinoex $

PORTNAME=	png2html
PORTVERSION=	1.1
PORTREVISION=	11
CATEGORIES=	graphics
MASTER_SITES=	http://www.engr.mun.ca/~holden/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Takes a PNG image and transforms it into HTML

LICENSE=	GPLv2+

LIB_DEPENDS=	libpng.so:graphics/png \
		libgd.so:graphics/gd

PLIST_FILES=	bin/png2html

post-patch:
	@${REINPLACE_CMD} 's|CHANGE_ME|${LOCALBASE}|g' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/png2html ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
