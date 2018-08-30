# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/x11-fonts/emojione-color-font-ttf/Makefile 477417 2018-08-17 09:55:25Z ehaupt $

PORTNAME=	emojione-color-font-ttf
PORTVERSION=	1.4
CATEGORIES=	x11-fonts
MASTER_SITES=	https://github.com/eosrei/emojione-color-font/releases/download/v${PORTVERSION}/
DISTNAME=	EmojiOneColor-SVGinOT-${PORTVERSION}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Color emoji font using EmojiOne Unicode 9.0

LICENSE=	CC-BY-4.0 MIT
LICENSE_COMB=	multi
LICENSE_FILE_CC-BY-4.0+=	${WRKSRC}/LICENSE-CC-BY.txt
LICENSE_FILE_MIT+=		${WRKSRC}/LICENSE-MIT.txt

USES=		fonts zip
NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	${FONTSDIR}/EmojiOneColor-SVGinOT.ttf

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}/
	${INSTALL_DATA} ${WRKSRC}/*.ttf ${STAGEDIR}${FONTSDIR}/

.include <bsd.port.mk>
