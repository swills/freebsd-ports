# Created by: tcberner
# $FreeBSD: head/x11/kf5-frameworks/Makefile 441306 2017-05-20 10:24:35Z tcberner $

PORTNAME=	frameworks
PORTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11 kde
PKGNAMEPREFIX=	kf5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 frameworks meta port

USES=		metaport kde:5
# remove:
#   * bluez-qt as we do have bluez
USE_KDE=	${_USE_FRAMEWORKS_ALL:Nbluez-qt}
# pull bsd.qt.mk for QT_PLUGINDIR in the kf5-dependencies
USE_QT5=	#

.include <bsd.port.mk>
