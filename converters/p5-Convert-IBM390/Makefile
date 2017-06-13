# Created by: Jason Burgess <dev@fenux.net>
# $FreeBSD: head/converters/p5-Convert-IBM390/Makefile 436832 2017-03-24 17:47:17Z sunpoet $

PORTNAME=	Convert-IBM390
PORTVERSION=	0.29
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Functions for manipulating mainframe data

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Convert/IBM390/IBM390.so

.include <bsd.port.mk>
