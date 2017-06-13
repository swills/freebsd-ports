# Created by: Steve Wills <swills@freebsd.org>
# $FreeBSD: head/www/rubygem-puma/Makefile 442554 2017-06-04 11:48:18Z sunpoet $

PORTNAME=	puma
PORTVERSION=	3.9.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Fast, multithreaded and highly concurrent ruby web server

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_RUBY=	yes
USES=		gem shebangfix ssl

PLIST_FILES=	bin/puma bin/pumactl

SHEBANG_FILES=	tools/jungle/init.d/run-puma

.include <bsd.port.mk>
