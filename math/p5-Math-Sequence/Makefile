# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/math/p5-Math-Sequence/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	Math-Sequence
PORTVERSION=	1.00
PORTREVISION=	1
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Perl extension dealing with mathematic sequences

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Math-Symbolic>=0:math/p5-Math-Symbolic
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
