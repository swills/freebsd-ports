# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/p5-Log-Dispatch-Scribe/Makefile 423523 2016-10-08 17:02:14Z adamw $

PORTNAME=	Log-Dispatch-Scribe
PORTVERSION=	0.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Logging via Facebook's Scribe server software

BUILD_DEPENDS=	p5-Log-Dispatch>0:devel/p5-Log-Dispatch
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-MockObject>=0:devel/p5-Test-MockObject \
		p5-Test-Timer>=0:devel/p5-Test-Timer

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yese

.include <bsd.port.mk>
