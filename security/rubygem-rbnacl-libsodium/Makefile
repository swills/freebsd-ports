# $FreeBSD$

PORTNAME=	rbnacl-libsodium
PORTVERSION=	1.0.13
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	tz@FreeBSD.org
COMMENT=	rbnacl with bundled libsodium

LICENSE=	MIT

BUILD_DEPENDS=	rubygem-bundler>=1.5:sysutils/rubygem-bundler \
		rubygem-rake>=10:devel/rubygem-rake
RUN_DEPENDS=	rubygem-rbnacl>=3.0.1:security/rubygem-rbnacl

USE_RUBY=	yes
USES=		gem libtool

.include <bsd.port.mk>
