# Created by: James FitzGibbon <jfitz@FreeBSD.org>
# $FreeBSD: head/devel/p5-BSD-Resource/Makefile 464569 2018-03-15 07:51:09Z tobik $

PORTNAME=	BSD-Resource
PORTVERSION=	1.2911
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Perl module to access BSD resource limit and priority functions

LICENSE=	ART20 GPLv2
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-Test-Pod>=1.51:devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=1.10:devel/p5-Test-Pod-Coverage

USES=		perl5
USE_PERL5=	configure

post-install:
	@${STRIP_CMD} ${STAGEDIR}/${PREFIX}/${SITE_ARCH_REL}/auto/BSD/Resource/Resource.so

.include <bsd.port.mk>
