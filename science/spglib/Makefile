# $FreeBSD: head/science/spglib/Makefile 485471 2018-11-20 19:23:45Z yuri $

PORTNAME=	spglib
DISTVERSIONPREFIX=	v
DISTVERSION=	1.11.1.2
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
