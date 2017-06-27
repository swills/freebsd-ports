# $FreeBSD: head/devel/p5-Devel-Cover-Report-Clover/Makefile 444408 2017-06-26 19:37:42Z sunpoet $

PORTNAME=	Devel-Cover-Report-Clover
PORTVERSION=	0.35
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for Clover reporting of coverage statistics

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	\
	p5-Class-Accessor>0:devel/p5-Class-Accessor \
	p5-Devel-Cover>0:devel/p5-Devel-Cover \
	p5-HTML-Parser>0:www/p5-HTML-Parser \
	p5-Template-Toolkit>0:www/p5-Template-Toolkit
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS= \
	p5-File-Which>=1.08:sysutils/p5-File-Which \
	p5-Test-Exception>0:devel/p5-Test-Exception \
	p5-Test-MockObject>0:devel/p5-Test-MockObject

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
