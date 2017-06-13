# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: head/math/p5-Math-Random-ISAAC/Makefile 437785 2017-04-05 13:35:45Z sunpoet $

PORTNAME=	Math-Random-ISAAC
PORTVERSION=	1.004
PORTREVISION=	2
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JAWNSY
PKGNAMEPREFIX=	p5-

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Perl interface to the ISAAC PRNG Algorithm

BUILD_DEPENDS=	p5-Math-Random-ISAAC-XS>0:math/p5-Math-Random-ISAAC-XS
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-NoWarnings>0:devel/p5-Test-NoWarnings

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
