# $FreeBSD: head/devel/libdill/Makefile 489647 2019-01-08 07:47:10Z yuri $

PORTNAME=	libdill
DISTVERSION=	2.13
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Structured concurrency library in C

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		autoreconf gmake libtool
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-static
USE_GITHUB=	yes
GH_ACCOUNT=	sustrik
USE_LDCONFIG=	yes

.include <bsd.port.mk>
