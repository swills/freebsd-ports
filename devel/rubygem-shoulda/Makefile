# $FreeBSD: head/devel/rubygem-shoulda/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	shoulda
PORTVERSION=	3.5.0
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Making tests easy on the fingers and eyes

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-shoulda-context>=1.0.1:devel/rubygem-shoulda-context \
		rubygem-shoulda-matchers>=1.4.1:devel/rubygem-shoulda-matchers

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
