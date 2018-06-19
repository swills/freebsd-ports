# $FreeBSD: head/science/spglib/Makefile 472472 2018-06-15 17:42:24Z yuri $

PORTNAME=	spglib
DISTVERSIONPREFIX=	v
DISTVERSION=	1.10.3
CATEGORIES=	science

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C library for finding and handling crystal symmetries

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		autoreconf libtool
USE_GITHUB=	yes
GH_ACCOUNT=	atztogo
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-static
USE_LDCONFIG=	yes

.include <bsd.port.mk>
