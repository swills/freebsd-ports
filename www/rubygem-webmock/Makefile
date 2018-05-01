# $FreeBSD: head/www/rubygem-webmock/Makefile 468728 2018-04-30 17:09:28Z sunpoet $

PORTNAME=	webmock
PORTVERSION=	3.4.0
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
