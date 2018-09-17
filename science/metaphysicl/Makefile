# $FreeBSD: head/science/metaphysicl/Makefile 479253 2018-09-08 15:21:32Z yuri $

PORTNAME=	MetaPhysicL
DISTVERSIONPREFIX=	v
DISTVERSION=	0.3.0.1
CATEGORIES=	science

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Metaprogramming, operator-overloaded classes for numerical simulations

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		autoreconf gmake libtool
USE_GITHUB=	yes
GH_ACCOUNT=	roystgnr
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--disable-static

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libmetaphysicl.so.0.0.0

.include <bsd.port.mk>
