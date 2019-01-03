# $FreeBSD$

PORTNAME=	mcstas-comps
PORTVERSION=	2.5
CATEGORIES=	science
MASTER_SITES=	http://download.mcstas.org/${PORTNAME}-${PORTVERSION}/unix/
DISTNAME=	mcstas-comps-${PORTVERSION}-src

MAINTAINER=	erkn@fysik.dtu.dk
COMMENT=	Component Library for the McStas neutron ray tracing package

LICENSE=	GPLv2

RUN_DEPENDS=	${LOCALBASE}/mcstas/${PORTVERSION}/bin/mcstas:science/mcstas

USES=		cmake:noninja fortran shebangfix

STRIP=		#none
CMAKE_ARGS=	"-Denable_mcstas=1"
PLIST_SUB+=	PORTVERSION=${PORTVERSION}

.include <bsd.port.mk>
