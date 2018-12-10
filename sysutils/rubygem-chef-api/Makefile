# Created by: Michael Moll <kvedulv@kvedulv.de>
# $FreeBSD: head/sysutils/rubygem-chef-api/Makefile 486716 2018-12-05 18:50:20Z sunpoet $

PORTNAME=	chef-api
PORTVERSION=	0.9.0
CATEGORIES=	sysutils ruby
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Leightweight Chef API client

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-logify>=0.1:sysutils/rubygem-logify \
		rubygem-mime-types>=0:misc/rubygem-mime-types

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
