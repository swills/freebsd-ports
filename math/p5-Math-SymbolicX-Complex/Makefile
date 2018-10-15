# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/math/p5-Math-SymbolicX-Complex/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Math-SymbolicX-Complex
PORTVERSION=	1.01
PORTREVISION=	1
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Complex number support for the Math::Symbolic parser

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Math-Symbolic>=0:math/p5-Math-Symbolic \
		p5-Math-SymbolicX-ParserExtensionFactory>=0:math/p5-Math-SymbolicX-ParserExtensionFactory

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
