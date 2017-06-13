# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/devel/p5-Test-MockModule/Makefile 437950 2017-04-07 18:50:22Z lth $

PORTNAME=	Test-MockModule
PORTVERSION=	0.11
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Override subroutines in a module for unit testing

LICENSE=	GPLv3

BUILD_DEPENDS=	p5-SUPER>=0:devel/p5-SUPER
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
