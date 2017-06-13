# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/devel/p5-Test-ClassAPI/Makefile 437950 2017-04-07 18:50:22Z lth $

PORTNAME=	Test-ClassAPI
PORTVERSION=	1.06
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Provides basic first-pass API testing for large class trees

RUN_DEPENDS=	p5-Class-Inspector>=1.12:devel/p5-Class-Inspector \
		p5-Config-Tiny>=2.00:devel/p5-Config-Tiny \
		p5-Params-Util>=1.00:devel/p5-Params-Util
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
