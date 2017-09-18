# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/math/p5-Math-String/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Math-String
PORTVERSION=	1.29
PORTREVISION=	1
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to calculate with strings as if they were big integers

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 502508
BUILD_DEPENDS+=	p5-Math-BigInt>=1.999802:math/p5-Math-BigInt
RUN_DEPENDS+=	p5-Math-BigInt>=1.999802:math/p5-Math-BigInt
.endif

.include <bsd.port.post.mk>
