# Created by: Bill "I hate Perl" Fumerola
# $FreeBSD: head/textproc/p5-Text-Template/Makefile 490425 2019-01-15 21:20:15Z sunpoet $

PORTNAME=	Text-Template
PORTVERSION=	1.54
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Expand template text with embedded Perl

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	p5-Test-More-UTF8>=0:devel/p5-Test-More-UTF8 \
		p5-Test-Warnings>=0:devel/p5-Test-Warnings

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
