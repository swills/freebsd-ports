# Created by: vanilla@
# $FreeBSD: head/security/p5-CryptX/Makefile 442524 2017-06-04 03:23:50Z vanilla $

PORTNAME=	CryptX
PORTVERSION=	0.048
CATEGORIES=	security perl5
MASTER_SITES=	CPAN/Crypt
PKGNAMEPREFIX=	p5-

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Crypto toolkit

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/CryptX/CryptX.so

.include <bsd.port.mk>
