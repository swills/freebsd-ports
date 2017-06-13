# Created by: Sergei Vyshenski <svysh.fbsd@gmail.com>
# $FreeBSD: head/devel/p5-Test-Prereq/Makefile 430528 2017-01-04 02:00:23Z wen $

PORTNAME=	Test-Prereq
PORTVERSION=	2.002
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	svysh.fbsd@gmail.com
COMMENT=	Check if Makefile.PL has the right pre-requisites

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Module-Extract-Use>0:devel/p5-Module-Extract-Use \
		p5-Module-Build>=0.4220:devel/p5-Module-Build
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Pod>0:devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>0:devel/p5-Test-Pod-Coverage

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
