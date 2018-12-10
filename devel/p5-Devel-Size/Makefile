# Created by: mat
# $FreeBSD: head/devel/p5-Devel-Size/Makefile 487032 2018-12-09 09:01:34Z amdmi3 $

PORTNAME=	Devel-Size
PORTVERSION=	0.82
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for finding the memory usage of Perl variables

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Devel/Size/Size.so

.include <bsd.port.mk>
