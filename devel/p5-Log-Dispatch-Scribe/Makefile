# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/p5-Log-Dispatch-Scribe/Makefile 458067 2018-01-04 20:11:38Z sunpoet $

PORTNAME=	Log-Dispatch-Scribe
PORTVERSION=	0.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Logging via Facebook's Scribe server software #'

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Log-Dispatch>0:devel/p5-Log-Dispatch
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-MockObject>=0:devel/p5-Test-MockObject \
		p5-Test-Timer>=0:devel/p5-Test-Timer

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yese

.include <bsd.port.mk>
