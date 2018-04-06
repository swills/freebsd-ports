# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/p5-Test-Log-Log4perl/Makefile 466651 2018-04-06 16:26:09Z sunpoet $

PORTNAME=	Test-Log-Log4perl
PORTVERSION=	0.32
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Test log4perl

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Log-Log4perl>=0:devel/p5-Log-Log4perl
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
