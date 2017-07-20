# $FreeBSD: head/devel/rubygem-re2/Makefile 446249 2017-07-20 09:13:28Z tz $

PORTNAME=	re2
PORTVERSION=	1.0.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	tz@FreeBSD.org
COMMENT=	Ruby bindings to re2

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	re2>=0:devel/re2
RUN_DEPENDS=	re2>=0:devel/re2

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
