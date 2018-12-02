# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/x11-fonts/twemoji-color-font-ttf/Makefile 486261 2018-11-30 19:51:49Z ehaupt $

PORTNAME=	twemoji-color-font-ttf
PORTVERSION=	11.2.0
CATEGORIES=	x11-fonts
MASTER_SITES=	https://github.com/eosrei/twemoji-color-font/releases/download/v${PORTVERSION}/
DISTNAME=	TwitterColorEmoji-SVGinOT-Linux-${PORTVERSION}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Color emoji font using Twitter Unicode 10

LICENSE=	CC-BY-4.0 MIT
LICENSE_COMB=	multi
LICENSE_FILE_CC-BY-4.0=		${WRKSRC}/LICENSE-CC-BY.txt
LICENSE_FILE_MIT=		${WRKSRC}/LICENSE-MIT.txt

USES=		fonts

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	${FONTSDIR}/TwitterColorEmoji-SVGinOT.ttf

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}/
	${INSTALL_DATA} ${WRKSRC}/*.ttf ${STAGEDIR}${FONTSDIR}/

.include <bsd.port.mk>
