# Created by: Markus Brueffer <markus@FreeBSD.org>
# $FreeBSD: head/graphics/fraqtive/Makefile 483153 2018-10-27 17:15:13Z makc $

PORTNAME=	fraqtive
PORTVERSION=	0.4.8
PORTREVISION=	2
CATEGORIES=	graphics
MASTER_SITES=	SF/fraqtive/Fraqtive/Fraqtive%20${PORTVERSION}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Draws Mandelbrot and Julia fractals

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		qmake qt:5 tar:bzip2
USE_QT=		core gui opengl widgets xml buildtools_build
USE_GL=		gl glu

OPTIONS_DEFINE=	SSE2
SSE2_DESC=	Enable SSE2 optimization
SSE2_QMAKE_ON=	CONFIG+=sse2
SSE2_QMAKE_OFF=	CONFIG+=no-sse2

.include <bsd.port.mk>
