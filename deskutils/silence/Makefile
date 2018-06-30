# Created by: Mina R Waheeb <syncer@gmail.com>
# $FreeBSD: head/deskutils/silence/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	silence
PORTVERSION=	0.2
PORTREVISION=	10
CATEGORIES=	deskutils kde
MASTER_SITES=	http://kde-apps.org/CONTENT/content-files/
DISTNAME=	124776-${PORTNAME}-${PORTVERSION}

MAINTAINER=	syncer@gmail.com
COMMENT=	Information management tool

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${KDE_PREFIX}/lib/kde4/katepart.so:editors/kate-kde4

USES=		cmake kde:4 qt:4
USE_KDE=	kdelibs automoc4
USE_QT=		qmake_build moc_build rcc_build uic_build linguisttools_build

WRKSRC=		${WRKDIR}/${PORTNAME}

.include <bsd.port.mk>
