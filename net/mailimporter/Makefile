# $FreeBSD: head/net/mailimporter/Makefile 467711 2018-04-18 13:57:42Z jbeich $

PORTNAME=	mailimporter
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Import mbox files to KMail

LICENSE=	LGPL21

LIB_DEPENDS=	libboost_system.so:devel/boost-libs

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	archive config coreaddons ecm i18n itemmodels
# pim components
USE_KDE+=	akonadi akonadimime libkdepim mime
USE_QT5=	core gui testlib uitools widgets xml \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
