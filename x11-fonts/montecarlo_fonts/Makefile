# Created by: Dennis Herrmann <adox@mcx2.org>
# $FreeBSD: head/x11-fonts/montecarlo_fonts/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	montecarlo_fonts
PORTVERSION=	1.0
PORTREVISION=	3
CATEGORIES=	x11-fonts
MASTER_SITES=	http://bok.net/MonteCarlo/downloads/ \
		http://mirror.4bit.ws/
DISTNAME=	MonteCarlo-PCF
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Monospace font

USES=		fonts
USE_XORG=	x11
NO_BUILD=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	@${INSTALL_DATA} ${WRKSRC}/*.pcf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
