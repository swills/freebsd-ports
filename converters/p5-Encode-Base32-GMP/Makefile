# $FreeBSD: head/converters/p5-Encode-Base32-GMP/Makefile 472933 2018-06-20 19:37:57Z sunpoet $

PORTNAME=	Encode-Base32-GMP
PORTVERSION=	0.02
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bokutin@bokut.in
COMMENT=	High speed Base32 encoding using GMP with BigInt and MD5 support

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	p5-Math-GMPz>=0:math/p5-Math-GMPz
TEST_DEPENDS=	p5-Test-Base>=0:devel/p5-Test-Base

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
