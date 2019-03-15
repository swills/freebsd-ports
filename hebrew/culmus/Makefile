# Created by: Yonatan <onatan@gmail.com>
# $FreeBSD: head/hebrew/culmus/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	culmus
PORTVERSION=	0.131
PORTREVISION=	1
CATEGORIES=	hebrew
MASTER_SITES=	SF

MAINTAINER=	onatan@gmail.com
COMMENT=	Free Hebrew Type1 fonts

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=	fonts
NO_ARCH=	yes
NO_BUILD=	yes
SUB_FILES=	pkg-message

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} *.afm ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} *.otf ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} *.pfa ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} *.ttf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
