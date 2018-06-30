# Created by: thierry@pompo.net
# $FreeBSD: head/math/mathmod/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	MathMod
PORTVERSION=	8.0
CATEGORIES=	math graphics

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Mathematical modeling software

LICENSE=	GPLv2

USE_GITHUB=	yes
GH_ACCOUNT=	parisolab
GH_PROJECT=	${PORTNAME:tl}

USES=		dos2unix qmake qt:5
USE_GL=		gl
USE_QT=		buildtools_build core gui opengl qmake_build widgets

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
