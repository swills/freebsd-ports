# Created by: Renaud Chaput <renchap@cocoa-x.com>
# $FreeBSD: head/sysutils/rubygem-chef-zero/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	chef-zero
PORTVERSION=	2.2
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	RG

MAINTAINER=	renchap@cocoa-x.com
COMMENT=	Self-contained, easy-setup, fast-start in-memory Chef server

LICENSE=	APACHE20

RUN_DEPENDS=	rubygem-hashie2>=2.0.0:devel/rubygem-hashie2 \
		rubygem-json>=1.8.1:devel/rubygem-json \
		rubygem-mixlib-log>=1.3.0:devel/rubygem-mixlib-log \
		rubygem-rack>=0.0.0:www/rubygem-rack

NO_ARCH=	yes

USE_RUBY=		yes
USES=		gem
PLIST_FILES=		bin/chef-zero

.include <bsd.port.mk>
