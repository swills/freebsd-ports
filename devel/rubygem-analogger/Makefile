# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD: head/devel/rubygem-analogger/Makefile 460111 2018-01-27 11:38:44Z sunpoet $

PORTNAME=	analogger
PORTVERSION=	0.9.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Fast, flexible, easy to use logging service for Ruby

LICENSE=	MIT

RUN_DEPENDS=	rubygem-eventmachine>=1.2:devel/rubygem-eventmachine

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix

PLIST_FILES=	bin/analogger

SHEBANG_FILES=	bin/analogger
ruby_OLD_CMD=	ruby

.include <bsd.port.mk>
