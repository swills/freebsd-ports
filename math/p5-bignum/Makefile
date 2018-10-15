# $FreeBSD: head/math/p5-bignum/Makefile 481860 2018-10-11 23:59:57Z wen $

PORTNAME=	bignum
PORTVERSION=	0.51
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PJACKLAM
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Transparent BigNumber/BigRational support for Perl

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Math-BigInt>=1.999812:math/p5-Math-BigInt

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
