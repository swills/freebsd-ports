# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/devel/p5-mocked/Makefile 437950 2017-04-07 18:50:22Z lth $

PORTNAME=	mocked
PORTVERSION=	0.09
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:LUKEC
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	mocked - use mocked libraries in unit tests

BUILD_DEPENDS=	p5-URI>=0:net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
