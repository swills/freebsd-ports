# $FreeBSD: head/devel/p5-Test-POE-Client-TCP/Makefile 437950 2017-04-07 18:50:22Z lth $

PORTNAME=	Test-POE-Client-TCP
PORTVERSION=	1.12
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE Component providing TCP client services for test cases

BUILD_DEPENDS=	p5-POE>=1.28:devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
