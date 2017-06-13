# $FreeBSD: head/devel/qt5/Makefile 440941 2017-05-15 15:52:22Z tcberner $

PORTNAME=	qt5
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Cross-platform application and UI framework (metaport)

USE_QT5=	${_USE_QT_ALL:Nphonon4:Ndeclarative:S/$/_run/} # phonon4 is not part of Qt itself.
USES=		metaport

.include <bsd.port.mk>
