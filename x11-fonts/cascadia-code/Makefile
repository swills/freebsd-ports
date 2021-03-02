# $FreeBSD$

PORTNAME=	cascadia-code
DISTVERSION=	2102.03
CATEGORIES=	x11-fonts
MASTER_SITES=	https://github.com/microsoft/${PORTNAME}/releases/download/v${DISTVERSION}/
DISTNAME=	CascadiaCode-${DISTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Monospaced font with programming ligatures

LICENSE=	OFL11

USES=		fonts zip

NO_ARCH=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/ttf/static/*.ttf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
