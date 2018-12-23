# $FreeBSD: head/devel/rubygem-peek-redis-rails50/Makefile 488197 2018-12-23 11:41:56Z mfechner $

PORTNAME=	peek-redis
PORTVERSION=	1.2.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails50

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Provide a peek into the Redis calls made

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-atomic>=1.0.0:devel/rubygem-atomic \
		rubygem-peek-rails50>=0:devel/rubygem-peek-rails50 \
		rubygem-redis>=0:databases/rubygem-redis

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
