# Created by: mat
# $FreeBSD: head/devel/p5-Devel-PPPort/Makefile 496372 2019-03-20 18:03:34Z sunpoet $

PORTNAME=	Devel-PPPort
PORTVERSION=	3.45
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl/Pollution/Portability

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Devel/PPPort/PPPort.so

.include <bsd.port.mk>
