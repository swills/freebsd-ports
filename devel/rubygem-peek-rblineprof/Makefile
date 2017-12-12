# $FreeBSD: head/devel/rubygem-peek-rblineprof/Makefile 455591 2017-12-05 16:44:09Z tz $

PORTNAME=	peek-rblineprof
PORTVERSION=	0.2.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	idefix@fechner.net
COMMENT=	Peek into how much each line of your Rails application takes

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-peek>=0:devel/rubygem-peek \
		rubygem-rblineprof>=0:devel/rubygem-rblineprof

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
