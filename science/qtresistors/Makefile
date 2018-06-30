# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD: head/science/qtresistors/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	qtresistors
PORTVERSION=	0.1
PORTREVISION=	2
CATEGORIES=	science
MASTER_SITES=	http://qt-apps.org/CONTENT/content-files/
DISTNAME=	118297-qtResistors-201001102229

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Calculate resistance of resistor by the colors on the resistor

USES=		qmake qt:4
USE_QT=		gui uic_build moc_build

WRKSRC=		${WRKDIR}/qtResistors

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/qtResistors ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
