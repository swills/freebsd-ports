# $FreeBSD: head/mail/p5-Email-MIME-Encodings/Makefile 479015 2018-09-05 09:08:16Z amdmi3 $

PORTNAME=	Email-MIME-Encodings
PORTVERSION=	1.315
PORTREVISION=	1
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Unified interface to MIME encoding and decoding

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-MIME-Base64>3.05:converters/p5-MIME-Base64

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
