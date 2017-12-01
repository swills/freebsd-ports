# Created by: vanilla@
# $FreeBSD: head/security/p5-CryptX/Makefile 455203 2017-11-30 14:56:20Z vanilla $

PORTNAME=	CryptX
PORTVERSION=	0.055
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
