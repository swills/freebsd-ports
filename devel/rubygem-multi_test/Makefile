# $FreeBSD: head/devel/rubygem-multi_test/Makefile 482062 2018-10-14 16:29:10Z sunpoet $

PORTNAME=	multi_test
PORTVERSION=	0.1.2
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Help control rogue test, unit, autorun requirments

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gem shebangfix
USE_RUBY=	yes

NO_ARCH=	yes

SHEBANG_FILES=	test/all test/run

.include <bsd.port.mk>
