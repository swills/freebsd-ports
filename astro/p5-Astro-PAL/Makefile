# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/astro/p5-Astro-PAL/Makefile 432932 2017-01-31 16:21:45Z mat $

PORTNAME=	Astro-PAL
PORTVERSION=	1.07
PORTREVISION=	3
CATEGORIES=	astro perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl interface to Starlink PAL positional astronomy library

LICENSE=	GPLv3

TEST_DEPENDS=	p5-Test-Number-Delta>=1:devel/p5-Test-Number-Delta

USE_PERL5=	modbuild
USES=		perl5

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Astro/PAL/PAL.so

.include <bsd.port.mk>
