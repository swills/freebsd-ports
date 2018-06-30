# $FreeBSD: head/devel/poxml-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	poxml
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	devel kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Tools to translate Docbook XML using gettext

BUILD_DEPENDS=	${LOCALBASE}/lib/libantlr.a:devel/antlr

USES=		cmake:outsource gettext-tools:build,run kde:4 qt:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT=		moc_build qmake_build rcc_build uic_build \
		corelib xml

.include <bsd.port.mk>
