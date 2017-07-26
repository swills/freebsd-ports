# $FreeBSD: head/devel/rubygem-re2/Makefile 446386 2017-07-22 10:43:00Z antoine $

PORTNAME=	re2
PORTVERSION=	1.0.0
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	tz@FreeBSD.org
COMMENT=	Ruby bindings to re2

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	re2>=0:devel/re2
RUN_DEPENDS=	re2>=0:devel/re2

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
