# $FreeBSD: head/www/rubygem-webmock/Makefile 458201 2018-01-06 04:33:46Z sunpoet $

PORTNAME=	webmock
PORTVERSION=	3.2.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Allows stubbing HTTP requests and setting expectations on the requests

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-addressable>=2.3.6:www/rubygem-addressable \
		rubygem-crack>=0.3.2:devel/rubygem-crack \
		rubygem-hashdiff>=0:devel/rubygem-hashdiff

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
