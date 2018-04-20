# $FreeBSD: head/net/kdenetwork-strigi-analyzers-kde4/Makefile 467711 2018-04-18 13:57:42Z jbeich $

PORTNAME=	kdenetwork-strigi-analyzers
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	9
CATEGORIES=	net kde kde-kde4
PKGNAMESUFFIX=	-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Strigi analyzers for network-related file formats

LIB_DEPENDS=	libboost_thread.so:devel/boost-libs

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs strigi automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
