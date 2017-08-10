# Created by: Mikhail T. <m.tsatsenko@gmail.com>
# $FreeBSD: head/devel/rubygem-sprockets/Makefile 447487 2017-08-07 10:14:08Z tz $

PORTNAME=	sprockets
PORTVERSION=	2.12.4
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby library that preprocesses and concatenates JavaScript files

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-hike1>=1.2:devel/rubygem-hike1 \
		rubygem-multi_json>=1.0:devel/rubygem-multi_json \
		rubygem-rack16>=1.0:www/rubygem-rack16 \
		rubygem-tilt1>=1.1:devel/rubygem-tilt1

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/sprockets

.include <bsd.port.mk>
