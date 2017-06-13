# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/math/p5-Math-BigRat/Makefile 435263 2017-03-02 17:59:46Z sunpoet $

PORTNAME=	Math-BigRat
PORTVERSION=	0.2612
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Arbitrary big rational numbers

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Math-BigInt>=1.999718:math/p5-Math-BigInt
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
