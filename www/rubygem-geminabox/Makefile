# Created by: Philip M. Gollucci <pgollucci@p6m7g8.com>
# $FreeBSD: head/www/rubygem-geminabox/Makefile 433374 2017-02-05 05:32:36Z sunpoet $

PORTNAME=	geminabox
PORTVERSION=	0.13.5
PORTREVISION=	1
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
		rubygem-sinatra>=1.2.7:www/rubygem-sinatra

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
