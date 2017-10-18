# Created by: Robert Gogolok <gogo@cs.uni-sb.de>
# $FreeBSD: head/www/rubygem-haml/Makefile 452111 2017-10-15 00:37:48Z sunpoet $

PORTNAME=	haml
PORTVERSION=	5.0.4
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Markup language to describe HTML

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-temple>=0.8.0:devel/rubygem-temple \
		rubygem-tilt>=0:devel/rubygem-tilt

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/haml

.include <bsd.port.mk>
