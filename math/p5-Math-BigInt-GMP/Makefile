# Created by: Maxime Henrion <mux@FreeBSD.org>
# $FreeBSD: head/math/p5-Math-BigInt-GMP/Makefile 443757 2017-06-17 10:02:18Z sunpoet $

PORTNAME=	Math-BigInt-GMP
PORTVERSION=	1.6004
PORTREVISION=	1
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Math::BigInt::GMP - Use the GMP library for Math::BigInt routines

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

LIB_DEPENDS=	libgmp.so:math/gmp

USE_PERL5=	configure
USES=		localbase perl5

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Math/BigInt/GMP/GMP.so

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 502508
BUILD_DEPENDS+=	p5-Math-BigInt>=1.999801:math/p5-Math-BigInt
RUN_DEPENDS+=	p5-Math-BigInt>=1.999801:math/p5-Math-BigInt
.endif

.include <bsd.port.post.mk>
