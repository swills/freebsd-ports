# Created by: vanilla
# $FreeBSD: head/www/p5-HTML-Strip/Makefile 413990 2016-04-25 09:12:02Z sunpoet $

PORTNAME=	HTML-Strip
PORTVERSION=	2.10
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module for strip HTML tag

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/HTML/Strip/Strip.so

.include <bsd.port.mk>
