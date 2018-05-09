# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/devel/p5-Test-MockModule/Makefile 469206 2018-05-06 12:49:59Z sunpoet $

PORTNAME=	Test-MockModule
PORTVERSION=	0.14
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Override subroutines in a module for unit testing

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-SUPER>=0:devel/p5-SUPER
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Warnings>=0:devel/p5-Test-Warnings

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
