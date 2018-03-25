# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD: head/devel/rubygem-analogger/Makefile 465475 2018-03-24 21:11:20Z sunpoet $

PORTNAME=	analogger
PORTVERSION=	0.9.3
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Fast, flexible, easy to use logging service for Ruby

LICENSE=	MIT

RUN_DEPENDS=	rubygem-eventmachine>=1.2.5:devel/rubygem-eventmachine

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix

PLIST_FILES=	bin/analogger

SHEBANG_FILES=	bin/analogger
ruby_OLD_CMD=	ruby

.include <bsd.port.mk>
