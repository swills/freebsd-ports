# Created by: renchap@cocoa-x.com
# $FreeBSD: head/devel/rubygem-moneta/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	moneta
PORTVERSION=	0.7.19
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	renchap@cocoa-x.com
COMMENT=	Unified interface to key/value stores

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem shebangfix
SHEBANG_FILES=	script/install-kyotocabinet \
		script/kill-travis \
		script/start-services \
		script/upload-bundle \
		script/wait-services

.include <bsd.port.mk>
