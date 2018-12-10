# $FreeBSD: head/math/flintqs/Makefile 486652 2018-12-05 06:04:52Z yuri $

PORTNAME=	FlintQS
DISTVERSIONPREFIX=	v
DISTVERSION=	1.0
CATEGORIES=	math

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Quadratic Sieve integer factorization algorithm

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libgmp.so:math/gmp

USES=		autoreconf gmake localbase:ldflags
GNU_CONFIGURE=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	sagemath

PLIST_FILES=	bin/QuadraticSieve

.include <bsd.port.mk>
