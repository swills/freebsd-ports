# Created by: renchap@cocoa-x.com
# $FreeBSD: head/devel/rubygem-moneta/Makefile 457532 2017-12-29 18:48:04Z sunpoet $

PORTNAME=	moneta
PORTVERSION=	1.0.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Unified interface to key/value stores

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix
SHEBANG_FILES=	script/install-kyotocabinet \
		script/start-services

.include <bsd.port.mk>
