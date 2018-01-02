# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: head/www/p5-WebDriver-Tiny/Makefile 457001 2017-12-22 23:04:37Z sunpoet $

PORTNAME=	WebDriver-Tiny
PORTVERSION=	0.100
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:CVLIBRARY
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Selenium 2.0 bindings for Perl

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	p5-Test-Deep>=0:devel/p5-Test-Deep

USES=		perl5
USE_PERL5=	modbuildtiny
NO_ARCH=	yes

post-extract:
	@${FIND} ${WRKSRC}/lib/ -name '*.pod' -delete

.include <bsd.port.mk>
