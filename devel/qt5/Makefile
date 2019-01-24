# $FreeBSD: head/devel/qt5/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	qt5
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Cross-platform application and UI framework (metaport)

# * phonon4 is not part of Qt itself.
# * we don't want to pull in wayland just yet.
USE_QT=		${_USE_QT_ALL:Nphonon4:Ndeclarative:Nwayland:S/$/_run/}
USES=		metaport qt:5

.include <bsd.port.mk>
