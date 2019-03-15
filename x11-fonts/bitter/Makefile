# $FreeBSD: head/x11-fonts/bitter/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	bitter
PORTVERSION=	20130930
PORTREVISION=	2
CATEGORIES=	x11-fonts
MASTER_SITES=	http://www.huertatipografica.com/free_download/eo0pZGbJPxy2YyRkWQXx?dummy=

MAINTAINER=	rakuco@FreeBSD.org
COMMENT=	Contemporary serif typeface for text designed for comfortably reading

LICENSE=	OFL11

FETCH_BEFORE_ARGS=	-o ${DISTFILES}

USES=		fonts zip
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC} && \
		${INSTALL_DATA} *.otf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
