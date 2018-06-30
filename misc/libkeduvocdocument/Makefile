# $FreeBSD: head/misc/libkeduvocdocument/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	libkeduvocdocument
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	misc kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Library for reading and writing vocabulary files

USES=		cmake:outsource gettext kde:5 qt:5 tar:xz
USE_KDE=	archive config coreaddons ecm i18n kio service
USE_QT=		core gui xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
