# $FreeBSD: head/devel/p5-B-Generate/Makefile 456925 2017-12-21 17:41:20Z sunpoet $

PORTNAME=	B-Generate
PORTVERSION=	1.56
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Create your own Perl op trees

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/B/Generate/Generate.so

.include <bsd.port.mk>
