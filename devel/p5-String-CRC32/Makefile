# Created by: ache
# $FreeBSD: head/devel/p5-String-CRC32/Makefile 444387 2017-06-26 19:35:59Z sunpoet $

PORTNAME=	String-CRC32
PORTVERSION=	1.6
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface for cyclic redundancy check generation

LICENSE=	CC0-1.0

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/String/CRC32/CRC32.so

.include <bsd.port.mk>
