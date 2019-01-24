# Created by: Michael Haro <mharo@FreeBSD.org>
# $FreeBSD: head/security/p5-Crypt-Random/Makefile 490194 2019-01-13 20:09:22Z sunpoet $

PORTNAME=	Crypt-Random
PORTVERSION=	1.52
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Cryptographically Secure, True Random Number Generator

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Loader>=2.00:devel/p5-Class-Loader \
		p5-Math-Pari>=2.001804:math/p5-Math-Pari \
		p5-Statistics-ChiSquare>=1.0000:math/p5-Statistics-ChiSquare

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
