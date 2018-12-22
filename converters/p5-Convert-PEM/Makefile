# Created by: Michael Haro <mharo@FreeBSD.org>
# $FreeBSD: head/converters/p5-Convert-PEM/Makefile 488079 2018-12-22 09:00:26Z amdmi3 $

PORTNAME=	Convert-PEM
PORTVERSION=	0.08
PORTREVISION=	1
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Read/write access to ASN.1-encoded PEM files with optional encryption

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-ErrorHandler>=0:devel/p5-Class-ErrorHandler \
		p5-Convert-ASN1>=0.10:converters/p5-Convert-ASN1 \
		p5-Crypt-DES_EDE3>=0:security/p5-Crypt-DES_EDE3

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
