# Created by: nork@FreeBSD.org
# $FreeBSD: head/security/p5-Crypt-OpenSSL-DSA/Makefile 431579 2017-01-15 15:21:52Z sunpoet $

PORTNAME=	Crypt-OpenSSL-DSA
PORTVERSION=	0.19
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module to DSA signature verification using OpenSSL

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

USES=		perl5 ssl
USE_PERL5=	configure
MAKE_ARGS+=	PASTHRU_INC=-I${OPENSSLINC}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Crypt/OpenSSL/DSA/DSA.so

.include <bsd.port.mk>
