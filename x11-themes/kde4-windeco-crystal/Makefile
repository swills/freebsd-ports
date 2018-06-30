# Created by: decept
# $FreeBSD: head/x11-themes/kde4-windeco-crystal/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	crystal
PORTVERSION=	2.2.1
PORTREVISION=	6
CATEGORIES=	x11-themes kde
MASTER_SITES=	http://www.kde-look.org/CONTENT/content-files/
PKGNAMEPREFIX=	kde-windeco-
DISTNAME=	75140-${PORTNAME}-${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Transparent KDE window decoration

LICENSE=	GPLv2

USES=		cmake:outsource,noninja kde:4 qt:4 tar:bzip2
USE_KDE=	kdelibs automoc4 workspace
USE_QT=		qmake_build moc_build rcc_build uic_build \
		corelib gui qt3support
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

.include <bsd.port.mk>
