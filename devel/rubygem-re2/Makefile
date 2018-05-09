# $FreeBSD: head/devel/rubygem-re2/Makefile 469442 2018-05-09 10:43:26Z mfechner $

PORTNAME=	re2
PORTVERSION=	1.1.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Ruby bindings to re2

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	re2>=0:devel/re2
LIB_DEPENDS=	libunwind.so:devel/libunwind \
		libgmp.so:math/gmp
RUN_DEPENDS=	re2>=0:devel/re2

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
