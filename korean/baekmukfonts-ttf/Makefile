# Created by: Junho CHOI <junho.choi@gmail.com>
# $FreeBSD: head/korean/baekmukfonts-ttf/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	baekmukfonts
PORTVERSION=	2.2
PORTREVISION=	3
CATEGORIES=	korean
MASTER_SITES=	http://kldp.net/frs/download.php/1429/
PKGNAMESUFFIX=	-ttf
DISTNAME=	${FONTNAME}${PKGNAMESUFFIX}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Baekmuk family Korean TrueType Fonts

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

NO_BUILD=	yes

USES=		fonts
FONTNAME=	baekmuk

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} COPYRIGHT COPYRIGHT.ks README \
		contrib/hconfig.ps ttf/*.ttf \
		${STAGEDIR}${FONTSDIR})

.include <bsd.port.mk>
