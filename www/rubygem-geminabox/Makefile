# Created by: Philip M. Gollucci <pgollucci@p6m7g8.com>
# $FreeBSD: head/www/rubygem-geminabox/Makefile 460212 2018-01-28 14:09:48Z sunpoet $

PORTNAME=	geminabox
PORTVERSION=	0.13.15
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Sinatra based gem hosting app

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-builder>=0:devel/rubygem-builder \
		rubygem-faraday>=0:www/rubygem-faraday \
		rubygem-httpclient>=2.2.7:www/rubygem-httpclient \
		rubygem-nesty>=0:devel/rubygem-nesty \
		rubygem-reentrant_flock>=0:devel/rubygem-reentrant_flock \
		rubygem-sinatra>=1.2.7:www/rubygem-sinatra

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
