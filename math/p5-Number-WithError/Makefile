# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/math/p5-Number-WithError/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	Number-WithError
PORTVERSION=	1.01
PORTREVISION=	1
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Numbers with error propagation and scientific rounding

BUILD_DEPENDS=	p5-Params-Util>=0:devel/p5-Params-Util \
		p5-prefork>=0:devel/p5-prefork
RUN_DEPENDS:=	${BUILD_DEPENDS}

TEST_DEPENDS=	p5-Test-LectroTest>=0:devel/p5-Test-LectroTest

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
