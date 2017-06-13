# Created by: Erik B Knudsen <erkn@fysik.dtu.dk>
# $FreeBSD: head/science/mcstas/Makefile 428340 2016-12-11 08:25:56Z antoine $

PORTNAME=	mcstas
PORTVERSION=	2.2a
CATEGORIES=	science
MASTER_SITES=	http://download.mcstas.org/${PORTNAME}-${PORTVERSION}/unix/McStas-${PORTVERSION}-UNIX-src/
DISTNAME=	mcstas-${PORTVERSION}-src

MAINTAINER=	erkn@fysik.dtu.dk
COMMENT=	Monte Carlo neutron ray tracing package

LICENSE=	GPLv2

USES=		bison:build cmake
CMAKE_ARGS=	"-Denable_mcstas=1"

PLIST_SUB+=	PORTVERSION=${PORTVERSION}
SUB_FILES=	pkg-deinstall pkg-install

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/mcstas/${PORTVERSION}/bin/mcformat
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/mcstas/${PORTVERSION}/bin/mcstas

.include <bsd.port.mk>
