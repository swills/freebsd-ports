# Created by: ijliao
# $FreeBSD: head/graphics/rubygem-gruff/Makefile 429803 2016-12-28 17:18:17Z swills $

PORTNAME=	gruff
PORTVERSION=	0.7.0
PORTREVISION=	1
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Beautiful graphing library for Ruby using RMagick

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-rmagick>=2.13.4:graphics/rubygem-rmagick

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix
SHEBANG_FILES=	test/image_compare.rb
ruby_OLD_CMD=	ruby

.include <bsd.port.mk>
