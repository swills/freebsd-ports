# $FreeBSD: head/math/qwtplot3d/Makefile 488382 2018-12-26 12:36:53Z linimon $

PORTNAME=	qwtplot3d
PORTVERSION=	0.2.7
CATEGORIES=	math
MASTER_SITES=	SF
PKGNAMESUFFIX=	-qt5

MAINTAINER=	makc@FreeBSD.org
COMMENT=	3D plotting widgets for Qt

USES=		compiler:c++11-lang dos2unix gl qmake qt:5 tar:tgz
USE_QT=		core gui opengl widgets buildtools_build
USE_GL=		gl glu
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

WRKSRC=		${WRKDIR}/${PORTNAME}

.include <bsd.port.mk>
