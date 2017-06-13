# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/sysutils/rubygem-guard-minitest/Makefile 427673 2016-12-03 19:31:10Z sunpoet $

PORTNAME=	guard-minitest
PORTVERSION=	2.4.6
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Automatically run your tests with Minitest framework

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-guard-compat>=1.2:sysutils/rubygem-guard-compat \
		rubygem-minitest>=3:devel/rubygem-minitest

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
