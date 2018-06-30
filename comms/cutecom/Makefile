# Created by: Markus Brueffer <markus@FreeBSD.org>
# $FreeBSD: head/comms/cutecom/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=		cutecom
DISTVERSIONPREFIX=	v
DISTVERSION=		0.45.0
CATEGORIES=		comms

MAINTAINER=	jwb@FreeBSD.org
COMMENT=	Graphical serial terminal for embedded programming

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	lsz:comms/lrzsz

USE_QT=		qt3support qmake_build moc_build rcc_build uic_build
USES=		cmake qt:5
USE_QT=		buildtools_build core gui qmake_build serialport widgets
USE_GITHUB=	yes
GH_ACCOUNT=	neundorf
GH_PROJECT=	CuteCom

PLIST_FILES=	bin/cutecom

.include <bsd.port.mk>
