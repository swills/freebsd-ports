# $FreeBSD: head/devel/rubygem-re2/Makefile 455591 2017-12-05 16:44:09Z tz $

PORTNAME=	re2
PORTVERSION=	1.1.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	idefix@fechner.net
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
