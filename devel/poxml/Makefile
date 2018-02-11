# $FreeBSD: head/devel/poxml/Makefile 461375 2018-02-10 10:29:51Z tcberner $

PORTNAME=	poxml
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	2
CATEGORIES=	devel kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Tools to translate Docbook XML using gettext

BUILD_DEPENDS=	${LOCALBASE}/lib/libantlr.a:devel/antlr

USES=		cmake:outsource gettext-tools:build,run kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build \
		corelib xml

.include <bsd.port.mk>
