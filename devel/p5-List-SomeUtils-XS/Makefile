# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/p5-List-SomeUtils-XS/Makefile 456243 2017-12-13 20:49:54Z sunpoet $

PORTNAME=	List-SomeUtils-XS
PORTVERSION=	0.56
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	XS implementation for List::SomeUtils

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	p5-Test-LeakTrace>=0:devel/p5-Test-LeakTrace \
		p5-Test-Warnings>=0.006:devel/p5-Test-Warnings

USE_PERL5=	configure
USES=		perl5

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/List/SomeUtils/XS/XS.so

.include <bsd.port.mk>
