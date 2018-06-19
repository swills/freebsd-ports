# $FreeBSD: head/www/rubygem-kubeclient/Makefile 471422 2018-06-02 22:26:48Z sunpoet $

PORTNAME=	kubeclient
PORTVERSION=	3.1.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Client for Kubernetes REST API

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-http>=2.2.2:www/rubygem-http \
		rubygem-recursive-open-struct>=1.0.4:devel/rubygem-recursive-open-struct \
		rubygem-rest-client>=2.0:www/rubygem-rest-client

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
