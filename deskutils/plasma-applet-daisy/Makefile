# $FreeBSD: head/deskutils/plasma-applet-daisy/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	daisy
PORTVERSION=	0.0.4.26
PORTREVISION=	7
CATEGORIES=	deskutils kde
MASTER_SITES=	http://cdlszm.org/downloads/
PKGNAMEPREFIX=	plasma-applet-
DISTNAME=	${PKGNAMEPREFIX}${PORTNAME}-${PORTVERSION}

MAINTAINER=	jhale@FreeBSD.org
COMMENT=	Simple launcher plasma applet for KDE4

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake gettext kde:4 qt:4
USE_KDE=	automoc4 kdelibs workspace
USE_QT=		corelib dbus gui network svg xml \
		qmake_build moc_build rcc_build uic_build

.include <bsd.port.mk>
