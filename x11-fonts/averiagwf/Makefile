# $FreeBSD: head/x11-fonts/averiagwf/Makefile 438542 2017-04-14 19:03:23Z swills $

PORTNAME=	averiagwf
PORTVERSION=	1.00
CATEGORIES=	x11-fonts
MASTER_SITES=	http://iotic.com/averia/font-files/GWF/
DISTNAME=	AveriaGWF
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} AveriaSansGWF${EXTRACT_SUFX} AveriaSerifGWF${EXTRACT_SUFX}

MAINTAINER=	alfix86@gmail.com
COMMENT=	Average font

LICENSE=	OFL11
LICENSE_FILE=	${WRKSRC}/OFL.txt

USES=		fonts zip
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

PORTDOCS=	FONTLOG.txt

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} *.ttf ${STAGEDIR}${FONTSDIR}
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_MAN} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
