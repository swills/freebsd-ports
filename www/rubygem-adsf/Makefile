# Created by: Douglas Thrift <douglas@douglasthrift.net>
# $FreeBSD: head/www/rubygem-adsf/Makefile 454870 2017-11-25 03:30:36Z swills $

PORTNAME=	adsf
PORTVERSION=	1.3.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	douglas@douglasthrift.net
COMMENT=	Web server that can be spawned in any directory

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-rack16>=1.0.0:www/rubygem-rack16

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

PLIST_FILES=	bin/adsf

.include <bsd.port.mk>
