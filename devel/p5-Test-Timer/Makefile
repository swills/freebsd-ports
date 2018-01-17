# $FreeBSD: head/devel/p5-Test-Timer/Makefile 458872 2018-01-12 21:13:18Z swills $

PORTNAME=	Test-Timer
PORTVERSION=	2.09
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Perl test module to test/assert response times

BUILD_DEPENDS=	p5-Error>=0:lang/p5-Error
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception
RUN_DEPENDS=	p5-Error>=0:lang/p5-Error

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
