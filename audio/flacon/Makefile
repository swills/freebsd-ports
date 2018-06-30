# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: head/audio/flacon/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	flacon
PORTVERSION=	4.1.0
DISTVERSIONPREFIX=	v
CATEGORIES=	audio

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Graphical audio file extractor and encoder

LICENSE=	LGPL21

LIB_DEPENDS=	libuchardet.so:textproc/uchardet

USES=		cmake desktop-file-utils pkgconfig qt:5
USE_GITHUB=	yes
USE_QT=		buildtools_build concurrent_build qmake_build \
		linguisttools_build core gui network widgets

.include <bsd.port.mk>
