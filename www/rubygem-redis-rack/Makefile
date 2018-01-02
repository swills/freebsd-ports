# $FreeBSD: head/www/rubygem-redis-rack/Makefile 456757 2017-12-19 18:21:29Z sunpoet $

PORTNAME=	redis-rack
DISTVERSION=	2.0.4
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Redis Store for Rack

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-rack>=1.5:www/rubygem-rack \
		rubygem-redis-store>=1.2:devel/rubygem-redis-store

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

post-install:
	@${RM} ${STAGEDIR}${PREFIX}/bin/appraisal \
		${STAGEDIR}${PREFIX}/bin/rake

.include <bsd.port.mk>
