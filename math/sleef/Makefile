# Created by: Johannes M Dieterich <jmd@FreeBSD.org>
# $FreeBSD: head/math/sleef/Makefile 483807 2018-11-02 13:32:34Z rene $

PORTNAME=	sleef
DISTVERSION=	3.3-9
DISTVERSIONSUFFIX=	-g3998463
CATEGORIES=	math

MAINTAINER=	jmd@FreeBSD.org
COMMENT=	SIMD Library for Evaluating Elementary Functions, vectorized libm

LICENSE=	BSL
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		cmake:outsource compiler:c11
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	shibatch

.include <bsd.port.mk>
