# $FreeBSD: head/science/spglib/Makefile 490843 2019-01-21 09:26:33Z yuri $

PORTNAME=	spglib
DISTVERSIONPREFIX=	v
DISTVERSION=	1.11.2.1
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
