# $FreeBSD: head/devel/p5-Test-TCP/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Test-TCP
PORTVERSION=	2.13
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for testing TCP program

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Test-SharedFork>=0.19:devel/p5-Test-SharedFork
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	YES

.include <bsd.port.mk>
