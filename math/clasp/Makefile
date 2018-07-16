# Created by: Vsevolod Stakhov <vsevolod@FreeBSD.org>
# $FreeBSD$

PORTNAME=	clasp
DISTVERSION=	3.3.3
CATEGORIES=	math devel
MASTER_SITES=	https://github.com/potassco/clasp/releases/download/v${DISTVERSION}/
EXTRACT_SUFX=	-source.tar.gz

MAINTAINER=	vsevolod@FreeBSD.org
COMMENT=	Answer set solver for (extended) normal logic programs

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN_sparc64=	Fails to build: internal compiler error

USES=		cmake:outsource
USE_LDCONFIG=	${PREFIX}/lib/clasp-${DISTVERSION} ${PREFIX}/lib/potassco-1.0

CMAKE_ARGS=	-DCLASP_INSTALL_LIB:BOOL=ON \
		-DBUILD_SHARED_LIBS:BOOL=ON

PLIST_SUB=	DISTVERSION=${DISTVERSION} PVER=1.0

.include <bsd.port.mk>
