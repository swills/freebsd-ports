# Created by: Dave Cottlehuber <dch@skunkwerks.at>
# $FreeBSD: head/x11-fonts/firacode/Makefile 467029 2018-04-11 07:10:49Z ehaupt $

PORTNAME=	firacode
PORTVERSION=	1.205
CATEGORIES=	x11-fonts
MASTER_SITES=	https://github.com/tonsky/FiraCode/releases/download/${PORTVERSION}/
DISTNAME=	FiraCode_${PORTVERSION}

MAINTAINER=	dch@skunkwerks.at
COMMENT=	Monospaced font with programming ligatures derived from Fira

LICENSE=	OFL11

USES=		fonts zip
USE_XORG=	x11
NO_ARCH=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/otf/*.otf \
		${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
