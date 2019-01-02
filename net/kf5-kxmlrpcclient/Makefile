# $FreeBSD: head/net/kf5-kxmlrpcclient/Makefile 488341 2018-12-25 20:25:39Z tcberner $

PORTNAME=	kxmlrpcclient
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	net kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 interaction with XMLRPC services

USES=		cmake compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	config coreaddons ecm doctools i18n kio service
USE_QT=		buildtools_build core gui qmake_build xml

.include <bsd.port.mk>
