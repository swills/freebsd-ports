# Created by: Ken Moore <ken@pcbsd.org>
# $FreeBSD: head/deskutils/lumina-xdg-entry/Makefile 488048 2018-12-22 02:10:21Z linimon $

PORTNAME=	lumina-xdg-entry
DISTVERSIONPREFIX=	v
DISTVERSION=	1.3.0
DISTVERSIONSUFFIX=	-p1
CATEGORIES=	deskutils

MAINTAINER=	kmoore@FreeBSD.org
COMMENT=	XDG desktop entry creator from the Lumina Desktop

LICENSE=	BSD3CLAUSE

OPTIONS_DEFINE=	I18N
OPTIONS_DEFAULT=I18N
I18N_DESC=	Install localization files

.include <bsd.port.options.mk>

MAKE_JOBS_UNSAFE=yes

USES=		compiler:c++11-lang qmake qt:5
USE_QT=		core gui widgets network svg \
		buildtools_build x11extras concurrent multimedia
USE_GITHUB=	yes
GH_ACCOUNT=	trueos
GH_PROJECT=	lumina
WRKSRC_SUBDIR=	src-qt5/desktop-utils/${PORTNAME}

.if${PORT_OPTIONS:MI18N}
USE_QT+=	linguist_build
QMAKE_ARGS+=	CONFIG+=WITH_I18N
.endif

.include <bsd.port.mk>
