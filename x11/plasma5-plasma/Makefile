# $FreeBSD: head/x11/plasma5-plasma/Makefile 468495 2018-04-27 20:29:36Z tcberner $

PORTNAME=	plasma
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11 kde
PKGNAMEPREFIX=	plasma5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE5 plasma meta port

LICENSE=	LGPL20

USES=		kde:5 metaport
# remove:
#   * bluedevil as we do have bluez
#   * plasma-pa don't depend on plamsa-pa by default
#   * breeze-kde4 don't pull in qt4 bits
USE_KDE=	${_USE_PLASMA_ALL:Nplasma-pa:Nbreeze-kde4}
# pull bsd.qt.mk for QT_PLUGINDIR in the kf5-dependencies
USE_QT5=	#

.include <bsd.port.mk>
