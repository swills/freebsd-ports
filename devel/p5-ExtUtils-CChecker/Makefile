# Created by: Sahil Tandon <sahil@tandon.net>
# $FreeBSD: head/devel/p5-ExtUtils-CChecker/Makefile 433352 2017-02-05 05:30:03Z sunpoet $

PORTNAME=	ExtUtils-CChecker
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Configure-time utilities for using C headers, libraries, OS features

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Module-Build>=0:devel/p5-Module-Build
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Fatal>=0:devel/p5-Test-Fatal

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
