# $FreeBSD: head/archivers/p5-Compress-LZ4/Makefile 437883 2017-04-06 21:56:06Z sunpoet $

PORTNAME=	Compress-LZ4
PORTVERSION=	0.25
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interface to the LZ4 (de)compressor

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Compress/LZ4/LZ4.so

.include <bsd.port.mk>
