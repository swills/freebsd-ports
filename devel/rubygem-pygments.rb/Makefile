# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-pygments.rb/Makefile 437635 2017-04-03 12:58:07Z sunpoet $

PORTNAME=	pygments.rb
PORTVERSION=	1.1.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Exposes the pygments syntax highlighter to Ruby

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-multi_json>=1.0.0:devel/rubygem-multi_json

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	%%GEM_LIB_DIR%%/vendor/pygments-main/scripts/find_error.py

.include <bsd.port.mk>
