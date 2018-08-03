# $FreeBSD: head/devel/rubygem-shoulda/Makefile 476079 2018-07-31 23:50:02Z sunpoet $

PORTNAME=	shoulda
PORTVERSION=	3.6.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Making tests easy on the fingers and eyes

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-shoulda-context>=1.0.1:devel/rubygem-shoulda-context \
		rubygem-shoulda-matchers>=3.0:devel/rubygem-shoulda-matchers

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
