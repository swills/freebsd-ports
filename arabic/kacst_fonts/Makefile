# Created by: Samy Al Bahra <samy@kerneled.com>
# $FreeBSD: head/arabic/kacst_fonts/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	kacst_fonts
PORTVERSION=	2.01
PORTREVISION=	3
CATEGORIES=	arabic
MASTER_SITES=	SF/arabeyes/${PORTNAME} \
		http://www.c-s.li/ports/
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Truetype Arabic fonts created by KACST

LICENSE=	GPLv2

USES=		fonts tar:bzip2
WRKSRC=		${WRKDIR}/KacstArabicFonts-${PORTVERSION}
NO_BUILD=	yes

SUB_FILES=	pkg-message

do-install:
	@${MKDIR} ${STAGEDIR}/${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.ttf ${STAGEDIR}/${FONTSDIR}

.include <bsd.port.mk>
