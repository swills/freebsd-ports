# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/devel/p5-Test-InDistDir/Makefile 437950 2017-04-07 18:50:22Z lth $

PORTNAME=	Test-InDistDir
PORTVERSION=	1.112071
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Test environment setup for development with IDE

USES=		perl5
USE_PERL5=	configure

regression-test: build
	cd ${WRKSRC}/ && ${MAKE} test

.include <bsd.port.mk>
