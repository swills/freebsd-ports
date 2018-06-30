# Created by: Rusty Nejdl <rnejdl@ringofsaturn.com>
# $FreeBSD: head/sysutils/filelight-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	filelight
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	2
CATEGORIES=	sysutils kde kde-kde4
PKGNAMESUFFIX=	-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Map of concentric segmented-rings representing file system

CONFLICTS_INSTALL=      ${PORTNAME}

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT=		qmake_build moc_build rcc_build uic_build

.include <bsd.port.mk>
