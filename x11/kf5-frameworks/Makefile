# $FreeBSD: head/x11/kf5-frameworks/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	frameworks
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTREVISION=	1
CATEGORIES=	x11 kde
PKGNAMEPREFIX=	kf5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 frameworks meta port

USES=		metaport kde:5 qt:5
# remove:
#   * bluez-qt as we do have bluez
USE_KDE=	${_USE_FRAMEWORKS_ALL:Nbluez-qt}
# pull bsd.qt.mk for QT_PLUGINDIR in the kf5-dependencies
USE_QT=		#

.include <bsd.port.mk>
