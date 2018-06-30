# $FreeBSD: head/devel/kdesdk-strigi-analyzers-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kdesdk-strigi-analyzers
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	2
CATEGORIES=	devel kde kde-kde4
PKGNAMESUFFIX=	-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Strigi analyzers for SDK related file formats

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	kdelibs automoc4 strigi
USE_QT=		moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
