# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/math/p5-Math-Random-MT/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	Math-Random-MT
PORTVERSION=	1.17
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	The Mersenne Twister PRNG

LICENSE=	BSD3CLAUSE

TEST_DEPENDS=	p5-Test-Number-Delta>=0:devel/p5-Test-Number-Delta

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Math/Random/MT/MT.so

.include <bsd.port.mk>
