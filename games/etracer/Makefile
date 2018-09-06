# Created by: Peter Dunning
# $FreeBSD: head/games/etracer/Makefile 478756 2018-09-02 06:05:58Z tobik $

PORTNAME=	etr
PORTVERSION=	0.7.5
CATEGORIES=	games
MASTER_SITES=	SF/extremetuxracer/releases/${PORTVERSION}
PKGNAMESUFFIX=	acer

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Extreme Tux Racer

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libsfml-system.so:devel/sfml

USES=		compiler:c++11-lang pkgconfig tar:xz
USE_GL=		gl glu
GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
