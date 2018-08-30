# Created by: will
# $FreeBSD: head/math/p5-Math-GMP/Makefile 477529 2018-08-18 20:42:17Z sunpoet $

PORTNAME=	Math-GMP
PORTVERSION=	2.19
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module that provides an interface to the GMP library

LICENSE=	LGPL20+

LIB_DEPENDS=	libgmp.so:math/gmp

USES=		localbase perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e '/Alien::GMP/d' ${WRKSRC}/META.json ${WRKSRC}/META.yml ${WRKSRC}/Makefile.PL
	@${REINPLACE_CMD} -e 's|Alien::Base::Wrapper->mm_args|"LIBS" => ["-lgmp"]|' ${WRKSRC}/Makefile.PL

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Math/GMP/GMP.so

.include <bsd.port.mk>
